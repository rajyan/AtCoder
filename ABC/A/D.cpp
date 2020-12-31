#include <cstdio>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>

#ifdef _DEBUG
#define DMP(x) cerr << #x << ": " << x << "\n"
#else
#define DMP(x) ((void)0)
#endif

const int MOD = 1000000007, INF = 1111111111; 
using namespace std;
using lint = long long;

inline int sgn(const int &n) { return n ? 1 : -1; }

int main() {

	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	struct para { 
		lint x, y, z; 
		para() :x(0), y(0), z(0) {};
		para operator += (const para &rhs) { x += rhs.x, y += rhs.y, z += rhs.z; return *this; }
		lint pabs() { return abs(x) + abs(y) + abs(z); };
	};
	vector<para> cake(N);
	for (int i = 0; i < N; i++) cin >> cake[i].x >> cake[i].y >> cake[i].z;

	lint ans = 0;

	for (int bit = 0b0; bit < 8; bit++) {
		para sum;
		sort(cake.begin(), cake.end(), [&](para a, para b) { 
			return sgn(bit&4)*a.x + sgn(bit&2)*a.y + sgn(bit&1)*a.z > sgn(bit&4)*b.x + sgn(bit&2)*b.y + sgn(bit&1)*b.z;
		});
		for (int i = 0; i < M; i++) { sum += cake[i]; }
		ans = max(ans, sum.pabs());
	}

	cout << ans << "\n";

	return 0;
}
#include <cassert>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>

const int MOD = 1000000007, INF = 1111111111;
using namespace std;
using lint = long long;

template <class T>
ostream &operator<<(ostream &os, const vector<T> &vec) {
	for (int i = 0; i < (int)vec.size(); i++) {
		os << vec[i] << (i + 1 == vec.size() ? "" : " ");
	}
	return os;
}

#ifdef _DEBUG
template <class Head>
void dump(const char* str, Head &&h) { cerr << str << " = " << h << "\n"; };
template <class Head, class... Tail>
void dump(const char* str, Head &&h, Tail &&... t) {
	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
	dump(str + 1, t...);
}
#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
#else 
#define DMP(...) ((void)0)
#endif

struct Point {
	int x, y;

	bool operator<=(const Point &lhs) const { return (x <= lhs.x && y <= lhs.y); }

	Point() {}
	Point(int x, int y) : x(x), y(y) {}

};

int main() {

	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int N, K;
	cin >> N >> K;

	vector<Point> pnts(N);
	for (int i = 0; i < N; i++) cin >> pnts[i].x >> pnts[i].y;

	lint ans = numeric_limits<lint>::max();
	for (int p1 = 0; p1 < N; p1++) {
		for (int p2 = 0; p2 < N; p2++) {
			for (int p3 = 0; p3 < N; p3++) {
				for (int p4 = 0; p4 < N; p4++) {

					Point upright(max({ pnts[p1].x,pnts[p2].x,pnts[p3].x,pnts[p4].x }),
							max({ pnts[p1].y,pnts[p2].y,pnts[p3].y,pnts[p4].y }));
					Point lowleft(min({ pnts[p1].x,pnts[p2].x,pnts[p3].x,pnts[p4].x }),
							min({ pnts[p1].y,pnts[p2].y,pnts[p3].y,pnts[p4].y }));

					int cnt = 0;
					for (int i = 0; i < N; i++) if (lowleft <= pnts[i] && pnts[i] <= upright) cnt++;
					if (cnt == K) ans = min(ans, 1LL * (upright.x - lowleft.x) * (upright.y - lowleft.y));

				}
			}
		}
	}

	cout << ans << "\n";

	return 0;
}
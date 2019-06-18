#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>

#ifdef _DEBUG
#define DMP(x) cerr << #x << ": " << x << "\n"
#else
#define DMP(x) ((void)0)
#endif

const int MOD = 1000000007, INF = 1111111111;
using namespace std;
typedef long long lint;

class UnionFind {
private:
	vector<lint> data;
public:
	int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }

	UnionFind(lint size) : data(size, -1) { }
	bool is_same(int x, int y) { return root(x) == root(y); }
	int size(lint x) { return -data[root(x)]; }

	void unify(lint x, lint y) {
		x = root(x); y = root(y);
		if (x != y) {
			if (data[y] < data[x]) swap(x, y);
			data[x] += data[y]; data[y] = x;
		}
	}
};

int main() {

	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	lint N, K, L;
	cin >> N >> K >> L;

	vector<pair<lint, lint>> road(K), line(L);
	for (int i = 0; i < K; i++) cin >> road[i].first >> road[i].second;
	for (int i = 0; i < L; i++) cin >> line[i].first >> line[i].second;

	UnionFind UFroad(N), UFline(N);
	for (const auto &elem : road) UFroad.unify(elem.first - 1, elem.second - 1);
	for (const auto &elem : line) UFline.unify(elem.first - 1, elem.second - 1);

	map<pair<int, int>, int> roots;
	for (int i = 0; i < N; i++) roots[make_pair(UFroad.root(i), UFline.root(i))]++;
	for (int i = 0; i < N; i++) cout << roots[make_pair(UFroad.root(i), UFline.root(i))] << " ";

	return 0;
}

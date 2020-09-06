//#ifdef _DEBUG
//#include "../../library/library/debug_template.cpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else
//#define DMP(...) ((void)0)
//#endif
//
//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <vector>
//#include <set>
//#include <map>
//#include <unordered_map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//#include <bitset>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1010101010;
//constexpr lint LINF = 1LL << 60;
//
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//class UnionFind {
//private:
//	vector<int> data;
//public:
//	UnionFind(int size) : data(size, -1) { }
//	int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }
//	bool is_same(int x, int y) { return root(x) == root(y); }
//	int size(int x) { return -data[root(x)]; }
//
//	bool unify(int x, int y) {
//		x = root(x); y = root(y);
//		if (x != y) {
//			if (data[y] < data[x]) swap(x, y);
//			data[x] += data[y]; data[y] = x;
//			return true;
//		}
//		return false;
//	}
//};
//
//int main() {
//
//	int N;
//	cin >> N;
//	string s, t;
//	cin >> s >> t;
//
//	UnionFind uf(26);
//	for (int i = 0; i < N; i++) {
//		if (isalpha(s[i]) && isalpha(t[i])) {
//			uf.unify(s[i] - 'A', t[i] - 'A');
//		}
//	}
//
//	vector<int> used(26);
//	for (int i = 0; i < N; i++) {
//		if (isdigit(s[i]) && isdigit(t[i])) continue;
//		if (isalpha(s[i]) && isalpha(t[i])) continue;
//		if (isdigit(s[i])) swap(s[i], t[i]);
//		used[uf.root(s[i] - 'A')] = 1;
//	}
//
//	DMP(s, t);
//
//	lint ans = 1;
//	if (isalpha(t[0]) && !used[uf.root(s[0] - 'A')]) {
//		ans = 9;
//		used[uf.root(s[0] - 'A')] = 1;
//	}
//	for (int i = 1; i < N; i++) {
//		if (isdigit(s[i]) && isdigit(t[i])) continue;
//		if (isalpha(s[i])) {
//			if (!used[uf.root(s[i] - 'A')]) {
//				ans *= 10;
//				used[uf.root(s[i] - 'A')] = 1;
//			}
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}

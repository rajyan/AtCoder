#include <cassert>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <queue>
#include <numeric>
#include <algorithm>

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007, INF = 1010101010;
constexpr lint LINF = 1LL << 60;

#ifdef _DEBUG
#include "../../library/library/debug_template.cpp"
#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
#else 
#define DMP(...) ((void)0)
#endif

struct init {
	init() {
		cin.tie(nullptr); ios::sync_with_stdio(false);
		cout << fixed << setprecision(10);
	}
} init_;

int main() {

	int N, Q;
	cin >> N >> Q;

	const int kg_num = 200000;

	vector<priority_queue<int>> kg(kg_num + 1);
	// 幼稚園ごとの園児  幼稚園id, (レート, 園児id) *rbeginが最大
	unordered_map<int, set<pair<int, int>>> mp;
	// 幼稚園ごとの最大のレート (maxレート、園児id) *beginがans
	set<pair<int, int>> maxst;
	// 園児idに対する所属
	vector<int> v(N);
	// 園児idに対するレート
	vector<int> rate(N);

	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		mp[b].emplace(a, i);
		rate[i] = a;
		v[i] = b;
	}

	for (const auto& [id, st] : mp) maxst.emplace(*st.rbegin());

	for (int i = 0; i < Q; i++) {
		int c, d;
		cin >> c >> d;
		c--;

		// 現在の所属と移動先の最大をmaxstから削除しておく
		maxst.erase(*mp[v[c]].rbegin());
		if (!mp[d].empty()) maxst.erase(*mp[d].rbegin());

		// 園児を移動させる
		auto p = make_pair(rate[c], c);
		mp[v[c]].erase(p);
		mp[d].emplace(p);

		// 削除したところの最大最小を入れなおす
		if (!mp[v[c]].empty()) maxst.emplace(*mp[v[c]].rbegin());
		maxst.emplace(*mp[d].rbegin());

		// 所属情報を移す
		v[c] = d;

		cout << maxst.begin()->first << "\n";

	}

	return 0;
}


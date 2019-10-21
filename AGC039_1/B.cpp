#include <cassert>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <numeric>
#include <algorithm>
#include <iterator>

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007, INF = 1010101010;
constexpr lint LINF = 1LL << 60;

template <class T>
ostream &operator<<(ostream &os, const vector<T> &vec) {
	for (const auto &e : vec) os << e << (&e == &vec.back() ? "\n" : " ");
	return os;
}

#ifdef _DEBUG
template <class T>
void dump(const char* str, T &&h) { cerr << str << " = " << h << "\n"; };
template <class Head, class... Tail>
void dump(const char* str, Head &&h, Tail &&... t) {
	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
	dump(str + (*(str + 1) == ' ' ? 2 : 1), t...);
}
#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
#else 
#define DMP(...) ((void)0)
#endif

class topological_sort {
private:
	int V;
	vector<vector<int>> edges;
	vector<int> used;
public:
	topological_sort(int n) :V(n), edges(n), used(n) {}
	topological_sort(vector<vector<int>> &edges) :V(edges.size()), used(edges.size()) { this->edges = edges; }

	void add_edge(int from, int to) { edges[from].emplace_back(to); }

	vector<int> build() {

		vector<int> res, in(V);
		for (int i = 0; i < V; i++) for (const auto &e : edges[i]) in[e]++;

		res.reserve(V);
		queue<int> que;
		for (int i = 0; i < V; i++) {
			if (in[i] == 0 && !used[i]) {
				used[i] = 1;
				que.emplace(i);
			}
		}
		while (!que.empty()) {
			int now = que.front();
			DMP(now, in);
			que.pop();
			res.emplace_back(now);
			for (const auto &e : edges[now]) {
				in[e]--;
				if (in[e] == 0) {
					if (used[e]) return vector<int>(); // unable to sort
					used[e] = used[now] + 1;
					que.emplace(e);
				}
			}
		}

		return res;
	}

	int longest_path() {
		if (none_of(used.begin(), used.end(), [](int u) { return u > 0; })) build();
		return *max_element(used.begin(), used.end()) - 1;
	}

};

template <class T>
ostream &operator<<(ostream &os, const set<T> &st) {
	for (const auto &e : st) os << e << " ";
	return os;
}

template <class T1, class T2>
ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
	os << "(" << p.first << "," << p.second << ")";
	return os;
}

template <class T1, class T2>
ostream &operator<<(ostream &os, const map<T1, T2> &mp) {
	for (const auto &e : mp) os << e << " ";
	return os;
}

int main() {

	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	//vector<vector<int>> d(N, vector<int>(N));
	//for (int i = 0; i < N * N; i++) cin >> d[i/N][i%N];

	vector<vector<int>> edges(N);
	set<pair<int, int>> memo;
	for (int i = 0; i < N * N; i++) {
		char s; cin >> s;
		if (s == '1') {
			edges[i / N].emplace_back(i % N);
			memo.emplace(minmax(i / N, i % N));
		}
	}
	DMP(memo);

	vector<set<int>> color(N);
	bool ok = true;
	vector<int> used(N);
	auto dfs = [&](auto &&f, int now) -> void {
		
		used[now] = 1;

		set<int> tmp_now;
		for (const auto &e : color[now]) {
			tmp_now.emplace(e - 1);
			tmp_now.emplace(e + 1);
		}

		for (const auto &next: edges[now]) {
			if (memo.find(minmax(now, next)) != memo.end()) {
				memo.erase(minmax(now, next));
				if (color[next].empty()) color[next] = tmp_now;
				else {
					set<int> tmp_next;
					for (const auto &e : color[next]) {
						tmp_next.emplace(e - 1);
						tmp_next.emplace(e + 1);
					}
					vector<int> res1, res2;
					set_intersection(color[now].begin(), color[now].end(), tmp_next.begin(), tmp_next.end(), inserter(res1, res1.end()));
					set_intersection(color[next].begin(), color[next].end(), tmp_now.begin(), tmp_now.end(), inserter(res2, res2.end()));

					color[now] = set<int>(res1.begin(), res1.end());
					color[next] = set<int>(res2.begin(), res2.end());

					DMP(now, next, res1, res2);
				}
				if (!used[next]) f(f, next);
			}
		}

	};

	color[0].emplace(0);
	used[0] = 1;
	dfs(dfs, 0);

	DMP(used);
	for (int i = 0; i < N; i++) DMP(color[i]);

	vector<int> color2(N, INF), used2(N);
	set<int> ans;

	if (any_of(color.begin(), color.end(), [](auto s) {return s.empty(); })) {
		cout << -1 << "\n";
		return 0;
	}

	auto dfs2 = [&](auto &&f, int now) -> void {

		used2[now] = 1;

		for (const auto &e : color[now]) if (ans.find(e) == ans.end()) color2[now] = e;
		if (color2[now] == INF) color2[now] = *color[now].begin();
		ans.emplace(color2[now]);

		for (const auto &next : edges[now]) {
			set<int> tmp;
			for (const auto &e : color[next]) {
				if (e != color2[now] + 1 && e != color2[now] - 1) continue;
				tmp.emplace(e);
			}
			color[next] = tmp;
			DMP(color);
			if (!used2[next]) f(f, next);
		}

	};

	used2[0] = 1;
	color2[0] = 0;
	ans.emplace(0);
	dfs2(dfs2, 0);

	cout << ans.size() << "\n";

	return 0;
}
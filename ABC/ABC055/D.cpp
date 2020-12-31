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

#define FOR(idx, begin, end) for(int idx = (int)(begin); idx < (int)(end); ++idx)

#ifdef _DEBUG
#define DMP(x) cerr << #x << ": " << x << "\n"
#else
#define DMP(x) ((void)0)
#endif

using namespace std;
typedef long long lint;

const int MOD = 100000007;
const int INF = 1 << 29;
const double EPS = 1e-9;


int main() {

	cin.tie(0);

	int N;
	string s;
	cin >> N >> s;
	s += s;

	vector<vector<char>> ans(4);
	string ans_in = "SSSWWWWS";

	FOR(i, 0, 4) {

		ans[i].emplace_back(ans_in[2 * i]);
		ans[i].emplace_back(ans_in[2 * i + 1]);

		FOR(j, 1, N + 1) {

			if (s[j] == 'o') {
				     if (*(ans[i].end() - 2) == 'S' && *(ans[i].end() - 1) == 'S') ans[i].emplace_back('S');
				else if (*(ans[i].end() - 2) == 'W' && *(ans[i].end() - 1) == 'S') ans[i].emplace_back('W');
				else if (*(ans[i].end() - 2) == 'W' && *(ans[i].end() - 1) == 'W') ans[i].emplace_back('S');
				else if (*(ans[i].end() - 2) == 'S' && *(ans[i].end() - 1) == 'W') ans[i].emplace_back('W');
				else return -1;
			}
			if (s[j] == 'x') {
				     if (*(ans[i].end() - 2) == 'S' && *(ans[i].end() - 1) == 'S') ans[i].emplace_back('W');
				else if (*(ans[i].end() - 2) == 'W' && *(ans[i].end() - 1) == 'S') ans[i].emplace_back('S');
				else if (*(ans[i].end() - 2) == 'W' && *(ans[i].end() - 1) == 'W') ans[i].emplace_back('W');
				else if (*(ans[i].end() - 2) == 'S' && *(ans[i].end() - 1) == 'W') ans[i].emplace_back('S');
				else return -1;
			}
		}

		if (ans[i].front() == *(ans[i].end() - 2) && *(ans[i].begin() + 1) == ans[i].back()) {

			ans[i].erase(ans[i].end() - 2, ans[i].end());
			for (auto &elem : ans[i]) cout << elem;
			return 0;
		}
	}
		cout << "-1";
		return 0;
}
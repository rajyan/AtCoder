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

#define FOR(idx, begin, end) for(int idx = (int)(begin), idx##_sz = (int)(end); idx < idx##_sz; ++idx)

#ifdef _DEBUG
#define DMP(x) cerr << #x << ": " << x << "\n"
#else
#define DMP(x) ((void)0)
#endif

using namespace std;
typedef long long lint;

const int MOD = 1000000007, INF = 1111111111;
const double EPS = 1e-9;

//template <lint MOD = 1000000007> class modint {
//private:
//	modint& set(lint val) {
//		val = (val < MOD) ? v : v - MOD;
//		return *this;
//	}
//public:
//	lint m;
//
//	modint(lint x = 0) { set(x % MOD + MOD); }
//
//	modint operator-() { return modint(0) - *this}
//	modint operator+=(const modint &x) { return modint.set(m + x.m); }
//	modint operator-=(const modint &x) { return modint.set(m + MOD - x.m); }
//	modint operator*=(const modint &x) { return modint.set(m * x.m % MOD); }
//	modint operator/=(const modint &x) { return }
//
//
//};

int main() {

	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	lint H, W, N;
	cin >> H >> W >> N;

	vector<pair<int, int>> blk(N);
	for (int i = 0; i < N; i++) cin >> blk[i].first >> blk[i].second;

	map<lint, lint> sqmap;
	vector<int> dxdy{-1, 0, 1};

	for (int i = 0; i < N; i++) {

		for (const auto &dx : dxdy) {
			for (const auto &dy : dxdy) {

				lint x = blk[i].second + dx;
				lint y = blk[i].first + dy;

				if (1 < x && x < W && 1 < y && y < H) {
					sqmap[(y - 1) * W + x - 1]++;
				}

			}
		}

	}

	vector<lint> ans(10);
	for (const auto &elem : sqmap) ans[elem.second]++;

	ans[0] = (H - 2) * (W - 2) - (lint)(sqmap.size());

	for (const auto &elem : ans) cout << elem << "\n";

	return 0;
}
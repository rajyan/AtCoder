//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1010101010;
//constexpr lint LINF = 1LL << 60;
//
//#ifdef _DEBUG
//#include "../../../../library/src/debug_template.hpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//template<class T>
//inline bool chmax(T &a, const T b) { return a < b && (a = b, true); }
//template<class T>
//inline bool chmin(T &a, const T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<string> S(N);
//	for (int i = 0; i < N; i++) cin >> S[i];
//
//	vector<pair<int, int>> l, r;
//	for (int i = 0; i < N; i++) {
//		int sum = 0, m = 0;;
//		for (const auto &c : S[i]) {
//			sum += (c == '(') - (c == ')');
//			chmin(m, sum);
//		}
//		if (sum > 0) l.emplace_back(m, sum);
//		else r.emplace_back(m - sum, -sum);
//	}
//
//	sort(l.begin(), l.end(), greater<>());
//	sort(r.begin(), r.end(), greater<>());
//	DMP(l, r);
//
//	auto check = [](auto &vec) {
//		int sum = 0;
//		for (int i = 0; i < vec.size(); i++) {
//			if (sum + vec[i].first < 0) return -1;
//			sum += vec[i].second;
//		}
//		return sum;
//	};
//
//	if (int res = check(l); res == check(r) && res != -1) cout << "Yes" << "\n";
//	else cout << "No" << "\n";
//
//	return 0;
//}
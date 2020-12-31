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
//#include "../../library/library/debug_template.cpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//int main() {
//
//	int N;
//	cin >> N;
//
//	vector<string> ans(1, "a");
//	vector<char> M(1, 'a');
//	for (int i = 1; i < N; i++) {
//		vector<string> tmp;
//		vector<char> tmpM;
//		assert(ans.size() == M.size());
//		for (int i = 0; i < ans.size(); i++) {
//			const char b = M[i];
//			for (char c = 'a'; c <= b + 1; c++) {
//				tmp.emplace_back(ans[i] + c);
//				tmpM.emplace_back(max(b, c));
//			}
//		}
//		swap(ans, tmp);
//		swap(M, tmpM);
//	}
//	DMP(ans.size());
//	sort(ans.begin(), ans.end());
//	for (const auto& s : ans) cout << s << "\n";
//
//	return 0;
//}
//

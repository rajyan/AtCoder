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
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "" : " ");
//	return os;
//}
//
//#ifdef _DEBUG
//template <class T>
//void dump(const char* str, T &&h) { cerr << str << " = " << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head &&h, Tail &&... t) {
//	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
//	dump(str + (*(str + 1) == ' ' ? 2 : 1), t...);
//}
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	vector<int> A(5);
//	for (int i = 0; i < 5; i++) cin >> A[i];
//
//	vector<int> ans;
//	ans.reserve(10); // 5C3
//	vector<int> use(5);
//	fill(use.end() - 3, use.end(), 1);
//	do {
//
//		int sum = 0;
//		for (int i = 0; i < 5; i++) {
//			if (use[i]) sum += A[i];
//		}
//
//		ans.emplace_back(sum);
//
//	} while (next_permutation(use.begin(), use.end()));
//
//	DMP(ans);
//
//	sort(ans.begin(), ans.end(), greater<int>());
//	cout << ans[2] << "\n";
//
//	return 0;
//}
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
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "\n" : " ");
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
//	int N, M;
//	cin >> N >> M;
//
//	string s;
//	cin >> s;
//
//	if (s.back() == -1) {
//		cout << -1 << "\n";
//		return 0;
//	}
//
//	vector<int> ans;
//	ans.reserve(N);
//	for (int i = s.size() - 1; i >= 0; i--) {
//
//		if (i == 0) break;
//
//		for (int j = M; j >= 0; j--) {
//
//			if (j == 0) {
//				cout << -1 << "\n";
//				return 0;
//			}
//
//			if (i - j >= 0 && s[i - j] == '0') {
//				DMP(j);
//				i -= j - 1;
//				ans.emplace_back(j);
//				break;
//			}
//
//		}
//	}
//
//	reverse(ans.begin(), ans.end());
//
//	cout << ans << "\n";
//
//	return 0;
//}
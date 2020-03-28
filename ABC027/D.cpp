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
//	string S;
//	cin >> S;
//
//	int S_sz = (int)S.size();
//
//	vector<int> sum{ 0 };
//	sum.reserve(S_sz);
//
//	for (int i = 0; i < S_sz; i++) {
//
//		if(S[i] == 'M') sum.emplace_back(0);
//		else if (S[i] == '+') {
//			sum.front()++;
//			sum.back()--;
//		}
//		else {
//			sum.front()--;
//			sum.back()++;
//		}
//
//	}
//
//	int sum_sz = (int)sum.size();
//
//	for (int i = 0; i < sum_sz - 1; i++) sum[i + 1] += sum[i];
//	sum.pop_back();
//	sort(sum.begin(), sum.end());
//
//	int ans = 0;
//	ans -= accumulate(sum.begin(), sum.begin() + sum_sz / 2, 0);
//	ans += accumulate(sum.begin() + sum_sz / 2, sum.end(), 0);
//
//	cout << ans << "\n";
//
//	return 0;
//}
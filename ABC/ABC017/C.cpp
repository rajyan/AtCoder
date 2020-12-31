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
//	vector<vector<int>> rem(N, vector<int>(3));
//	vector<int> jew(M + 1);
//	for (int i = 0; i < N; i++) {
//		int r, l, s;
//		cin >> r >> l >> s;
//		r--;
//		rem[i] = { r,l,s };
//		jew[r]+=s, jew[l]-=s;
//	}
//
//	for (int i = 0; i < M - 1; i++) jew[i + 1] += jew[i];
//	int min_i = min_element(jew.begin(), jew.end() - 1) - jew.begin();
//
//	cout << accumulate(rem.begin(), rem.end(), 0, [&](int &sum, auto &rem) {
//
//		if (rem[0] <= min_i && min_i < rem[1]) return sum;
//		else return sum += rem[2];
//	
//	}) << "\n";
//
//	return 0;
//}
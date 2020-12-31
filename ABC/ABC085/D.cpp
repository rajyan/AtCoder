//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//#include <map>
//#include <queue>
//#include <algorithm>
//
//
//const int MOD = 1000000007, INF = 1111111111; 
//using namespace std;
//using lint = long long;
//
//template <typename T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (int i = 0; i < vec.size(); i++) {
//		os << vec[i] << (i + 1 == vec.size() ? "" : " ");
//	}
//	os << "\n";
//	return os;
//}
//
//#ifdef _DEBUG
//template <class Head>
//void dump(const char* str, Head &&h) { cerr << str << " = " << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head &&h, Tail &&... t) {
//	while (*str != ',') cerr << *str++; cerr << " =\n" << h << "\n";
//	dump(str + 1, t...);
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
//	lint N, H;
//	cin >> N >> H;
//
//	vector<lint> a(N), b(N);
//	for (int i = 0; i < N; i++) cin >> a[i] >> b[i];
//	sort(a.begin(), a.end());
//	sort(b.begin(), b.end());
//
//	lint sum = 0;
//	auto x = upper_bound(b.begin(), b.end(), a.back());
//	for (auto itr = b.end(); itr != x; itr--) {
//		sum += *(itr - 1);
//		if (sum >= H) {
//			cout << b.end() - itr + 1 << "\n";
//			return 0;
//		}
//	}
//
//	H -= sum;
//	cout << (b.end() - x) + (H - 1) / a.back() + 1 << "\n"; 
//
//	return 0;
//}
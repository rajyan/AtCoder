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
//const int MOD = 1000000007, INF = 1111111111;
//using namespace std;
//using lint = long long;
//
//template <typename T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (int i = 0; i < vec.size(); i++) {
//		os << vec[i] << (i + 1 == vec.size() ? "" : " ");
//	}
//	return os;
//}
//
//#ifdef _DEBUG
//template <class Head>
//void dump(const char* str, Head &&h) { cerr << str << " = " << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head &&h, Tail &&... t) {
//	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
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
//	int N;
//	cin >> N;
//
//	vector<lint> A(N + 1), B(N);
//	for (int i = 0; i < N + 1; i++) cin >> A[i];
//	for (int i = 0; i < N; i++) cin >> B[i];
//
//	lint tmp = 0, ans = 0;
//	for (int i = 0; i < N; i++) {
//		if (A[i] - tmp <= 0) {
//			ans += A[i];
//			tmp = B[i];
//		}
//		else if (A[i] - tmp - B[i] >= 0) {
//			ans += tmp + B[i];
//			tmp = 0;
//		}
//		else {
//			ans += A[i];
//			tmp = B[i] - (A[i] - tmp);
//		}
//	}
//
//	if (tmp > 0)ans += min(tmp, A[N]);
//
//	cout << ans << "\n";
//
//	return 0;
//}
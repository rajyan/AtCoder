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
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (int i = 0; i < (int)vec.size(); i++) {
//		os << vec[i] << (i + 1 == vec.size() ? "" : " ");
//	}
//	return os;
//}
//
//#ifdef _DEBUG2
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
//	lint N;
//	cin >> N;
//
//	vector<int> A(N), B(N), C(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//	for (int i = 0; i < N; i++) cin >> B[i];
//	for (int i = 0; i < N; i++) cin >> C[i];
//
//	sort(A.begin(), A.end());
//	sort(B.begin(), B.end());
//	sort(C.begin(), C.end());
//
//	vector<lint> memo(N + 1);
//	for (int i = 0; i < N; i++) memo[i] = N - (upper_bound(C.begin(), C.end(), B[i]) - C.begin());
//	for (int i = N - 1; i >= 1; i--) memo[i - 1] += memo[i];
//
//	lint ans = 0;
//	for (int i = 0; i < N; i++) ans += memo[(upper_bound(B.begin(), B.end(), A[i]) - B.begin())];
//
//	cout << ans << "\n";
//
//	return 0;
//}
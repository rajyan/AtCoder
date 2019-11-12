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
//	int K, M;
//	cin >> K >> M;
//
//	vector<lint> A(K), C(K);
//	for (int i = 0; i < K; i++) cin >> A[i];
//	for (int i = 0; i < K; i++) cin >> C[i];
//
//	map<lint, int> mpA;
//	lint now = -1;
//	
//	int n = 0;
//	while (mpA.find(now) == mpA.end() || (mpA.find(now)--)->first != A[n - 1]) {
//
//		lint next = 0;
//		for (int i = 0; i < K; i++) next ^= (C[i] & A[n + K - i - 1]);
//		A.emplace_back(next);
//		mpA.emplace(now, n);
//		
//		n++;
//		now = next;
//	}
//	DMP(A, mpA[A.back()]);
//	
//	lint offset = K + mpA[A.back()];
//	lint loop_sz = (lint)A.size() - offset;
//
//	DMP(loop_sz);
//	
//	if ((M - 1) - offset < 0) cout << A[M - 1] << "\n";
//	else cout << A[(M - 1 - offset) % loop_sz + offset] << "\n";
//
//	return 0;
//}
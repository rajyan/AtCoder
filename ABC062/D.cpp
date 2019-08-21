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
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007;
//constexpr lint LINF = (1LL << 60);
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "" : " ");
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
//	os << p.first << " " << p.second;
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const map<T1, T2> &mp) {
//	for (const auto &e : mp) os << "[" << e << "] ";
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
//	int N;
//	cin >> N;
//
//	vector<int> a(3 * N);
//	for (int i = 0; i < 3 * N; i++) cin >> a[i];
//
//	vector<lint> smax(3 * N, 0), smin(3 * N, 0);
//
//	// Max
//	{
//		priority_queue<int, vector<int>, greater<int>> pqmax;
//		lint Mtmp = 0;
//		for (int i = 0; i < N; i++) {
//			pqmax.emplace(a[i]);
//			Mtmp += a[i];
//		}
//		smax[N - 1] = Mtmp;
//		for (int i = N; i < 2 * N; i++) {
//
//			if (pqmax.top() < a[i]) {
//				Mtmp += a[i] - pqmax.top();
//				pqmax.pop();
//				pqmax.emplace(a[i]);
//			}
//
//			smax[i] = Mtmp;
//		}
//	}
//
//	// min
//	{
//		priority_queue<int> pqmin;
//		lint mtmp = 0;
//		for (int i = 3 * N - 1; i >= 2 * N; i--) {
//			pqmin.emplace(a[i]);
//			mtmp += a[i];
//		}
//		smin[2 * N] = mtmp;
//		for (int i = 2 * N - 1; i >= N; i--) {
//
//			if (pqmin.top() > a[i]) {
//				mtmp += a[i] - pqmin.top();
//				pqmin.pop();
//				pqmin.emplace(a[i]);
//			}
//
//			smin[i] = mtmp;
//		}
//	}
//
//	DMP(smax, smin);
//
//	lint ans = -LINF;
//	for (int i = N; i <= 2 * N; i++) {
//		ans = max(ans, smax[i - 1] - smin[i]);
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
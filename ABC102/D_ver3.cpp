//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1111111111;
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
//template <class T>
//class CuSum {
//private:
//	vector<T> cusum;
//public:
//	// Constructors 
//	CuSum(vector<T> const &vec) : cusum(vec.size() + 1) {
//		for (int i = 0; i < (int)vec.size(); i++) cusum[i + 1] = cusum[i] + vec[i];
//	}
//	CuSum(int N) : cusum(N + 1) {}
//	void add(int i, T x) { cusum[i + 1] += x; }
//	void init() { for (int i = 0; i < (int)cusum.size() - 1; i++) cusum[i + 1] += cusum[i]; }
//
//	// partial sum of 0-indexed [l, r)
//	T operator()(int l, int r) {
//		if (r < l || r < 0) {
//			assert(0);
//			return T(0);
//		}
//		else return cusum[r] - cusum[l];
//	}
//	// 0-indexed
//	T operator[](int i) { return cusum[i + 1]; }
//	T back() { return cusum.back(); }
//};
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
//	os << "(" << p.first << "," << p.second << ")";
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const map<T1, T2> &mp) {
//	for (const auto &e : mp) os << e << " ";
//	return os;
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<lint> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//
//	CuSum<lint> sA(A);
//
//	auto biSearch = [&](int l, int r) {
//
//		int ng = l;
//		int ok = r;
//
//		while (abs(ok - ng) > 1) {
//			int mid = (ok + ng) / 2;
//			if (sA(l, mid) - sA(mid, r) > 0) ok = mid;
//			else ng = mid;
//		}
//		DMP(ok, ng);
//		return sA(l, ok) - sA(ok, r) > sA(ng, r) - sA(l, ng) ? ng : ok;
//	};
//
//	lint ans = LINF;
//	for (int div = 2; div < N - 1; div++) {
//		DMP(div);
//		int lmin = biSearch(0, div);
//		int rmin = biSearch(div, N);
//
//		auto tmp = minmax({ sA(0, lmin), sA(lmin, div), sA(div, rmin), sA(rmin, N) });
//		DMP(tmp);
//		ans = min(ans,tmp.second-tmp.first);
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
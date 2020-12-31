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
//const int MOD = 1000000007, INF = (1LL<<62);
//using namespace std;
//using lint = long long;
//
//template <class T>
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
//template <class T>
//class CuSum {
//private:
//	vector<T> cusum;
//public:
//	// Constructors 
//	CuSum(vector<T> const &vec) : cusum(vec.size() + 1) {
//		for (int i = 0; i < vec.size(); i++) cusum[i + 1] = cusum[i] + vec[i];
//	}
//	CuSum(int N) : cusum(N + 1) {}
//	void add(int i, T x) { cusum[i + 1] += x; }
//	void init() { for (int i = 0; i < cusum.size() - 1; i++) cusum[i + 1] += cusum[i]; }
//
//	// partial sum of 0-indexed [l, r] 
//	T operator()(int l, int r) {
//		if (r < l || r < 0) {
//			assert(0);
//			return T(0);
//		}
//		else return cusum[r + 1] - cusum[l];
//	}
//	// 0-indexed
//	T operator[](int i) { return cusum[i + 1]; }
//	T back() { return cusum.back(); }
//	auto begin() { return cusum.begin(); }
//};
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
//	CuSum<lint> sufA(A);
//
//	auto judge = [&](int mid, int &key, int l, int r) {
//
//		bool flag = true;
//		if (abs(sufA(l, mid) - sufA(mid+1, r)) < key) {
//			key = abs(sufA(l, mid) - sufA(mid+1, r));
//		}
//		else flag = false;
//
//		return flag;
//	};
//
//	auto biSearch = [&](auto f, int key, int l, int r) {
//		int ng = -1;
//		int ok = r - l + 1;
//
//		while (abs(ok - ng) > 1) {
//			int mid = (ok + ng) / 2;
//			DMP(mid, key, l, r);
//			if (f(mid, key, l, r)) ok = mid;
//			else ng = mid;
//		}
//
//		return ok;
//	};
//
//	lint ans = INF;
//	for (int center = 1; center < N-1; center++) {
//		auto cut1 = biSearch(judge, INF, 0, center);
//		auto cut2 = biSearch(judge, INF, center + 1, N - 1);
//		auto tmp = minmax({ sufA(0, cut1), sufA(cut1 + 1, center), sufA(center + 1, cut2), sufA(cut2 + 1, N - 1) });
//		ans = min(ans, tmp.second - tmp.first);
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
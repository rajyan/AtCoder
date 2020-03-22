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
//	int N;
//	cin >> N;
//
//	lint K;
//	cin >> K;
//
//	vector<int> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//	sort(A.begin(), A.end());
//
//
//	auto judge = [&](auto idx) {
//
//		lint cnt = 0;
//
//		if (idx >= 0) {
//			for (int i = 0; i < N; i++) {
//				if (A[i] == 0) cnt += N - i - 1;
//				else if (A[i] < 0) cnt += A.end() - lower_bound(A.begin() + i + 1, A.end(), idx / A[i]);
//				else cnt += upper_bound(A.begin() + i + 1, A.end(), idx / A[i]) - (A.begin() + i + 1);
//			}
//		}
//		else {
//			for (int i = 0; i < N; i++) {
//				if (A[i] < 0) cnt += A.end() - lower_bound(A.begin() + i + 1, A.end(), (idx + 1) / A[i] + 1);
//				else if (A[i] != 0)cnt += upper_bound(A.begin() + i + 1, A.end(), (idx + 1) / A[i] + 1) - (A.begin() + i + 1);
//			}
//		}
//
//		return cnt >= K;
//	};
//
//	auto binary_search = [&](auto f) {
//
//		auto ng = -LINF;
//		auto ok =  LINF;
//
//		while (abs(ok - ng) > 1) {
//			auto mid = (ok + ng) / 2;
//
//			if (f(mid)) ok = mid;
//			else ng = mid;
//		}
//
//		return ok;
//	};
//
//	lint ans = binary_search(judge);
//
//	cout << ans << "\n";
//
//	return 0;
//}
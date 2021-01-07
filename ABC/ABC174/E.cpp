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
//#ifdef _DEBUG
//#include "../../../library/src/debug_template.cpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//int main() {
//
//	int N, K;
//	cin >> N >> K;
//
//	vector<int> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//
//
//	auto judge = [&](auto idx) {
//		lint sum = 0;
//		for (int i = 0; i < N; i++) sum += (A[i] - 1) / idx;
//		return sum <= K;
//	};
//
//	auto binary_search = [&](auto f) {
//
//		auto ng = 0;
//		auto ok = INF;
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
//	cout << binary_search(judge) << "\n";
//
//	return 0;
//}
//

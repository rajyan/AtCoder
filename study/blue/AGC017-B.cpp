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
//	lint N, A, B, C, D;
//	cin >> N >> A >> B >> C >> D;
//
//	// A > B �Ȃ�swap����΂����̂Ő��̕��������ōl������
//	const lint goal = abs(A - B);
//
//	for (int i = 0; i * 2 <= N; i++) {
//		lint m = 0, M = LINF;
//
//		const int j = N - 2 * i;
//		m = (C - D) * i + C * j;
//		M = (D - C) * i + D * j;
//
//		if (m <= goal && goal <= M) {
//			DMP(m, M);
//			cout << "YES" << "\n";
//			return 0;
//		}
//	}
//
//	cout << "NO" << "\n";
//
//	return 0;
//}
//

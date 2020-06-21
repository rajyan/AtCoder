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
//#include "../../../library/library/debug_template.cpp"
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
//	int Q;
//	cin >> Q;
//
//	for (int q = 0; q < Q; q++) {
//		
//		lint L, R;
//		cin >> L >> R;
//
//		bool swapped = false;
//		if (L < R) {
//			swap(L, R);
//			swapped = true;
//		}
//
//		lint sub = L - R;
//		lint rt = sqrtl(2.0L * sub + 0.25) + 0.5;
//		if (rt * (rt - 1) >= 2 * sub) rt--;
//		lint n = rt;
//		L -= n * (n + 1) / 2;
//
//		if (L < 0) {
//			L += n;
//			n--;
//			if (swapped) swap(L, R);
//			cout << "Case #" << q + 1 << ": " << n << ' ' << L << ' ' << R << endl;
//			continue;
//		}
//
//		if (R <= n) {
//			if (swapped) swap(L, R);
//			cout << "Case #" << q + 1 << ": " << n << ' ' << L << ' ' << R << endl;
//			continue;
//		}
//
//		n++;
//		lint k = sqrtl(0.25L * (n + 1) * (n + 1) + (R - n)) - 0.5 * (n + 1);
//		if ((n + k + 1) * (k + 2) <= R) k++;
//		if (L == R) swapped = true;
//
//		R -= (n + k) * (k + 1);
//		L -= k * (n + k);
//		n += 2 * k;
//
//		if (L >= n + 1) {
//			n++;
//			L -= n;
//		}
//
//		if (swapped) swap(L, R);
//		cout << "Case #" << q + 1 << ": " << n << ' ' << L << ' ' << R << endl;
//
//	}
//
//	return 0;
//}
//

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
//vector<int> naive(const int M_, const int K) {
//	// M <= 2
//	const int M = M_ + 1;
//
//	vector<int> res(1LL << M);
//	for (int i = 0; i < (1LL << (M - 1)); i++) {
//		res[2 * i] = res[2 * i + 1] = i;
//	}
//
//	do {
//
//		//DMP(res);
//		vector<int> res_xor((1LL << M) + 1);
//		for (int i = 0; i < (1LL << M); i++) res_xor[i + 1] = res_xor[i] ^ res[i];
//
//		bool is_K = true;
//		for (int i = 0; i < (1LL << (M - 1)); i++) {
//			auto it1 = find(res.begin(), res.end(), i);
//			auto it2 = find(it1 + 1, res.end(), i);
//
//			if ((res_xor[it1 - res.begin()] ^ res_xor[it2 - res.begin() + 1]) != K) {
//				is_K = false;
//				break;
//			}
//
//		}
//
//		if(is_K) return res;
//
//	} while (next_permutation(res.begin(), res.end()));
//
//	return vector<int>{-1};
//
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int M, K;
//	cin >> M >> K;
//
//	if (M == 1) {
//		if (K == 0) cout << "0 0 1 1" << "\n";
//		else cout << -1 << "\n";
//	}
//	else {
//		if (K < (1 << M)) {
//
//			cout << K << " ";
//			for (int i = 0; i < (1 << M); i++) if (i != K) cout << i << " ";
//			cout << K << " ";
//			for (int i = (1 << M) - 1; i >= 0; i--) if (i != K) cout << i << " ";
//
//		}
//		else cout << -1 << "\n";
//	}
//
//	return 0;
//}
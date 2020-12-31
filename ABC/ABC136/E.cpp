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
//template <typename T>
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
//template<class T>
//vector<T> divisor(T n) {
//	vector<T> res;
//	for (T i = 1; i * i <= n; i++) {
//		if (n % i == 0) {
//			res.emplace_back(i);
//			if (i * i != n) res.emplace_back(n / i);
//		}
//	}
//	sort(res.begin(), res.end());
//	return res;
//}
//
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, K;
//	cin >> N >> K;
//
//	vector<int> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//
//	int sum = 0;
//	for (int i = 0; i < N; i++) {
//		sum += A[i];
//	}
//
//	auto div = divisor(sum);
//
//	for (int i = (int)div.size() - 1; i >= 0; i--) {
//
//		vector<int> rem;
//		for (int j = 0; j < N; j++) {
//			int tmp = A[j] % div[i];
//			if (tmp) rem.emplace_back(tmp);
//		}
//		sort(rem.begin(), rem.end());
//
//		int cnt = 0, ptr1 = 0, ptr2 = (int)rem.size() - 1;
//		while (ptr2 - ptr1 > 0) {
//
//			int k = div[i] - rem[ptr2];
//			ptr2--;
//			cnt += k;
//
//			while (k) {
//				if (k >= rem[ptr1]) {
//					k -= rem[ptr1];
//					ptr1++;
//				}
//				else {
//					rem[ptr1] -= k;
//					k = 0;
//				}
//			}
//			
//		}
//
//		if (cnt <= K) {
//			cout << div[i] << "\n";
//			break;
//		}
//
//	}
//
//	return 0;
//}
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
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (int i = 0; i < (int)vec.size(); i++) {
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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<lint> A(N), B(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//	for (int i = 0; i < N; i++) cin >> B[i];
//
//	priority_queue<pair<lint, lint>> pq;
//	for (int i = 0; i < N; i++) pq.emplace(B[i], i);
//	lint ans = 0;
//	while (!pq.empty()) {
//
//		lint b, idx;
//		tie(b, idx) = pq.top();
//		pq.pop();
//		if (A[idx] == B[idx]) continue;
//
//		lint sum = B[(idx + 1) % N] + B[(idx + N - 1) % N];
//		lint cnt = (B[idx] - A[idx]) / sum;
//
//		if (cnt <= 0) {
//			ans = -1;
//			break;
//		}
//
//		B[idx] -= sum * cnt;
//		pq.emplace(B[idx], idx);
//		ans += cnt;
//
//	}
//
//	cout << ans << "\n";
//	
//	return 0;
//}
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
//	vector<int> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//
//	vector<int> ans, used(N);
//	int loop = 0;
//	while(loop < N){
//
//		int ok = -1, cnt = 1;
//		for (int j = 0; j < N; j++) {
//			if (!used[j]) {
//				if (A[j] == cnt) ok = j;
//				cnt++;
//			}
//		}
//		if (ok == -1) break;
//		ans.emplace_back(A[ok]);
//		used[ok] = 1;
//		loop++;
//	}
//
//	if (ans.size() != N) {
//		cout << -1 << "\n";
//		return 0;
//	}
//	reverse(ans.begin(), ans.end());
//	for (const auto &e : ans) cout << e << "\n";
//
//	return 0;
//}
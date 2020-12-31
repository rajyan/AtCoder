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
//	string S;
//	cin >> S;
//
//	vector<int> R, G, B;
//	for (int i = 0; i < N; i++) {
//		if (S[i] == 'R') R.emplace_back(i);
//		if (S[i] == 'G') G.emplace_back(i);
//		if (S[i] == 'B') B.emplace_back(i);
//	}
//
//	lint ans = 1LL * R.size() * G.size() * B.size();
//	for (int i = 0; i < R.size(); i++) {
//
//		vector<int> exist(8001);
//
//		for (int j = 0; j < G.size(); j++) {
//			exist[G[j] - R[i] + 4000] = 1;
//		}
//
//		for (int j = 0; j < B.size(); j++) {
//			if (exist[R[i] - B[j] + 4000]) ans--;
//			if ((B[j] - R[i]) % 2 == 0 && exist[(B[j] - R[i]) / 2 + 4000]) ans--;
//			if (0 <= (B[j] - R[i]) * 2 + 4000 && (B[j] - R[i]) * 2 + 4000 <= 8000 && exist[(B[j] - R[i]) * 2 + 4000]) ans--;
//		}
//
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
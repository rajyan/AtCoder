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
//	int N, K;
//	cin >> N >> K;
//
//	vector<int> pnt(3);
//	for (int i = 0; i < 3; i++) cin >> pnt[i];
//
//	string T;
//	cin >> T;
//
//	// ‚ ‚¢‚±ˆÈã‚É‚Í•K‚¸‚Å‚«‚éD
//	// Ÿ‚¿‚É‚Å‚«‚é‚È‚çŸ‚¿‚É‚·‚éC‚»‚¤‚Å‚È‚¢‚È‚ç‚ ‚¢‚±‚É‚·‚é
//
//	auto id = [](char &c) {
//		if (c == 'r') return 0;
//		else if (c == 's') return 1;
//		else return 2;
//	};
//
//	int ans = 0;
//	vector<int> used(N, -1);
//	for (int i = 0; i < N; i++) {
//
//		if (i >= K && used[i - K] == (id(T[i]) + 2) % 3) continue;
//
//		ans += pnt[(id(T[i]) + 2) % 3];
//		used[i] = (id(T[i]) + 2) % 3;
//
//	}
//
//	DMP(used);
//
//	cout << ans << "\n";
//
//	return 0;
//}
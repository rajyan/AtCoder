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
//	vector<int> p(N);
//	for (int i = 0; i < N; i++) cin >> p[i];
//
//	vector<int> flag(N);
//	for (int i = 0; i < N; i++) flag[i] = (p[i] == i + 1);
//
//	flag.emplace_back(0); //”Ô•º
//	int ans = 0, cnt = 0;
//	for (int i = 0; i <= N; i++) {
//		if (flag[i]) cnt++;
//		else {
//			if (cnt) ans += max(1, (cnt + 1) / 2);
//			cnt = 0;
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
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
//	int N, M;
//	cin >> N >> M;
//
//	map<int, int> X;
//	for (int i = 0; i < N; i++) {
//		int x;
//		cin >> x;
//		X[x]++;
//	}
//
//	vector<vector<queue<int>>> rem(M, vector<queue<int>>(2));
//	for (const auto &x : X) {
//		rem[x.first % M][x.second & 1].emplace(x.second);
//	}
//
//	int ans = 0;
//	for (int i = 1; i < (M + 1) / 2; i++) {
//
//		while (!rem[i][1].empty() && !rem[M - i][1].empty()) {
//
//			int a = rem[i][1].front();
//			int b = rem[M - i][1].front();
//			rem[i][1].pop();
//			rem[M - i][1].pop();
//
//			if (a > b) {
//				ans += b;
//				rem[i][0].emplace(a - b);
//			}	
//			else if (a < b) {
//				ans += a;
//				rem[M - i][0].emplace(b - a);
//			}
//			else ans += a;
//
//		}
//
//		while (rem[i][1].size() >= 2 && !rem[M - i][0].empty()) {
//
//			int a1 = rem[i][1].front();
//			rem[i][1].pop();
//			int a2 = rem[i][1].front();
//			rem[i][1].pop();
//			int b = rem[M - i][0].front();
//			rem[M - i][0].pop();
//
//			ans += 2;
//			if (a1 != 1) rem[i][0].emplace(a1 - 1);
//			if (a2 != 1) rem[i][0].emplace(a2 - 1);
//			if (b != 2) rem[M - i][0].emplace(b - 2);
//
//		}
//
//		while (rem[M - i][1].size() >= 2 && !rem[i][0].empty()) {
//
//			int a1 = rem[M - i][1].front();
//			rem[M - i][1].pop();
//			int a2 = rem[M - i][1].front();
//			rem[M - i][1].pop();
//			int b = rem[i][0].front();
//			rem[i][0].pop();
//
//			ans += 2;
//			if (a1 != 1) rem[M - i][0].emplace(a1 - 1);
//			if (a2 != 1) rem[M - i][0].emplace(a2 - 1);
//			if (b != 2) rem[i][0].emplace(b - 2);
//
//		}
//
//		while (!rem[i][0].empty()) {
//			ans += rem[i][0].front() / 2;
//			rem[i][0].pop();
//		}	
//		while (!rem[i][1].empty()) {
//			ans += rem[i][1].front() / 2;
//			rem[i][1].pop();
//		}		
//		while (!rem[M - i][0].empty()) {
//			ans += rem[M - i][0].front() / 2;
//			rem[M - i][0].pop();
//		}		
//		while (!rem[M - i][1].empty()) {
//			ans += rem[M - i][1].front() / 2;
//			rem[M - i][1].pop();
//		}
//
//	}
//
//	int sum0 = 0;
//	while (!rem[0][0].empty()) sum0 += rem[0][0].front(), rem[0][0].pop();
//	while (!rem[0][1].empty()) sum0 += rem[0][1].front(), rem[0][1].pop();
//	ans += sum0 / 2;
//
//	if (M % 2 == 0) {
//		int sumM = 0;
//		while (!rem[M/2][0].empty()) sumM += rem[M/2][0].front(), rem[M/2][0].pop();
//		while (!rem[M/2][1].empty()) sumM += rem[M/2][1].front(), rem[M/2][1].pop();
//		ans += sumM / 2;
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
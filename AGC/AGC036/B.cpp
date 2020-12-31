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
//	lint N, K;
//	cin >> N >> K;
//
//	vector<int> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//
//	map<int, int> mp;
//	vector<int> next(N, -1);
//	for (int i = N - 1; i >= 0; i--) {
//
//		auto it = mp.find(A[i]);
//		if (it == mp.end()) mp[A[i]] = i;
//		else {
//			next[i] = it->second;
//			it->second = i;
//		}
//
//	}
//	for (int i = 0; i < N; i++) if (next[i] == -1) next[i] = mp[A[i]];
//	DMP(next);
//
//	queue<int> que;
//	que.emplace(0);
//	int loop = 1;
//	while (!que.empty()) {
//		
//		int now = que.front();
//		que.pop();
//		if (now == N) break;
//
//		if (now >= next[now]) loop++;
//		que.emplace(next[now] + 1);
//
//	}
//
//	K %= loop;
//
//	que.emplace(0);
//	loop = 1;
//	int st = 0;
//	while (!que.empty()) {
//
//		int now = que.front();
//		que.pop();
//		if (now == N || loop > K) break;
//		if (loop == K) st = now;
//
//		if (now >= next[now]) loop++;
//		que.emplace(next[now] + 1);
//
//	}
//
//	for (int i = st; i < N; i++) {
//		if(next[i] <= i) cout << A[i] << " ";
//		else i = next[i];
//	}
//
//	return 0;
//}
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
//template <class T>
//ostream &operator<<(ostream &os, const set<T> &st) {
//	for (const auto &e : st) os << e << " ";
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
//	os << "(" << p.first << "," << p.second << ")";
//	return os;
//}
//
//template <class T1, class T2>
//ostream &operator<<(ostream &os, const map<T1, T2> &mp) {
//	for (const auto &e : mp) os << e << " ";
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
//	vector<pair<pair<int, int>, int>> LRC(M);
//	for (int i = 0; i < M; i++) {
//		int l, r, c;
//		cin >> l >> r >> c;
//		l--, r--;
//		LRC[i] = { {l,r},c };
//	}
//
//	sort(LRC.begin(), LRC.end());
//	DMP(LRC);
//
//	auto it = LRC.begin();
//	priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
//
//	lint ans = 0;
//	for (int i = 0; i < N - 1; i++) {
//
//		while (it != LRC.end()) {
//			if ((it->first).first <= i) {
//				pq.emplace(it->second, (it->first).second);
//				it++;
//			}
//			else break;
//		}
//
//		while (!pq.empty()) {
//			if (pq.top().second <= i) pq.pop();
//			else break;
//		}
//
//		DMP(pq.size());
//		
//		if (pq.empty()) {
//			cout << -1 << "\n";
//			return 0;
//		}
//
//		DMP(pq.top().first);
//		ans += pq.top().first;
//
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
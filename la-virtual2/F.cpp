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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<pair<long double, long double>> A(N), B(N);
//	for (int i = 0; i < N; i++) cin >> A[i].first >> A[i].second;
//	for (int i = 0; i < N; i++) cin >> B[i].first >> B[i].second;
//
//
//	pair<long double, long double> ga{}, gb{};
//	for (int i = 0; i < N; i++) {
//		ga.first += A[i].first;
//		ga.second += A[i].second;
//		gb.first += B[i].first;
//		gb.second += B[i].second;
//	}
//
//	ga.first /= N;
//	ga.second /= N;
//	gb.first /= N;
//	gb.second /= N;
//
//	DMP(ga, gb);
//
//	auto dist = [](const auto p, const auto q) {
//		return sqrt((p.first - q.first) * (p.first - q.first) + (p.second - q.second) * (p.second - q.second));
//	};
//
//	long double da = .0, db = .0;
//	for (int i = 0; i < N; i++) {
//		da += dist(ga, A[i]);
//		db += dist(gb, B[i]);
//	}
//
//	cout << fixed << setprecision(10) << db / da << "\n";
//
//	return 0;
//}
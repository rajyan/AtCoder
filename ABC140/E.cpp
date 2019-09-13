//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <set>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1111111111;
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
//	dump(str + (*(str + 1) == ' ' ? 2 : 1), t...);
//}
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//struct top2{
//	int top, second;
//	top2(const int &l = 0, const int &r = 0) :top(max(l, r)), second(min(l, r)) {}
//};
//
//top2 merge(const top2 &l, const top2 &r) {
//	if (l.top == r.top) return top2(l.top, max(l.second, r.second));
//	else return top2(l.top, r.top);
//}
//
//lint naive(const vector<int> &vec) {
//
//	int N = (int)vec.size();
//	vector<top2> t(N);
//	for (int i = 0; i < N; i++) t[i] = top2(vec[i], 0);
//
//	lint res = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N - 1 - i; j++) {
//			t[j] = merge(t[j], t[j + 1]);
//			res += t[j].second;
//			cerr << "(" << t[j].top << "," << t[j].second << ") ";
//		}
//		cout << "\n";
//	}
//
//	return res;
//
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
//	vector<int> P(N);
//	for (int i = 0; i < N; i++) cin >> P[i];
//
//	naive(P);
//
//	return 0;
//}
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
//lint naive(const int N, const vector<int> &vec) {
//
//	vector<top2> t(N);
//	for (int i = 0; i < N; i++) t[i] = top2(vec[i], 0);
//
//	lint res = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N - 1 - i; j++) {
//			t[j] = merge(t[j], t[j + 1]);
//			res += t[j].second;
//			//cerr << "(" << t[j].top << "," << t[j].second << ") ";
//		}
//		//cerr << "\n";
//	}
//
//	return res;
//}
//
//lint solve(const int N, const vector<int> &vec) {
//
//	vector<lint> idx(N);
//	for (int i = 0; i < N; i++) idx[vec[i] - 1] = i;
//
//	multiset<lint> st;
//	st.emplace(-1), st.emplace(-1);
//	st.emplace(N), st.emplace(N); // ”Ô•º
//	lint ans = 0;
//	for (int i = N - 1; i >= 0; i--) {
//
//		auto ub1 = st.lower_bound(idx[i]);
//		auto ub2 = ++st.lower_bound(idx[i]);
//		auto lb1 = --st.upper_bound(idx[i]);
//		auto lb2 = ----st.upper_bound(idx[i]);
//
//		ans += (idx[i] - *lb1) * (*ub2 - *ub1) * vec[idx[i]];
//		ans += (*ub1 - idx[i]) * (*lb1 - *lb2) * vec[idx[i]];
//		st.emplace(idx[i]);
//
//	}
//
//	return ans;
//}
//
//#include <random>
//#include <chrono>
//
//struct RandNum {
//
//	mt19937 mt;
//	RandNum() : mt(chrono::steady_clock::now().time_since_epoch().count()) {}
//
//	lint operator()(lint a, lint b) {
//		uniform_int_distribution<lint> dist(a, b);
//		return dist(mt);
//	}
//	lint operator() (lint b) { return (*this)(0LL, b); }
//
//	template<class Ite>
//	void shuf(Ite first, Ite last) { shuffle(first, last, mt); }
//
//};
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	//// Random test
//	//RandNum ran;
//	//for (int i = 0; i < 1000; i++) {
//
//	//	vector<int> test(ran(1, 1000));
//	//	iota(test.begin(), test.end(), 1);
//	//	ran.shuf(test.begin(), test.end());
//
//	//	if (solve(test.size(), test) != naive(test.size(), test)) DMP(test);
//	//	cout << "test" << i << "\n";
//	//}
//
//	int N;
//	cin >> N;
//
//	vector<int> P(N);
//	for (int i = 0; i < N; i++) cin >> P[i];
//
//	cout << solve(N, P) << "\n";
//
//	return 0;
//}
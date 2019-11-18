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
//	dump(str + (*(str + 1) == ' ' ? 2 : 1), t...);
//}
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//#include <random>
//#include <chrono>
//
//struct RandNum {
//
//	mt19937 mt;
//	RandNum() : mt(chrono::steady_clock::now().time_since_epoch().count()) {}
//
//	double operator()(lint a, lint b) {
//		uniform_int_distribution<double> dist(a, b);
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
//	RandNum ran;
//	int in_circle = 0;
//	const int N = 10000000;
//	for (int i = 0; i < N; i++) {
//		int x = ran(-1, 1);
//		int y = ran(-1, 1);
//		if (x * x + y * y <= 1) in_circle++;
//	}
//	
//	cout << 1.0 * 4 * N / in_circle << "\n";
//
//	return 0;
//}
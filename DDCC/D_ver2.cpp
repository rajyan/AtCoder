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
//void halve(int d, lint c, lint &cnt, vector<int> &rem) {
//
//	if (c == 1) {
//		rem.emplace_back(d);
//		return;
//	}
//
//	if (c & 1) rem.emplace_back(d);
//
//	if (d <= 4) {
//		d *= 2;
//		cnt += c / 2;
//	}
//	else {
//		d = 1 + 2 * d % 10;
//		cnt += c - (c & 1);
//	}
//
//	halve(d, c / 2, cnt, rem);
//
//};
//
//void simulate(lint &cnt, vector<int> &vec) {
//
//	if (vec.size() == 1) return;
//
//	assert(vec.size() != 0);
//
//	int back1 = vec.back();
//	vec.pop_back();
//	int back2 = vec.back();
//
//	DMP(back1, back2);
//
//	int sum = back1 + back2;
//	if (sum <= 9) {
//		cnt++;
//		vec.back() = sum;
//	}
//	else {
//		cnt += 2;
//		vec.back() = 1 + sum % 10;
//	}
//
//	simulate(cnt, vec);
//
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int M;
//	cin >> M;
//	lint ans = 0;
//	vector<int> rem;
//	for (int i = 0; i < M; i++) {
//
//		lint d, c;
//		cin >> d >> c;
//		halve(d, c, ans, rem);
//
//	}
//
//	DMP(ans, rem);
//	simulate(ans, rem);
//
//	cout << ans << "\n";
//
//	return 0;
//}
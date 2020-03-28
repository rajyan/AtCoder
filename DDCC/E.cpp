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
//	int N;
//	cin >> N;
//
//	cout << "? ";
//	for (int i = 1; i <= N; i++) cout << i << " ";
//	cout << endl;
//
//	string s_0;
//	cin >> s_0;
//
//	auto flip = [](string &s) {
//
//		if (s == "Red") return "Blue";
//		if (s == "Blue") return "Red";
//
//		exit(-1);
//
//	};
//
//	string s_N = flip(s_0);
//
//	auto binary_search = [&]() {
//
//		auto ok = 1;
//		auto ng = N + 1;
//
//		while (abs(ok - ng) > 1) {
//			int mid = (ok + ng) / 2;
//
//			cout << "?";
//			for (int i = mid; i < mid + N; i++) cout << " " << i;
//			cout << endl;
//
//			string s_mid;
//			cin >> s_mid;
//
//			if (s_mid == s_0) ok = mid;
//			else ng = mid;
//
//		}
//
//		return ok;
//	};
//
//	int lb = binary_search();
//
//	vector<char> ans(2 * N);
//	ans[lb - 1] = s_0[0];
//	ans[lb + N - 1] = s_N[0];
//
//	for (int i = 1; i < lb; i++) {
//
//		cout << "? " << i;
//		for (int j = lb + 1; j < lb + N; j++) cout << " " << j;
//		cout << endl;
//
//		string s_i;
//		cin >> s_i;
//
//		ans[i - 1] = s_i[0];
//
//	}
//
//	for (int i = lb + N + 1; i <= 2 * N; i++) {
//
//		cout << "? " << i;
//		for (int j = lb + 1; j < lb + N; j++) cout << " " << j;
//		cout << endl;
//
//		string s_i;
//		cin >> s_i;
//
//		ans[i - 1] = s_i[0];
//
//	}
//
//	for (int i = lb + 1; i < lb + N; i++) {
//
//		cout << "? " << i;
//		for (int j = 1; j < lb; j++) cout << " " << j;
//		for (int j = lb + N + 1; j <= 2 * N; j++) cout << " " << j;
//		cout << endl;
//
//		string s_i;
//		cin >> s_i;
//
//		ans[i - 1] = s_i[0];
//
//	}
//
//	cout << "! ";
//	for (int i = 0; i < 2 * N; i++) cout << ans[i];
//	cout << endl;
//
//	return 0;
//}
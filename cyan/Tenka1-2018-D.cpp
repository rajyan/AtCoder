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
//	int k;
//	cin >> k;
//
//	if (k == 3) {
//		cout << "Yes\n";
//		cout << "3\n";
//		cout << "2 1 2\n";
//		cout << "2 3 1\n";
//		cout << "2 2 3\n";
//	}
//	else {
//
//		int num = 0;
//		for (int i = 0; i * i < 2 * k; i++) {
//			if (i * (i + 1) == k * 2) {
//				num = i;
//				break;
//			}
//		}
//
//		if (num == 0) cout << "No" << "\n";
//		else {
//			
//			cout << "Yes" << "\n";
//			cout << num + 1 << "\n";
//			vector<vector<int>> ans(num, vector<int>(num));
//			int cnt = 1;
//			for (int i = 0; i < num; i++) {
//				for (int j = 0; j < num - i; j++) {
//					ans[i][j] = ans[num - j - 1][num - i - 1] = cnt++;
//				}
//			}
//
//			for (int i = 0; i < num; i++) {
//				cout << num << " ";
//				for (int j = 0; j < num; j++) {
//					cout << ans[i][j] << " ";
//				}
//			}
//			
//			cout << num << " ";
//			for (int i = 0; i < num; i++) cout << ans[i][num - i - 1] << " ";
//
//		}
//
//	}
//
//	return 0;
//}
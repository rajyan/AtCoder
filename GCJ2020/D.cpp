//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <map>
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
//void Flip(char &c) {
//	c = !(c - '0') + '0';
//}
//
//int main() {
//
//	int Q;
//	cin >> Q;
//	int B;
//	cin >> B;
//	for (int q = 0; q < Q; q++) {
//
//		string ans(B, '*');
//
//		bool flip = false, rev = false;
//		pair<int, char> fst{ -1, '*' }, rst{ -1, '*' };
//		for (int i = 0, cnt = 0; i < B / 2; i++, cnt++) {
//
//			char l, r;
//			if (cnt % 5 == 0) {
//
//				if (fst.first != -1) {
//					cout << fst.first << endl;
//					cin >> l;
//					flip = (fst.second != l);
//				}
//				else {
//					cout << '1' << endl;
//					cin >> l;
//				}
//				
//				if (rst.first != -1) {
//					cout << rst.first << endl;
//					cin >> r;
//					rev = flip ^ (rst.second != r);
//				}
//				else {
//					cout << '1' << endl;
//					cin >> r;
//				}
//
//				i--;
//
//			}
//			else {
//
//				cout << i + 1 << endl;
//				cin >> l;
//				cout << B - i << endl;
//				cin >> r;
//
//				if (flip) {
//					Flip(l);
//					Flip(r);
//				}
//				if (rev) {
//					swap(l, r);
//				}
//
//				ans[i] = l;
//				ans[B - i - 1] = r;
//
//				if (fst.first == -1 && l == r) fst = { i + 1, l };
//				if (rst.first == -1 && l != r) rst = { i + 1, l };
//
//			}
//
//		}
//
//		if (flip) {
//			for (auto &e : ans) Flip(e);
//		}
//		if (rev) {
//			reverse(ans.begin(), ans.end());
//		}
//
//		cout << ans << endl;
//		char res;
//		cin >> res;
//
//	}
//
//	return 0;
//}
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
//	int Q;
//	cin >> Q;
//
//	priority_queue<int> lh;
//	priority_queue<int, vector<int>, greater<int>> uh;
//
//	int lh_cnt = 0, uh_cnt = 0;
//	lint lh_sum = 0, uh_sum = 0;
//	lint B = 0;
//
//	for (int i = 0; i < Q; i++) {
//
//		int q;
//		cin >> q;
//
//		if (q == 1) {
//
//			int a, b;
//			cin >> a >> b;
//
//			B += b;
//
//			if (lh.empty() || lh.top() > a) {
//
//				if (lh_cnt == uh_cnt) {
//					
//					lh.emplace(a);
//					lh_sum += a;
//
//					lh_cnt++;
//
//				}
//				else { 
//
//					assert(lh_cnt > uh_cnt);
//
//					lh.emplace(a);
//					lh_sum += a;
//
//					int tmp = lh.top();
//					lh.pop();
//					uh.emplace(tmp);
//					lh_sum -= tmp;
//					uh_sum += tmp;
//
//					uh_cnt++;
//
//				}
//
//			}
//
//			else {
//			
//				if (lh_cnt == uh_cnt) {
//
//					uh.emplace(a);
//					uh_sum += a;
//
//					int tmp = uh.top();
//					uh.pop();
//					lh.emplace(tmp);
//					uh_sum -= tmp;
//					lh_sum += tmp;
//
//					lh_cnt++;
//
//				}
//				else {
//
//					assert(lh_cnt > uh_cnt);
//
//					uh.emplace(a);
//					uh_sum += a;
//
//					uh_cnt++;
//
//				}
//
//			}
//
//
//		}
//		else {
//			int min_x = lh.top();
//			cout << min_x << " " << uh_sum - lh_sum + B + (lh_cnt != uh_cnt) * min_x << "\n";
//		}
//
//	}
//
//	return 0;
//}
//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//#include <map>
//#include <queue>
//#include <algorithm>
//
//const int MOD = 1000000007, INF = 1111111111;
//using namespace std;
//using lint = long long;
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (int i = 0; i < (int)vec.size(); i++) {
//		os << vec[i] << (i + 1 == vec.size() ? "" : " ");
//	}
//	return os;
//}
//
//#ifdef _DEBUG
//template <class Head>
//void dump(const char* str, Head &&h) { cerr << str << " = " << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head &&h, Tail &&... t) {
//	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
//	dump(str + 1, t...);
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
//	int H, W;
//	cin >> H >> W;
//
//	vector<string> S(H);
//	for (int i = 0; i < H; i++) cin >> S[i];
//
//	vector<int> dxdy{ -1,0,1 };
//	for (int row = 0; row < H; row++) {
//		for (int col = 0; col < W; col++) {
//			if (S[row][col] == '.') {
//				
//				int cnt = 0;
//				for (const auto &dx : dxdy) {
//					for (const auto &dy: dxdy) {
//						if (0 <= row + dx && row + dx < H
//							&& 0 <= col + dy && col + dy < W
//							 && S[row + dx][col +dy] == '#') cnt++;
//					}
//				}
//				cout << cnt;
//			}
//			else cout << "#";
//		}
//		cout << "\n";
//	}
//
//
//	return 0;
//}
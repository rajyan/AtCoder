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
//#ifdef _DEBUG
//#define DMP(x) cerr << #x << ": " << x << "\n"
//#else
//#define DMP(x) ((void)0)
//#endif
//
//const int MOD = 1000000007, INF = 1111111111; 
//using namespace std;
//using lint = long long;
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, Q;
//	cin >> N >> Q;
//
//	string S;
//	cin >> S;
//
//	vector<pair<char, char>> spell(Q);
//	for (int i = 0; i < Q; i++) cin >> spell[i].first >> spell[i].second;
//
//	auto dead = [&] (int idx, int key) {
//
//		bool res = false;
//		for (int i = 0; i < Q; i++) {
//			if (spell[i].first == S[idx]) idx += spell[i].second == 'L' ? -1 : 1;
//			if (idx < 0 || idx >= S.size()) break;
//		}
//
//		return idx < key;
//	};
//
//	auto biSearch = [&](auto f, int key) {
//		int left = -1;
//		int right = (int)S.size();
//
//		while (right - left > 1) {
//			int mid = left + (right - left) / 2;
//
//			if (!f(mid, key)) right = mid;
//			else left = mid;
//		}
//
//		return right;
//	};
//
//	int L = biSearch(dead, 0);
//	int R = biSearch(dead, S.size());
//	if (L < R) cout << R - L << "\n";
//	else cout << 0 << "\n";
//
//	return 0;
//}

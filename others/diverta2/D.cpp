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
//typedef long long lint;
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<pair<lint, lint>> medal(3);
//	cin >> medal[0].first >> medal[1].first >> medal[2].first;
//	cin >> medal[0].second >> medal[1].second >> medal[2].second;
//
//	vector<lint> ans;
//
//	lint tmp, don, tmp2, don2;
//	for (int bit = 0b0; bit < (1 << 6); bit++) {
//
//		vector<int> ord{ 0,1,2 };
//
//		do {
//			don = N;
//			tmp = 0;
//			for (int i = 0; i <= 2; i++) {
//				if ((1 << i) & bit) {
//
//					tmp += don / medal[ord[i]].first * medal[ord[i]].second;
//					don %= medal[ord[i]].first;
//
//				}
//			}
//
//			vector<int> ord2{ 0,1,2 };
//			do {
//
//				don2 = tmp + don;
//				tmp2 = 0;
//
//				for (int i = 3; i <= 5; i++) {
//					if ((1 << i) & bit) {
//
//						tmp2 += don2 / medal[ord2[i - 3]].second * medal[ord2[i - 3]].first;
//						don2 %= medal[ord2[i - 3]].second;
//
//					}
//				}
//
//				ans.emplace_back(don2 + tmp2);
//
//			} while (next_permutation(ord2.begin(), ord2.end()));
//
//		} while (next_permutation(ord.begin(), ord.end()));		
//	}
//
//	cout << *max_element(ans.begin(), ans.end());
//
//	return 0;
//}
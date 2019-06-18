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
//	vector<int> even(N / 2), odd(N / 2);
//	for (int i = 0; i < N / 2; i++) cin >> even[i] >> odd[i];
//	sort(even.begin(), even.end());
//	sort(odd.begin(), odd.end());
//	even.emplace_back(0), odd.emplace_back(0); // ”Ô•º
//
//	int tmp_e = 1, tmp_o = 1, max_e = 0, max_o = 0, prev_e = 0, prev_o = 0, memo_e = -1, memo_o = -1;
//	for (int i = 1; i <= N / 2; i++) {
//		
//		if (even[i] == even[i - 1]) tmp_e++;
//		else {
//			if (max_e <= tmp_e) {
//				memo_e = even[i - 1];
//				prev_e = max_e;
//				max_e = tmp_e;
//			}
//			else if (prev_e <= tmp_e) prev_e = tmp_e;
//			tmp_e = 1;
//		}		
//		if (odd[i] == odd[i - 1]) tmp_o++;
//		else {
//			if (max_o <= tmp_o) {
//				memo_o = odd[i - 1];
//				prev_o = max_o;
//				max_o = tmp_o;
//			}
//			else if (prev_o <= tmp_o) prev_o = tmp_o;
//			tmp_o = 1;
//		}		
//	}
//
//	if (memo_o != memo_e) {
//		cout << N - max_e - max_o << "\n";
//	}
//	else {
//		if(max_e + prev_o > max_o + prev_e) cout << N - max_e - prev_o << "\n";
//		else cout << N - max_o - prev_e << "\n";
//	}
//
//	return 0;
//}
//#include <iostream>
//#include <sstream>
//#include <cstdio>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <utility>
//
//#define FOR(idx, begin, end) for(int idx = (begin); idx < int(end); ++idx)
//#define DBG(x) cerr << #x << ": " << x << "\n"
//
//using namespace std;
//typedef long long lint;
//const int MOD = 1000000007;
//
//int main() {
//
//	cin.tie(0);
//
//	int N, K;
//	cin >> N >> K;
//
//	vector<int> num(K);
//	FOR(i, 0, K) cin >> num[i];
//
//	while (true){
//
//		FOR(j, 0, K) {
//			FOR(k, 0, to_string(N).length()) {
//
//				if (to_string(N)[k] - '0' == num[j]) {
//					j = K - 1;
//					k = to_string(N).length();
//				}
//				if (j == K - 1 and k == to_string(N).length() - 1) {
//					cout << N;
//					return 0;
//				}
//			}
//		}
//
//		N++;
//	} 
//
//	return -1;
//}
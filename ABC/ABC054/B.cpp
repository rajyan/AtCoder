//#include <iostream>
//#include <sstream>
//#include <cstdio>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <utility>
//
//#define REP(idx, end) for(int idx = 0; idx < end; ++idx)
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
//	int N, M;
//	cin >> N >> M;
//
//	vector<string> A(N);
//	vector<string> B(M);
//	REP(i, N) cin >> A[i];
//	REP(i, M) cin >> B[i];
//	
//	REP(i, N - M + 1) {
//		REP(j, N - M + 1) {
//			if (A[i].substr(j, M) == B[0]) {
//				REP(k, M) {
//					if (A[i + k].substr(j, M) != B[k]) break;
//					else if (k == M - 1) {
//						cout << "Yes";
//						return 0;
//					}
//				}
//			}
//		}
//	}
//	cout << "No";
//
//	return 0;
//}
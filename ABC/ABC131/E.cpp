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
//	int N, K;
//	cin >> N >> K;
//
//	int combi = (N - 1) * (N - 2) / 2;
//
//	if (K > combi) {
//		cout << "-1" << "\n";
//	}
//	else {
//
//		cout << N - 1 + combi - K << "\n";
//
//		for (int i = 2; i <= N; i++) {
//			cout << 1 << " " << i << "\n";
//		}
//
//		int cnt = 2;
//		bool flag = combi != K;
//		while(flag){
//
//			for (int i = cnt + 1; i <= N; i++) {
//				if (combi - K == 0) {
//					flag = false;
//					break;
//				}
//				cout << cnt << " " << i << "\n";
//				K++;
//			}
//			cnt++;
//
//		}
//
//	}
//
//	return 0;
//}
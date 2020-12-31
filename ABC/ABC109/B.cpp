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
//	vector<string> S(N);
//	for (int i = 0; i < N; i++) cin >> S[i];
//
//	bool flag = true;
//	for (int i = 1; i < N; i++) {
//		if (S[i - 1].back() != S[i][0]) {
//			flag = false;
//			break;
//		}
//		for (int j = i; j < N; j++) {
//			if (S[i - 1] == S[j]) {
//				flag = false;
//				break;
//			}
//		}
//	}
//
//	if (flag) cout << "Yes" << "\n";
//	else cout << "No" << "\n";
//
//	return 0;
//}

//#include <iostream>
//#include <sstream>
//#include <cstdio>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//#include <set>
//#include <queue>
//
//#ifdef _debug
//#define dmp(x) cerr << #x << ": " << x << "\n"
//#else
//#define dmp(x) ((void)0)
//#endif
//
//const int mod = 1000000007, inf = 1111111111; 
//using namespace std;
//typedef long long lint;
//
//bool judge(string S) {
//	bool res = true;
//	res &= ((S[0] == 'R') | (S[0] == '*'));
//	res &= ((S[1] == 'G') | (S[1] == '*'));
//	res &= ((S[2] == 'B') | (S[2] == '*'));
//	res &= !((S[0] == '*') && (S[1] == '*') && (S[2] == '*'));
//	return res;
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	string S;
//	cin >> N >> S;
//
//	queue<int> idx;
//	vector<int> used(N - 2);
//
//	for (int i = 0; i < N - 2; i++) {
//
//		if (judge(S.substr(i, 3))) {
//			S[i] = S[i + 1] = S[i + 2] = '*';
//			used[i] = 1;
//			for (int j = -2; j <= 2; j++) {
//				if (0 <= i + j && i + j < N - 2 && !used[i + j]) idx.push(i + j);
//			}
//		}
//	}
//
//	while (!idx.empty()) {
//
//		int i = idx.front(); idx.pop();
//
//		if (judge(S.substr(i, 3))) {
//			S[i] = S[i + 1] = S[i + 2] = '*';
//			used[i] = 1;
//			for (int j = -2; j <= 2; j++) {
//				if (0 <= i + j && i + j < N - 2 && !used[i + j]) idx.push(i + j);
//			}
//		}
//	}
//
//	if (S == string(S.length(), '*')) cout << "Yes";
//	else cout << "No";
//
//	return 0;
//}
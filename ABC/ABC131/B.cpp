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
//	int N, L;
//	cin >> N >> L;
//
//	vector<int> taste(N);
//	int sum = 0;
//	for (int i = 0; i < N; i++) {
//		taste[i] = L + i;
//		sum += L + i;
//	}
//
//	int tmp = INF,idx;
//	for (int i = 0; i < N; i++) {
//
//		if (tmp > abs(taste[i])) {
//			tmp = abs(taste[i]);
//			idx = i;
//		}
//	}
//
//	cout << sum - taste[idx] << "\n";
//
//	return 0;
//}
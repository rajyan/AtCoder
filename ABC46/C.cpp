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
//lint gcd(lint a, lint b) { return b ? gcd(b, a%b) : a; }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<lint> T(N), A(N);
//	for (int i = 0; i < N; i++) cin >> T[i] >> A[i];
//
//	lint T_vote = 1, A_vote = 1, max_vote;
//	for (int i = 0; i < N; i++) {
//
//		max_vote = max((T_vote - 1) / T[i] , (A_vote - 1) / A[i]) + 1;
//		T_vote = max_vote * T[i];
//		A_vote = max_vote * A[i];
//	}
//
//	cout << T_vote + A_vote;
//
//	return 0;
//}
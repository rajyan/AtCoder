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
//bool dfs(int in, int N) {
//	if (in < N) return dfs(in + 4, N) | dfs(in + 7, N);
//	else if (in == N) return true;
//	else return false;
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	if (dfs(0, N)) cout << "Yes" << "\n";
//	else cout << "No" << "\n";
//
//	return 0;
//}
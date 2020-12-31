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
//inline lint Bsize(lint n) { return (1LL << (n + 2)) - 3; }
//inline lint patty(lint n) { return (1LL << (n + 1)) - 1; }
//
//lint dfs(lint N, lint X) {
//
//	if (X <= 1) return N == 0 && X == 1 ? 1LL : 0LL;
//	else if (X <= Bsize(N - 1) + 1) return dfs(N - 1, X - 1);
//	else if (X != Bsize(N)) return patty(N - 1) + dfs(N - 1, X - 2 - Bsize(N - 1)) + 1;
//	else return 2 * patty(N - 1) + 1;
//
//}
//
//int main() {
//
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//
//	lint N, X;
//	cin >> N >> X;
//
//	cout << dfs(N, X) << "\n";
//
//	return 0;
//}

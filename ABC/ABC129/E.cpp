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
//map<string, int> memo;
//
//lint dfs(string &input, int ptr, int len, int carry = 0) {
//	
//	if (carry == 0) {
//		if (ptr == len - 1) {
//			if (input[len - ptr - 1] == '1') return 1;
//			else return 0;
//		}
//		else if (input[len - ptr - 1] == '0') {
//			return 3 * dfs(input, ptr + 1, len) % MOD;
//		}
//		else if (input[len - ptr - 1] == '1') {
//			return (2 * dfs(input, ptr + 1, len) + dfs(input, ptr + 1, len, 1)) % MOD;
//		}
//	}
//	else {
//		if (ptr == len - 1) {
//			if (input[len - ptr - 1] == '1') return 3;
//			else return 1;
//		}
//		else if (input[len - ptr - 1] == '0') {
//			return (2 * dfs(input, ptr + 1, len) + dfs(input, ptr + 1, len, 1)) % MOD;
//		}
//		else if (input[len - ptr - 1] == '1') {
//			return 3 * dfs(input, ptr + 1, len, 1) % MOD;
//		}
//	}
//
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	string L;
//	cout << L;
//
//	cout << dfs(L, 0, (int)L.size(), 1) << "\n";
//
//
//	return 0;
//}
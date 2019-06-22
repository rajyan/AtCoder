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
//lint gcd(lint a, lint b) { return b ? gcd(b, a%b) : a; }
//lint num(lint a, lint b, lint div) { return b / div - a / div + (a%div == 0); }
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	lint A, B, C, D;
//	cin >> A >> B >> C >> D;
//
//	const lint lcm = C * D / gcd(C, D);
//
//	cout << B - A + 1 - num(A,B,C) - num(A,B,D) +num(A,B,lcm)  << "\n";
//
//	return 0;
//
//}
//#include <cassert>
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
//	int a, b;
//	cin >> a >> b;
//
//	auto f = [](int a, int b) {while (b) { b /= 10; a *= 10; } return a; };
//
//	int x = f(a, b) + b;
//	DMP(x);
//	bool flag = false;
//	for (int i = 0; i*i <= 100100; i++) {
//		if (i*i == x) flag = true;
//	}
//	
//	if (flag) cout << "Yes" << "\n";
//	else cout << "No" << "\n";
//
//	return 0;
//}
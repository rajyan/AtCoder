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
//	int A, B;
//	cin >> A >> B;
//
//	cout << (A + 49) / 50 * 2 + (B + 49) / 50 * 2 << " 100\n";
//
//	string w(100, '.'), b(100, '#');
//	for (int i = 0; i < 2 * (B - 1); i++) {
//		
//		if (i % 2) cout << '#';
//		else cout << '.';
//		if (i % 100 == 99) cout << "\n" << w << "\n";
//
//	}
//	for (int i = 0; i < 100 - 2 * (B - 1) % 100; i++) {
//		cout << '.';
//	}
//
//	cout << "\n" << w << "\n" << b << "\n";
//
//	for (int i = 0; i < 2 * (A - 1); i++) {
//
//		if (i % 2) cout << '.';
//		else cout << '#';
//		if (i % 100 == 99) cout << "\n" << b << "\n";
//
//	}
//	for (int i = 0; i < 100 - 2 * (A - 1) % 100; i++) {
//		cout << '#';
//	}
//
//	cout << "\n";
//
//	return 0;
//}
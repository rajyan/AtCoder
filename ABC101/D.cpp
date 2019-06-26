//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
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
//lint digi(lint n) {
//	lint tmp = n, res = 0;
//	while (tmp != 0) {
//		res += tmp % 10;
//		tmp /= 10;
//	}
//	return res;
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	//// ‹ð’¼
//	//lint now;
//	//vector<double> sunuke;
//	//for (lint i = 1; i <= 100000; i++) {
//	//	now = digi(i);
//	//	sunuke.emplace_back(i / double(now));
//	//}
//	//for (lint i = 0; i < 100000; i++) {
//	//	if (sunuke[i] <= *min_element(sunuke.begin() + i, sunuke.end())) cout << i + 1 << "\n";
//	//}
//
//	int K;
//	cin >> K;
//
//	for (int i = 1; i <= 9; i++) { cout << i << "\n"; }
//	K -= 9;
//
//	string nine = "9";
//	int cnt = 1;
//	while(K > 0){
//		for (int i = max(cnt - 1,1); i < 10*cnt; i++) {
//			cout << to_string(i) + nine << "\n";
//			K--;
//			if (K == 0) break;
//		}
//		nine += '9';
//		cnt++;
//	}
//
//	return 0;
//}
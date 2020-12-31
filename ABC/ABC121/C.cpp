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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, M;
//	cin >> N >> M;
//
//	vector<pair<lint, int>> drink(N);
//	for (int i = 0; i < N; i++) cin >> drink[i].first >> drink[i].second;
//
//	sort(drink.begin(), drink.end());
//
//	lint ans = 0;
//	for (int i = 0; i < N; i++) {
//
//		if (M - drink[i].second >= 0) {
//			ans += drink[i].first * drink[i].second;
//			M -= drink[i].second;
//		}
//		else {
//			ans += drink[i].first * M;
//			break;
//		}
//	}
//	
//	cout << ans << "\n";
//
//	return 0;
//}
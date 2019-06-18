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
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<int> side(N);
//	for (int i = 0; i < N; i++) cin >> side[i];
//	sort(side.begin(), side.end());
//
//	int sum = 0;
//	for (int i = 0; i < (int)side.size() - 1; i++) sum += side[i];
//
//	if (sum > side.back()) cout << "Yes" << "\n";
//	else cout << "No" << "\n";
//
//	return 0;
//}
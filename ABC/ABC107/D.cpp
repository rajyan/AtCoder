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
//	int N;
//	cin >> N;
//
//	vector<int> a(N);
//	for (int i = 0; i < N; i++) cin >> a[i];
//
//	vector<int> tmp(N), ans;
//	for (int i = 0; i < 300; i++) {
//		int randbgn = rand() % N;
//		int randend = rand() % (N - randbgn);
//		copy(ans.begin() + randbgn, ans.begin() + randend - 1, tmp.begin());
//		sort(tmp.begin(), tmp.end());
//		ans.emplace_back(*(tmp.begin() + (tmp.size() - 1) / 2));
//	}
//
//	sort(ans.begin(), ans.end());
//	cout << *(ans.begin() + (ans.size() - 1)/2) << "\n";
//
//	return 0;
//}
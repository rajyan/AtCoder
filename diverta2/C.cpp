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
//	vector<lint> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//	sort(A.begin(), A.end());
//
//	vector<pair<int, int>> ans;
//	if (A.front() > 0) {
//		ans.emplace_back(A.front(), A.back());
//		A.front() -= A.back();
//		A.pop_back();
//		N--;
//	}	
//	if (A.back() < 0) {
//		ans.emplace_back(A.back(), A.front());
//		A.front() = A.back() - A.front();
//		A.pop_back();
//		sort(A.begin(), A.end());
//		N--;
//	}
//
//	int cnt = N - 2;
//	while (A[cnt] > 0 && cnt >= 0) {
//		
//		ans.emplace_back(A.front(), A[cnt]);
//		A.front() -= A[cnt];
//		cnt--;
//
//	}
//	while (cnt >= 0) {
//
//		ans.emplace_back(A.back(), A[cnt]);
//		A.back() -= A[cnt];
//		cnt--;
//
//	}
//
//	cout << A.back() << "\n";
//	for (const auto &e : ans) cout << e.first << " " << e.second << "\n";
//
//
//
//	return 0;
//}
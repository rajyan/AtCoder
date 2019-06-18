//#include <iostream>
//#include <sstream>
//#include <cstdio>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//#include <set>
//#include <queue>
//
//#define FOR(idx, begin, end) for(int idx = (int)(begin); idx < (int)(end); ++idx)
//#define DMP(x) cerr << #x << ": " << x << "\n"
//
//using namespace std;
//typedef long long lint;
//const int MOD = 1000000007;
//
//
//int main() {
//
//	cin.tie(0);
//	
//	int N;
//	cin >> N;
//
//	vector<int> A(N);
//	FOR(i, 0, N) cin >> A[i];
//
//	sort(A.begin(), A.end());
//	A.erase(unique(A.begin(), A.end()),A.end());
//
//	if (A.size() % 2 == 0)cout << A.size() - 1;
//	else cout << A.size();
//
//	return 0;
//}
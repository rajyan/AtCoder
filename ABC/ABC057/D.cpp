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
//
//#ifdef _DEBUG
//#define DMP(x) cerr << #x << ": " << x << "\n"
//#else
//#define DMP(x) ((void)0)
//#endif
//
//using namespace std;
//typedef long long lint;
//
//const int MOD = 1000000007;
//const int INF = 1 << 29;
//const double EPS = 1e-9;
//
//void combi(vector<vector<lint>> &v) {
//	for (int i = 0; i < (int)v.size(); i++) {
//		v[i][0] = 1;
//		v[i][i] = 1;
//	}
//	for (int j = 1; j < (int)v.size(); j++) {
//		for (int k = 1; k <= j; k++) {
//			v[j][k] = (v[j - 1][k - 1] + v[j - 1][k]);
//		}
//	}
//}
//
//int main() {
//
//	cin.tie(0);
//
//	vector<vector<lint>> combi_tb(51, vector<lint>(51));
//	combi(combi_tb);
//
//	int N, A, B;
//	cin >> N >> A >> B;
//
//	vector<lint> v(N);
//	FOR(i, 0, N) cin >> v[i];
//
//	sort(v.begin(), v.end(), greater<lint>());
//
//	long double ave = .0;
//	
//	FOR(i, 0, A) ave += v[i];
//	cout.precision(10);
//	cout << fixed << ave / A << "\n";
//
//	int bk = 0, fw = 0, cnt = 0;
//	lint ans = 0;
//	
//	if (v[0] != v[A - 1]) {
//
//		while (v[A - 1] == v[A - 1 - bk]) {
//			bk++;
//		}
//		while ((A - 1 + fw) < N && v[A - 1] == v[A - 1 + fw]) {
//			fw++;
//		}
//		ans = combi_tb[bk + fw - 1][bk];
//	}
//	else {
//
//		while (cnt < N && v[0] == v[cnt]) {
//			cnt++;
//		}
//		FOR(i, A, min(B, cnt) + 1)	ans += combi_tb[cnt][i];
//	}
//
//	cout << ans;
//
//	return 0;
//}
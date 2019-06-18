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
//const int MOD = 1000000007, INF = 1111111111;
//const double EPS = 1e-9;
//
//template <class T>
//class CuSum {
//private:
//	vector<T> cusum;
//
//public:
//	CuSum(vector<T> const &vec) : cusum(vec.size() + 1) { for (int i = 0; i < (int)(vec.size()); i++) cusum[i + 1] = cusum[i] + vec[i]; }
//	CuSum(int N) : cusum(N + 1) {}
//
//	void add(int i, T x) { cusum[i + 1] += x; }
//	void init() { for (int i = 0; i < (int)(cusum.size()) - 1; i++) cusum[i + 1] += cusum[i]; }
//
//	T query(int l, int r) { return cusum[r] - cusum[l]; }  // partial sum of [l, r)
//};
//
//int main() {
//
//	cin.tie(0);
//
//	int N;
//	string S;
//	cin >> N >> S;
//
//	CuSum<int> cul(N);
//	
//	for (int i = 0; i < N; i++) {
//
//		if (S[i] == '#') cul.add(i,1);
//
//	}
//	cul.init();
//
//	int ans = INF, changes;
//	for (int i = 0; i < N; i++) {
//
//		changes = cul.query(0, i) + (N - 1 - i - cul.query(i + 1, N));
//		ans = ans > changes ? changes : ans;
//	}
//
//	cout << ans;
//
//	return 0;
//}
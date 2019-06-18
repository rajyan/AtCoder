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
//template <class T = int>
//class CuSum {
//private:
//	vector<T> cusum;
//
//public:
//	CuSum(vector<T> const &vec) : cusum(vec.size() + 1) { for (int i = 0; i < (int)(vec.size()); i++) cusum[i + 1] = cusum[i] + vec[i]; }
//
//	CuSum(int N) : cusum(N + 1) {}
//	void add(int i, T x) { cusum[i] += x; }
//	void init() { for (int i = 0; i < (int)(cusum.size()) - 1; i++) cusum[i + 1] += cusum[i]; }
//
//	T query(int l, int r) { return cusum[r] - cusum[l]; }  // partial sum of [l, r)
//};
//
//int main() {
//
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//
//	int N, K;
//	cin >> N >> K;
//
//	vector<int> h(N);
//	for (int i = 0; i < N; i++) cin >> h[i];
//	sort(h.begin(), h.end(), greater<int>());
//
//	for (int i = 0; i < N - 1; i++) h[i] -= h[i + 1];
//
//	CuSum<> hsum(h);
//	int ans = INF;
//	for (int i = 0; i <= N - K ; i++) ans = min(hsum.query(i, i + K - 1), ans);
//
//	cout << ans << "\n";
//
//	return 0;
//}
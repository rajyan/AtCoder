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
//	void add(int i, T x) { cusum[i + 1] += cusum[i] + x; }
//
//	T query(int l, int r) { return cusum[r] - cusum[l]; }  // partial sum of [l, r)
//};
//
//////template <class T = int>
//////class CuSum{
//////private:
//////	vector<T> cusum;
//////
//////public:
//////	CuSum(vector<T> const &vec) : cusum(vec.size() + 1) { for (int i = 0; i < (int)(vec.size()); i++) cusum[i + 1] = cusum[i] + vec[i]; }
//////
//////	CuSum(int N) : cusum(N + 1) {}
//////	void add(int i, T x) { cusum[i + 1] += x; }
//////	void init() { for (int i = 0; i < (int)(cusum.size()) - 1; i++) cusum[i + 1] += cusum[i]; }
//////
//////	T query(int l, int r) { return cusum[r] - cusum[l]; }  // partial sum of [l, r)
//////};
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, Q;
//	string S;
//	cin >> N >> Q >> S;
//
//	CuSum<int> ACsum(N);
//	for (int i = 1; i < N; i++) ACsum.add(i, (int)(S[i - 1] == 'A' && S[i] == 'C'));
//
//	pair<int, int> range;
//	for (int i = 0; i < Q; i++) {
//		cin >> range.first >> range.second;
//		cout << ACsum.query(range.first, range.second) << "\n";
//	}
//
//	return 0;
//}
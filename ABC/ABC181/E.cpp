//#ifdef _DEBUG
//#include "../../library/library/debug_template.cpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else
//#define DMP(...) ((void)0)
//#endif
//
//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1010101010;
//constexpr lint LINF = 1LL << 60;
//
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//template <class T>
//class CuSum {
//private:
//	vector<T> cusum;
//
//public:
//	CuSum(vector<T> const& vec) : cusum(vec.size() + 1) {
//		for (int i = 0; i < (int)vec.size(); i++) cusum[i + 1] = cusum[i] + vec[i];
//	}
//	CuSum(const int N) : cusum(N + 1) {}
//	void add(const int i, const T& x) { cusum[i + 1] += x; }
//	void build() { for (int i = 0; i < (int)cusum.size() - 1; i++) cusum[i + 1] += cusum[i]; }
//
//	// partial sum of 0-indexed [l, r)
//	T operator()(int l, int r) {
//		if (r < l || r < 0) {
//			assert(0);
//			return T(0);
//		}
//		else return cusum[r] - cusum[l];
//	}
//	// 0-indexed
//	const T& operator[](int i) { return cusum[i + 1]; }
//	T back() { return cusum.back(); }
//};
//
//template<class T>
//inline bool chmin(T& a, const T b) { return a > b && (a = b, true); }
//
//int main() {
//
//	int N, M;
//	cin >> N >> M;
//
//	vector<int> H(N), W(M);
//	for (int i = 0; i < N; i++) cin >> H[i];
//	sort(H.begin(), H.end());
//	for (int i = 0; i < M; i++) cin >> W[i];
//	sort(W.begin(), W.end());
//
//	vector<lint> subl(N / 2), subr(N / 2);
//	for (int i = 0; i < N - 1; i+=2) {
//		subl[i / 2] = H[i + 1] - H[i];
//		subr[i / 2] = H[i + 2] - H[i + 1];
//	}
//
//	CuSum<lint> cul(subl), cur(subr);
//	lint ans = LINF;
//	for (int i = 0; i < M; i++) {
//		int idx = lower_bound(H.begin(), H.end(), W[i]) - H.begin();
//		lint sum = idx & 1 ? W[i] - H[idx - 1] : H[idx] - W[i];
//		sum += cul(0, idx / 2) + cur(idx / 2, N / 2);
//		chmin(ans, sum);
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}

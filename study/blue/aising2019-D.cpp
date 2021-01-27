//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
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
//#ifdef _DEBUG
//#include "../../../library/src/debug_template.hpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
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
//int main() {
//
//	int N, Q;
//	cin >> N >> Q;
//
//	vector<lint> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//
//	vector<lint> X(Q);
//	for (int i = 0; i < Q; i++) cin >> X[i];
//
//	// x���������Ƃ��،N�͉�����A�����N�͏ォ�����Ă���
//	// �،N�����N/2�ڂ��Ƃ��悤�ɂȂ�Ƃ��납�珇�Ԃ̓���ւ�肪��������
//	// ����ւ���͌��݂ɂƂ邱�ƂɂȂ�
//
//	// ���E���������Ă���
//	// l�͍ŏ��Ar��N/2�������Ă���
//	// (Al + Ar) / 2 < x �Ȃ� Ar���ɂƂ��\��������
//	// r - l �Ԗڂ�Ar���Ƃ邱�ƂɂȂ�̂ŁA�����N��葁�����邩����
//	// ��������Ȃ�l++, r++�A�����łȂ��Ȃ玟�̋��E�����������̂�l++
//
//	int l = 0, r = N / 2;
//	vector<lint> border;
//	while (r != N - 1) {
//		lint c = (A[l] + A[r] + 2) / 2;
//		if (r - l < N - r) {
//			border.emplace_back(c);
//			l++, r++;
//		}
//		else l++;
//	}
//	DMP(border);
//
//	// ���E���킩��Ύ����͊ȒP���Ƃ͗ݐϘa�ƁA������Ԗڂ̗ݐϘa���v�Z���Ă����Θa�͋��܂�
//	vector<lint> odd((N + 1) / 2), even((N + 1) / 2);
//	for (int i = 0; i < N; i+=2) {
//		odd[i / 2] = A[i];
//		even[i / 2] = A[i + 1];
//	}
//	DMP(odd, even);
//	CuSum sumA(A), sumO(odd), sumE(even);
//
//	// N/2�ȍ~�̂��̂����Ƃ�邩��2���T���ł���
//	for (int i = 0; i < Q; i++) {
//		int cnt = upper_bound(border.begin(), border.end(), X[i]) - border.begin();
//		DMP(cnt);
//		lint ans = sumA(N / 2 + cnt, N);
//		if (N & 1) ans += sumO(0, cnt);
//		else ans += sumE(0, cnt);
//		cout << ans << "\n";
//	}
//
//	return 0;
//}

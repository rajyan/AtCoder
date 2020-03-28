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
//#include <functional>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1010101010;
//constexpr lint LINF = 1LL << 60;
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "\n" : " ");
//	return os;
//}
//
//#ifdef _DEBUG
//template <class T>
//void dump(const char* str, T &&h) { cerr << str << " =" << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head &&h, Tail &&... t) {
//	while (*str != ',') cerr << *str++; cerr << " =" << h << "\n";
//	dump(str + (*(str + 1) == ' ' ? 2 : 1), t...);
//}
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//template<class T>
//vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
//template<class... Size>
//auto make_vec(size_t s, Size... tail) {
//	return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
//}
//
//using Mat = vector<vector<lint>>;
//
//Mat mul(const Mat &A, const Mat &B) {
//
//	assert(A.size() > 0);
//	assert(A[0].size() == B.size());
//
//	Mat res(A.size(), vector<lint>(B[0].size()));
//
//	Mat B_t(B[0].size(), vector<lint>(B.size()));
//	for (int i = 0; i < B.size(); i++) {
//		for (int j = 0; j < B[0].size(); j++) {
//			B_t[j][i] = B[i][j];
//		}
//	}
//
//	for (int i = 0; i < A.size(); i++) {
//		for (int j = 0; j < B_t.size(); j++) {
//			res[i][j] = inner_product(
//				A[i].begin(), A[i].end(), B_t[j].begin(), 0LL,
//				bit_xor<>(),
//				bit_and<>()
//			);
//		}
//	}
//
//	return res;
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int K, M;
//	cin >> K >> M;
//
//	Mat A(K, vector<lint>(1));
//	vector<lint> C(K);
//	for (int i = 0; i < K; i++) cin >> A[K - i - 1][0];
//	for (int i = 0; i < K; i++) cin >> C[i];
//
//	if (M < K) {
//		cout << A[K - M][0] << "\n";
//		return 0;
//	}
//
//	Mat B = make_vec(K, K, 0LL);
//	B[0] = C;
//	for (int i = 1; i < K; i++) B[i][i - 1] = numeric_limits<lint>::max(); 
//
//	auto doub = make_vec(30, K, K, 0LL);
//	doub[0] = B;
//	for (int i = 1; i < 30; i++) doub[i] = mul(doub[i - 1], doub[i - 1]);
//
//	Mat ans(K, vector<lint>(K));
//	for (int i = 0; i < K; i++) ans[i][i] = numeric_limits<lint>::max();
//	for (int i = 0; i < 30; i++) {
//		if ((M - K) & (1 << i)) {
//			ans = mul(ans, doub[i]);
//		}
//	}
//
//	cout << mul(Mat(1, ans[0]), A)[0][0] << "\n";
//
//	return 0;
//}
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
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "" : " ");
//	return os;
//}
//
//#ifdef _DEBUG
//template <class T>
//void dump(const char* str, T &&h) { cerr << str << " = " << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head &&h, Tail &&... t) {
//	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
//	dump(str + (*(str + 1) == ' ' ? 2 : 1), t...);
//}
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//template<class T>
//class Compress {
//
//private:
//	vector<T> comp;
//
//public:
//	Compress() {}
//	Compress(const vector< T > &vec) : comp(vec) { init(); }
//
//	void add(const T &x) { comp.emplace_back(x); }
//
//	void init() {
//		sort(begin(comp), end(comp));
//		comp.erase(unique(begin(comp), end(comp)), end(comp));
//	}
//
//	vector<int> get(const vector<T> &vec) const {
//		vector<int> ret(vec.size());
//		transform(begin(vec), end(vec), ret.begin(), [&](const T &x) {
//			return (int)(lower_bound(begin(comp), end(comp), x) - begin(comp));
//		});
//		return ret;
//	}
//	int get(const T &x) const { return lower_bound(begin(comp), end(comp), x) - begin(comp); }
//
//	const T &operator[](int k) const { return comp[k]; }
//};
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<int> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//
//	Compress<int> comp(A);
//	for (const auto &e : comp.get(A)) cout << e << "\n";
//
//	return 0;
//}
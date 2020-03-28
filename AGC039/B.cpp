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
//pair<vector<T>, vector<T>> slide_minmax(const vector<T> &v, int k){
//
//	deque<int> deq_min, deq_max;
//	vector<T> ret_min, ret_max;
//	for (int i = 0; i < v.size(); i++) {
//
//		while (!deq_min.empty() && v[deq_min.back()] >= v[i]) deq_min.pop_back();
//		while (!deq_max.empty() && v[deq_max.back()] <= v[i]) deq_max.pop_back();
//		
//		deq_min.push_back(i);
//		deq_max.push_back(i);
//
//		if (i - k + 1 >= 0) {
//			ret_min.emplace_back(v[deq_min.front()]);
//			ret_max.emplace_back(v[deq_max.front()]);
//			if (deq_min.front() == i - k + 1) deq_min.pop_front();
//			if (deq_max.front() == i - k + 1) deq_max.pop_front();
//		}
//
//	}
//	return { ret_min, ret_max };
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, K;
//	cin >> N >> K;
//
//	vector<int> P(N);
//	for (int i = 0; i < N; i++) {
//		int p; cin >> p;
//		P[i] = p;
//	}
//
//	//auto [smin, smax] = slide_minmax(P, K);
//	vector<int> smin, smax;
//	tie(smin, smax) = slide_minmax(P, K);
//	DMP(smin, smax);
//
//	int cnt1 = 0;
//	for (int i = 0; i < N - K; i++) if (smin[i] == P[i] && smax[i + 1] == P[i + K]) cnt1++;
//
//	int seq = 0, cnt2 = 0;
//	for (int i = 0; i < N - 1; i++) {
//		if (P[i] < P[i + 1]) seq++;
//		else seq = 0;
//		if (seq == K - 1) cnt2++;
//	}
//
//	DMP(N - K + 1, cnt1, cnt2);
//	cout << N - K + 1 - cnt1 - max(cnt2 - 1, 0) << "\n";
//
//	return 0;
//}

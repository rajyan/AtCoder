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
//	for (const auto &e : vec) os << e << (&e == &vec.back() ? "\n" : " ");
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
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	string S;
//	cin >> S;
//	vector<int> D, M;
//	vector<int> C_cnt(N + 1); // indexÇ™ià»ç~ÇÃCÇÃêî
//	for (int i = 0; i < N; i++) {
//		if (S[i] == 'D') D.emplace_back(i);
//		if (S[i] == 'M') M.emplace_back(i);
//		if (S[i] == 'C') C_cnt[i] = 1;
//	}
//
//	for (int i = N - 1; i >= 0; i--) C_cnt[i] += C_cnt[i + 1];
//	DMP(C_cnt);
//	vector<int> MC_cnt(M.size()); // Ç†ÇÈMà»ç~ÇÃCÇÃêî
//	for (int i = 0; i < M.size(); i++) MC_cnt[i] = C_cnt[M[i]];
//	DMP(MC_cnt);
//
//	DMP(D, M);
//
//	auto query = [&](int k) {
//		
//		lint res = 0;
//		queue<pair<int,int>> M_q;
//		int M_i = 0;
//		lint MC = 0;
//		for (int i = 0; i < D.size(); i++) {
//
//			while (M_i < M.size() && D[i] < M[M_i] && M[M_i] < D[i] + k) {
//				M_q.emplace(M[M_i], M_i);
//				MC += MC_cnt[M_i];
//				M_i++;
//			}
//
//			while (!M_q.empty() && D[i] > M_q.front().first) {
//				MC -= MC_cnt[M_q.front().second];
//				M_q.pop();
//			}
//
//			res += MC - (lint)M_q.size() * (lint)C_cnt[min(D[i] + k, N)];
//
//		}
//
//		return res;
//
//	};
//
//	int Q;
//	cin >> Q;
//	for (int i = 0; i < Q; i++) {
//		int k;
//		cin >> k;
//		cout << query(k) << "\n";
//	}
//
//	return 0;
//}
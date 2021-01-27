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
//int main() {
//
//	int N;
//	cin >> N;
//
//	vector<queue<int>> rack(N);
//	vector<int> rtop(N);
//	for (int i = 0; i < N; i++) {
//
//		int k;
//		cin >> k;
//
//		for (int j = 0; j < k; j++) {
//			int t;
//			cin >> t;
//			rack[i].emplace(t);
//		}
//		
//		rtop[i] = rack[i].front();
//	}
//
//	DMP(rtop);
//
//	priority_queue<pair<int, int>> pq1, pq2;
//	for (int i = 0; i < N; i++) {
//		pq1.emplace(rack[i].front(), i);
//		pq2.emplace(rack[i].front(), i);
//		rack[i].pop();
//		if (!rack[i].empty()) {
//			pq2.emplace(rack[i].front(), i);
//		}
//	}
//
//	int M;
//	cin >> M;
//	set<int> used;
//	for (int i = 0; i < M; i++) {
//
//		int a;
//		cin >> a;
//
//		if (a == 1) {
//
//			auto tp = pq1.top();
//			pq1.pop();
//			while (used.find(tp.first) != used.end()) {
//				tp = pq1.top();
//				pq1.pop();
//			}
//			used.emplace(tp.first);
//
//			cout << tp.first << "\n";
//
//			int ind = tp.second;
//
//			if (!rack[ind].empty()) {
//				rtop[ind] = rack[ind].front();
//				pq1.emplace(rack[ind].front(), ind);
//				rack[ind].pop();
//			}
//
//			if (!rack[ind].empty()) {
//				pq2.emplace(rack[ind].front(), ind);
//			}
//
//
//		}
//		else {
//
//			auto tp = pq2.top();
//			pq2.pop();
//			while (used.find(tp.first) != used.end()) {
//				tp = pq2.top();
//				pq2.pop();
//			}
//			used.emplace(tp.first);
//
//			cout << tp.first << "\n";
//
//			int ind = tp.second;
//
//			if (rtop[ind] == tp.first) {
//
//				if (!rack[ind].empty()) {
//					rtop[ind] = rack[ind].front();
//					pq1.emplace(rack[ind].front(), ind);
//					rack[ind].pop();
//				}
//
//				if (!rack[ind].empty()) {
//					pq2.emplace(rack[ind].front(), ind);
//				}
//
//			}
//			else {
//
//				if (!rack[ind].empty()) {
//					rack[ind].pop();
//				}
//
//				if (!rack[ind].empty()) {
//					pq2.emplace(rack[ind].front(), ind);
//				}
//
//			}
//
//		}
//
//	}
//
//	return 0;
//}
//

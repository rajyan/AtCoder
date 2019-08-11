//#include <cassert>
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
//const int MOD = 1000000007, INF = 1111111111;
//using namespace std;
//using lint = long long;
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (int i = 0; i < (int)vec.size(); i++) {
//		os << vec[i] << (i + 1 == vec.size() ? "" : " ");
//	}
//	return os;
//}
//
//#ifdef _DEBUG
//template <class Head>
//void dump(const char* str, Head &&h) { cerr << str << " = " << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head &&h, Tail &&... t) {
//	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
//	dump(str + 1, t...);
//}
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, M;
//	cin >> N >> M;
//
//	vector<pair<int, int>> job(N);
//	for (int i = 0; i < N; i++) cin >> job[i].first >> job[i].second;
//	sort(job.begin(), job.end());
//
//	int cnt = 0;
//	lint ans = 0;
//	priority_queue<int> pq;
//	for (int i = 1; i <= M; i++) {
//
//		while (cnt < N && job[cnt].first <= i) {
//			pq.emplace(job[cnt].second);
//			cnt++;
//		}
//
//		if (!pq.empty()) {
//			ans += pq.top();
//			pq.pop();
//		}
//
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
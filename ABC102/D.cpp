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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<lint> A(N + 1);
//	for (int i = 0; i < N; i++) cin >> A[i + 1];
//	for (int i = 0; i < N; i++) A[i + 1] += A[i];
//
//	double ave = A[N] / 4.0;
//
//	queue<pair<lint, vector<lint>>> que;
//	que.push(make_pair(0, vector<lint>()));
//	lint lft, rgt, ans = numeric_limits<lint>::max() / 2 - 1;
//	while (!que.empty()) {
//
//		auto tmp = que.front();
//		que.pop();
//		lft = tmp.first;
//		rgt = lft;
//
//		//for (const auto &elem : tmp.second) cout << elem << " ";
//		//cout << " \n";
//
//		if (tmp.second.size() == 4) {
//			if(rgt == N) ans = min(ans, (*max_element(tmp.second.begin(), tmp.second.end()) - *min_element(tmp.second.begin(), tmp.second.end())));
//		}
//
//		while (rgt <= N && A[rgt] - A[lft] <= ave) rgt++;
//		if (tmp.second.size() < 4 && rgt <= N) {
//			tmp.second.emplace_back(A[rgt] - A[lft]);
//			que.push(make_pair(rgt, tmp.second));
//			if (rgt > 1 && rgt != lft) {
//				tmp.second.back() += A[rgt - 1] - A[rgt];
//				que.push(make_pair(rgt - 1, tmp.second));
//			}
//		}
//		else if (tmp.second.size() < 4 && rgt == N + 1 && rgt != lft) {
//			tmp.second.emplace_back(A[rgt - 1] - A[lft]);
//			que.push(make_pair(rgt - 1, tmp.second));
//		}
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//
//}
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
//struct Rdata {
//	int idx, score;
//	string city;
//	bool operator<(Rdata r) {
//		return (city < r.city) | (city == r.city) & (score > r.score);
//	}
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
//	vector<Rdata> rst(N);
//	for (int i = 0; i < N; i++) {
//		cin >> rst[i].city >> rst[i].score;
//		rst[i].idx = i + 1;
//	}
//	sort(rst.begin(), rst.end());
//
//	for (auto& ele : rst) cout << ele.idx << "\n";
//
//	return 0;
//}

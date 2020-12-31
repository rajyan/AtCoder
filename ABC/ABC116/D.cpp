//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//#include <set>
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
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//
//	int N, K;
//	cin >> N >> K;
//
//	struct sushi { 
//		int t, d; 
//		sushi(int t, int d) :t(t), d(d) {}
//	};
//	vector<sushi> s;
//	for (int i = 0; i < N; i++) {
//		int t, d;
//		cin >> t >> d;
//		s.emplace_back(t, d);
//	}
//	sort(s.begin(), s.end(), [](sushi l, sushi r) {return l.d > r.d; });
//
//	set<int> variety;
//	priority_queue<int, vector<int>, greater<int>> free;
//	lint sat = 0;
//	for (int i = 0; i < K; i++) {
//		sat += s[i].d;
//		if (!variety.emplace(s[i].t).second) free.emplace(s[i].d);
//	}
//
//	lint vsz = variety.size();
//	sat += vsz * vsz;
//
//	lint id = K;
//	lint ans = sat;
//	while (id < N && !free.empty()) {
//		
//		if (variety.emplace(s[id].t).second) {
//
//			sat += s[id].d - free.top();
//			free.pop();
//
//			sat += 2 * vsz + 1; // -vsz^2 + (vsz + 1)^2
//			vsz++;
//
//			ans = max(ans, sat);
//		}
//
//		id++;
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
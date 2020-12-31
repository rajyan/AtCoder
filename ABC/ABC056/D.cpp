//#include <iostream>
//#include <sstream>
//#include <cstdio>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//#include <set>
//#include <queue>
//
//#define FOR(idx, begin, end) for(int idx = (int)(begin); idx < (int)(end); ++idx)
//
//#ifdef _DEBUG
//#define DMP(x) cerr << #x << ": " << x << "\n"
//#else
//#define DMP(x) ((void)0)
//#endif
//
//using namespace std;
//typedef long long lint;
//
//const int MOD = 1000000007;
//const int INF = 1 << 29;
//const double EPS = 1e-9;
//
//
//int main() {
//
//	cin.tie(0);
//
//	int N, K;
//	cin >> N >> K;
//
//	vector<int> a(N);
//	FOR(i, 0, N) cin >> a[i];
//
//	sort(a.begin(), a.end(), greater<int>());
//	for (const auto &ele : a) DMP(ele);
//	int sum = INF, st = 0, cnt = 0, ans = N;
//
//	while (true) {
//
//		sum = 0;
//		cnt = 0;
//		bool flag = true;
//
//		while (st + cnt < N) {
//			sum += a[st + cnt];
//			cnt++;
//			if (sum >= K) {
//				flag = false;
//				break;
//			}
//		}if (flag) break;
//
//		while (sum >= K) {
//
//			ans = min(ans, N - st - cnt);
//			sum -= a[st + cnt - 1];
//			if (st + cnt < N) {
//				sum += a[st + cnt];
//			}
//			else break;
//			cnt++;
//		}
//
//		st++;
//	}
//
//	cout << ans;
//
//	return 0;
//}

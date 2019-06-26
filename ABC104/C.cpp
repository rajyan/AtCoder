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
//struct prob {
//	int bonus, num;
// };
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int D, G;
//	cin >> D >> G;
//
//	vector<prob> p(D);
//	prob ptmp;
//	for (int i = 0; i < D; i++) {
//		cin >> ptmp.num >> ptmp.bonus;
//		ptmp.bonus += (i + 1) * ptmp.num * 100;
//		p[i] = ptmp;
//	}
//
//	int ans = INF, sum, cnt, tmp;
//	for (int bit = 0b0; bit < (1 << D); bit++) {
//		
//		sum = 0, cnt = 0;
//		for (int i = 0; i < D; i++) {
//			if (bit & (1 << i)) {
//				sum += p[i].bonus;
//				cnt += p[i].num;
//			}
//		}
//
//		if (sum >= G) {
//			ans = min(ans, cnt);
//		}
//		else {
//			for (int i = D - 1; i >= 0; i--) {
//				if (!(bit & (1 << i))) {
//					tmp = (G - sum - 1) / ((i + 1) * 100) + 1;
//					if (tmp < p[i].num) {
//						ans = min(ans, cnt + tmp);
//					}
//					break;
//				}
//			}
//		}
//
//	}
//	
//	cout << ans << "\n";
//
//	return 0;
//}
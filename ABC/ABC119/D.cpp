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
//using namespace std;
//typedef long long lint;
//
//const int MOD = 1000000007;
//const lint LINF = 1111111111111111111; 
//
//int main() {
//
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//
//	lint A, B, Q;
//	cin >> A >> B >> Q;
//
//	vector<lint> s(A), t(B), x(Q);
//	for (int i = 0; i < A; i++) cin >> s[i];
//	for (int i = 0; i < B; i++) cin >> t[i];
//	for (int i = 0; i < Q; i++) cin >> x[i];
//
//	lint ups, los, upt, lot;
//
//	for (const auto &elem : x) {
//		vector<lint> cost(8, LINF);
//		ups = -1, los = -1, upt = -1, lot = -1;
//
//		if (lower_bound(s.begin(), s.end(), elem) <  s.end() ) ups = *lower_bound(s.begin(), s.end(), elem);
//		if (lower_bound(s.begin(), s.end(), elem) > s.begin()) los = *(lower_bound(s.begin(), s.end(), elem) - 1);
//		if (lower_bound(t.begin(), t.end(), elem) <  t.end() ) upt = *lower_bound(t.begin(), t.end(), elem);
//		if (lower_bound(t.begin(), t.end(), elem) > t.begin()) lot = *(lower_bound(t.begin(), t.end(), elem) - 1);
//
//		if (lower_bound(t.begin(), t.end(), ups) > t.begin() && ups != -1) cost[0] = abs(ups - elem) + abs(*(lower_bound(t.begin(), t.end(), ups) - 1) - ups);
//		if (lower_bound(t.begin(), t.end(), ups) <  t.end()  && ups != -1) cost[1] = abs(ups - elem) + abs(*lower_bound(t.begin(), t.end(), ups) - ups);
//		if (lower_bound(t.begin(), t.end(), los) > t.begin() && los != -1) cost[2] = abs(los - elem) + abs(*(lower_bound(t.begin(), t.end(), los) - 1) - los);
//		if (lower_bound(t.begin(), t.end(), los) <  t.end()  && los != -1) cost[3] = abs(los - elem) + abs(*lower_bound(t.begin(), t.end(), los) - los);
//		if (lower_bound(s.begin(), s.end(), upt) > s.begin() && upt != -1) cost[4] = abs(upt - elem) + abs(*(lower_bound(s.begin(), s.end(), upt) - 1) - upt);
//		if (lower_bound(s.begin(), s.end(), upt) <  s.end()  && upt != -1) cost[5] = abs(upt - elem) + abs(*lower_bound(s.begin(), s.end(), upt) - upt);
//		if (lower_bound(s.begin(), s.end(), lot) > s.begin() && lot != -1) cost[6] = abs(lot - elem) + abs(*(lower_bound(s.begin(), s.end(), lot) - 1) - lot);
//		if (lower_bound(s.begin(), s.end(), lot) <  s.end()  && lot != -1) cost[7] = abs(lot - elem) + abs(*lower_bound(s.begin(), s.end(), lot) - lot);
//
//		cout << *min_element(cost.begin(), cost.end()) << "\n";
//
//	}
//
//	return 0;
//}
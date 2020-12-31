//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1111111111;
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
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int X, Y, A, B, C;
//	cin >> X >> Y >> A >> B >> C;
//
//	vector<lint> p(A + 1), q(B + 1), r(C + 1);
//	for (int i = 0; i < A; i++) cin >> p[i];
//	for (int i = 0; i < B; i++) cin >> q[i];
//	for (int i = 0; i < C; i++) cin >> r[i];
//	sort(p.begin(), p.end(), greater<>());
//	sort(q.begin(), q.end(), greater<>());
//	sort(r.begin(), r.end(), greater<>());
//	p[X] = 0, q[Y] = 0;
//
//	int cnt = 0;
//	lint ans = 0;
//	auto pi = p.begin(), qi = q.begin(), ri = r.begin();
//	while (cnt++ < X + Y) {
//		DMP(max({ *pi, *qi, *ri }));
//		ans += max({ *pi, *qi, *ri });
//		if (*pi > *qi && *pi > *ri) pi++;
//		else if (*qi > *ri) qi++;
//		else ri++;
//
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
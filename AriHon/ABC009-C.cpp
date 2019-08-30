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
//	int N, K;
//	cin >> N >> K;
//	string s;
//	cin >> s;
//	const string start = s;
//
//	map<int, int> mp;
//	for (int i = 0; i < N; i++) mp[start[i] - 'a']++;
//
//	int cnt = 0;
//	for (int i = 0; i < N - 1; i++) {
//
//		mp[start[i] - 'a']--;
//
//		string tmp = s.substr(i);
//		sort(tmp.begin(), tmp.end());
//		for (int j = 0; j < tmp.size(); j++) {
//
//			auto mp_tmp = mp;
//			for (int k = 0; k < tmp.size(); k++) {
//				if (k != j && mp_tmp[tmp[k] - 'a'] > 0) mp_tmp[tmp[k] - 'a']--;
//			}
//
//			int cnt_tmp = cnt + (tmp[j] != start[i]);
//			for (const auto &e : mp_tmp) cnt_tmp += e.second;
//
//			if (cnt_tmp <= K) {
//				swap(s[i], *find(s.begin() + i, s.end(), tmp[j]));
//				cnt += (s[i] != start[i]);
//				break;
//			}
//
//		}
//	}
//
//	cout << s << "\n";
//
//	return 0;
//}

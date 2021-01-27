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
//	vector<string> s(5);
//	for (int i = 0; i < 5; i++) cin >> s[i];
//
//	vector<string> num = {
//		".###..#..###.###.#.#.###.###.###.###.###.",
//		".#.#.##....#...#.#.#.#...#.....#.#.#.#.#.",
//		".#.#..#..###.###.###.###.###...#.###.###.",
//		".#.#..#..#.....#...#...#.#.#...#.#.#...#.",
//		".###.###.###.###...#.###.###...#.###.###.",
//	};
//
//	vector<vector<string>> comp(10, vector<string>(5));
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 5; j++) {
//			comp[i][j] = num[j].substr(4 * i, 4);
//		}
//	}
//
//
//	string ans;
//	for (int i = 0; i < N; i++) {
//
//		vector<string> now(5);
//
//		for (int j = 0; j < 5; j++) {
//			now[j] = s[j].substr(4 * i, 4);
//		}
//
//		for (int j = 0; j < 10; j++) {
//			if (now == comp[j]) ans += j + '0';
//		}
//
//	}
//
//	cout << ans << "\n";
//
//	return 0;
//}
//

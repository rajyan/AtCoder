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
//#ifdef _DEBUG
//#define DMP(x) cerr << #x << ": " << x << "\n"
//#else
//#define DMP(x) ((void)0)
//#endif
//
//class Prime {
//private:
//	void Eratos(lint N) {
//		for (lint i = 2; i * i < N; i++) {
//			if (Ptb[i]) for (int j = 0; i * (j + 2) < N; j++) Ptb[i *(j + 2)] = 0;
//		}
//	}
//public:
//	vector<int> Ptb;
//	Prime(lint N) : Ptb(N + 1, 1) { Eratos(N + 1); }
//
//	vector<pair<lint, int>> Pfact(lint num) {
//		vector<pair<lint, int>> res;
//		for (lint i = 2; i * i <= num; i++) {
//			int cnt = 0;
//			while (num % i == 0) {
//				cnt++;
//				num /= i;
//			}
//			if (cnt) res.emplace_back(i, cnt);
//		}
//		if (num != 1) res.emplace_back(make_pair(num, 1));
//		return res;
//	}
//
//	bool isPrime(lint num) {
//		if (num < 2) return false;
//		else if (num < (int)(Ptb.size())) return (bool)(Ptb[num]);
//		else if (num == 2 || num == 3) return true;
//		else if (num % 2 == 0 || num % 3 == 0) return false;
//		else if (num % 6 != 1 && num % 6 != 5) return false;
//		for (lint i = 5; i * i <= num; i += 6) {
//			if (num % i == 0) return false;
//			if (num % (i + 2) == 0) return false;
//		}
//		return true;
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
//	Prime p(55555);
//
//	vector<int> ans;
//	int ans_sz = 0;
//	for (int i = 2; ans_sz < N; i += 5) {
//		if (p.isPrime(i)) {
//			ans.emplace_back(i);
//			ans_sz = static_cast<int>(ans.size());
//		}
//	}
//
//	for (const auto &e : ans) cout << e << " ";
//	cout << "\n";
//
//	return 0;
//}
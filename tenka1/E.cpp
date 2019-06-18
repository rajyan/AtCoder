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
//	vector<pair<lint,int>> Pfact(lint num) {
//		vector<pair<lint, int>> res;
//		for (lint i = 2; i * i <= num; i++) {
//				int cnt = 0;
//				while (num % i == 0) {
//					cnt++;
//					num /= i;
//				}
//				if(cnt) res.emplace_back(i, cnt);
//		}
//		if (num != 1) res.emplace_back(make_pair(num, 1));
//		return res;
//	}
//
//	bool isPrime(lint num) {
//		if (num < (int)(Ptb.size())) return (bool)(Ptb[num]);
//		else if (num < 2) return false;
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
//lint gcd(lint a, lint b) { return b ? gcd(b, a%b) : a; }
//
//int main() {
//	
//	cin.tie(0);
//
//	int N;
//	cin >> N;
//
//	vector<lint> a(N + 1), ans;
//	FOR(i, 0, N + 1) cin >> a[i];
//
//	Prime p(N);
//
//	for (int prime = 2; prime <= N; prime++) {
//
//		if (p.Ptb[prime]) {
//
//			vector<lint> mod(prime);
//			FOR(i, 0, N + 1) mod[i % (prime - 1)] += a[i];
//
//			bool flag = !(a[N] % prime);
//			FOR(i, 0, prime) {
//				if (mod[i] % prime) {
//					flag = false;
//					break;
//				}
//			}
//
//			if (flag) ans.emplace_back(prime);
//		}
//	}
//
//	lint a_gcd = 0;
//	FOR(i, 0, N + 1) a_gcd = gcd(a_gcd, abs(a[i]));
//
//	auto pfac = p.Pfact(a_gcd);
//	for (const auto &elem : pfac) ans.emplace_back(elem.first);
//
//	sort(ans.begin(), ans.end());
//	ans.erase(unique(ans.begin(), ans.end(), ans.end()));
//	for (const auto& elem : ans) cout << elem << "\n" ;
//
//	return 0;
//}
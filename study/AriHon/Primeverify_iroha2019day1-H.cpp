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
//class Prime {
//private:
//	vector<int> min_pf; // min_pf[i] = minimum prime factor of i
//	vector<int> prime;
//
//	// linear sieve https://cp-algorithms.com/algebra/prime-sieve-linear.html
//	void sieve(int N) {
//		min_pf[0] = min_pf[1] = -1;
//		for (int i = 2; i < N; i++) {
//			if (min_pf[i] == 0) {
//				prime.emplace_back(i);
//				min_pf[i] = i;
//			}
//			for (int j = 0; j < (int)(prime.size()); ++j) {
//				if (prime[j] > min_pf[i] || i * prime[j] >= N) break;
//				min_pf[i * prime[j]] = prime[j];
//			}
//		}
//	}
//
//public:
//	Prime(int N = 110000000) : min_pf(N + 1) { sieve(N + 1); }
//
//	vector<pair<lint, int>> factorize(lint n) {
//		vector<pair<lint, int>> res;
//		for (lint i = 2, sz = (lint)min_pf.size(); i * i <= n; i++) {
//			if (n < sz) break;
//			int cnt = 0;
//			while (n % i == 0) {
//				cnt++;
//				n /= i;
//			}
//			if (cnt) res.emplace_back(i, cnt);
//		}
//
//		if (n >= (lint)min_pf.size()) res.emplace_back(n, 1);
//		else {
//			int prev = min_pf[n], cnt = -1;
//			while (n > 0) {
//				int now = min_pf[n];
//				n /= now;
//				cnt++;
//				if (prev != now) {
//					res.emplace_back(prev, cnt);
//					prev = now;
//					cnt = 0;
//				}
//			}
//		}
//		return res;
//	}
//
//	// verified using boost miller_rabin_test https://wandbox.org/permlink/6YepW3J9SQNFwWxu
//	bool isPrime(lint n) {
//		if (n < (int)(min_pf.size())) return min_pf[n] == n;
//		else if (n == 2 || n == 3) return true;
//		else if (n % 2 == 0 || n % 3 == 0) return false;
//		else if (n % 6 != 1 && n % 6 != 5) return false;
//		for (lint i = 5; i * i <= n; i += 6) {
//			if (n % i == 0) return false;
//			if (n % (i + 2) == 0) return false;
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
//	int N, K;
//	cin >> N >> K;
//
//	Prime p(10000);
//	auto fact = p.factorize(N);
//
//	if (accumulate(fact.begin(), fact.end(), 0, [](int l, auto r) {return l + r.second; }) < K) {
//		cout << -1 << "\n";
//		return 0;
//	}
//
//	lint last = 1;
//	for (const auto &e : fact) {
//		if (e.second < K) {
//			K -= e.second;
//			for (int i = 0; i < e.second; i++) cout << e.first << " ";
//		}
//		else {
//			for (int i = 0; i < K - 1; i++) cout << e.first << " ";
//			for (int i = K - 1; i < e.second; i++) last *= e.first;
//			K = 1;
//		}
//	}
//	if (last != 1) cout << last << "\n";
//
//	return 0;
//}
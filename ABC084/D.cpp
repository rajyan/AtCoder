#include <cstdio>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
#include <cassert>

#ifdef _DEBUG
#define DMP(x) cerr << #x << ": " << x << "\n"
#else
#define DMP(x) ((void)0)
#endif

const int MOD = 1000000007, INF = 1111111111;
using namespace std;
using lint = long long;

class Prime {
private:
	vector<int> Ptb;

	void Eratos(lint N) {
		for (lint i = 2; i * i < N; i++) {
			if (Ptb[i]) for (int j = 0; i * (j + 2) < N; j++) Ptb[i *(j + 2)] = 0;
		}
	}

public:
	Prime(lint N) : Ptb(N + 1, 1) { Eratos(N + 1); }

	vector<pair<lint, int>> Pfact(lint num) {
		vector<pair<lint, int>> res;
		for (lint i = 2; i * i <= num; i++) {
			int cnt = 0;
			while (num % i == 0) {
				cnt++;
				num /= i;
			}
			if (cnt) res.emplace_back(i, cnt);
		}
		if (num != 1) res.emplace_back(make_pair(num, 1));
		return res;
	}

	bool isPrime(lint num) {
		if (num < 2) return false;
		else if (num < (int)(Ptb.size())) return (bool)(Ptb[num]);
		else if (num == 2 || num == 3) return true;
		else if (num % 2 == 0 || num % 3 == 0) return false;
		else if (num % 6 != 1 && num % 6 != 5) return false;
		for (lint i = 5; i * i <= num; i += 6) {
			if (num % i == 0) return false;
			if (num % (i + 2) == 0) return false;
		}
		return true;
	}
};

template <class T>
class CuSum {
private:
	vector<T> cusum;
public:
	// Constructors 
	CuSum(vector<T> const &vec) : cusum(vec.size() + 1) {
		for (int i = 0; i < (int)(vec.size()); i++) cusum[i + 1] = cusum[i] + vec[i];
	}
	CuSum(int N) : cusum(N + 1) {}
	void add(int i, T x) { cusum[i + 1] += x; }
	void init() { for (int i = 0; i < (int)(cusum.size()); i++) cusum[i + 1] += cusum[i]; }

	// partial sum of 0-indexed [l, r] 
	T operator()(int l, int r) {
		if (r < l || r < 0) {
			assert(0);
			return T(0);
		}
		else return cusum[r + 1] - cusum[l];
	}
	// 0-indexed
	T operator[](int i) { return cusum[i + 1]; }
	T back() { return cusum.back(); }
};

int main() {

	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	vector<int> similar(100000);
	Prime p(100000);
	for (int i = 1; i < 100000; i += 2) {
		if (p.isPrime(i) && p.isPrime((i + 1) / 2)) similar[i] = 1;
	}

	CuSum<int> sum(similar);
	int Q, r, l;
	cin >> Q;
	for (int i = 0; i < Q; i++) {
		cin >> l >> r;
		cout << sum(l, r) << "\n";
	}

	return 0;
}
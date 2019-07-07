#include <cstdio>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>

#ifdef _DEBUG
#define DMP(x) cerr << #x << ": " << x << "\n"
#else
#define DMP(x) ((void)0)
#endif

const int MOD = 1000000007, INF = 1111111111; 
using namespace std;
using lint = long long;

class Combi {
private:
	vector<lint> fac, inv, finv;

	void init(int N) {
		fac[0] = fac[1] = 1; inv[1] = 1; finv[0] = finv[1] = 1;

		for (int i = 2; i < N; i++) {
			fac[i] = fac[i - 1] * i % MOD;
			inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
			finv[i] = finv[i - 1] * inv[i] % MOD;
		}
	}

public:
	Combi(int N = 100000) : fac(N + 1), inv(N + 1), finv(N + 1) { init(N + 1); }

	lint Cmod(int n, int k) {
		if (n < k) return 0;
		if (n < 0 || k < 0) return 0;
		return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
	}

	lint Pmod(int n, int k) {
		if (n < k) return 0;
		if (n < 0 || k < 0) return 0;
		return fac[n] * finv[n - k] % MOD;
	}
};

Combi C;
vector<vector<int>> edges;

lint dfs(int k, vector<int> edge, int now, int from) {

	lint res = C.Pmod(k - (now != 0), (int)edge.size() - (now != 0));
	for (const auto &e : edge) {
		if (e != from) {
			res *= dfs(k, edges[e], e, now);
			res %= MOD;
		}
	}
	
	return res;

}

int main() {

	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int N, K;
	cin >> N >> K;
	edges.resize(N);
	int u, v;
	for (int i = 0; i < N - 1; i++) {
		cin >> u >> v;
		edges[u - 1].emplace_back(v - 1);
		edges[v - 1].emplace_back(u - 1);
	}
	for (const auto &elem : v)
	lint ans = K * dfs(K - 1, edges[0], 0, 0) % MOD;
	cout << ans << "\n";

	return 0;
}
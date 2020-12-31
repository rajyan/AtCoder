#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>

#define FOR(idx, begin, end) for(int idx = (int)(begin); idx < (int)(end); ++idx)

#ifdef _DEBUG
#define DMP(x) cerr << #x << ": " << x << "\n"
#else
#define DMP(x) ((void)0)
#endif

using namespace std;
typedef long long lint;

const int MOD = 100000007;
const int INF = 1 << 29;
const double EPS = 1e-9;


int main() {

	cin.tie(0);

	lint X, Y, Z, K;
	cin >> X >> Y >> Z >> K;

	vector<lint> A(X), B(Y), C(Z), ans(K);
	FOR(i, 0, X)cin >> A[i];
	FOR(i, 0, Y)cin >> B[i];
	FOR(i, 0, Z)cin >> C[i];

	sort(A.begin(), A.end(), greater<lint>());
	sort(B.begin(), B.end(), greater<lint>());
	sort(C.begin(), C.end(), greater<lint>());


	FOR(a,0,X)FOR(b,0,Y)FOR(c,0,Z){
		if ((a + 1)*(b + 1)*(c+1)<=K) ans.emplace_back(A[a] + B[b] + C[c]);
	}

	sort(ans.begin(), ans.end(), greater<lint>());
	FOR(i, 0, K) cout << ans[i] << "\n";
	return 0;
}
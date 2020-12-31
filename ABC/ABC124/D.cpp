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

const int MOD = 1000000007;
const int INF = 1000000000;
const double EPS = 1e-9;


int main() {

	cin.tie(0);

	int N, K;
	cin >> N >> K;

	string S;
	cin >> S;

	int cnt = 1;
	vector<int> set1,set0;

	FOR(i, 1, N) {
		if (S[i] == S[i - 1]) {
			cnt++;
		}
		else {
			if (S[i] == '0')	set1.emplace_back(cnt);
			else set0.emplace_back(cnt);
			cnt = 1;
		}
	}
	if (S[N - 1] == '1')	set1.emplace_back(cnt);
	else set0.emplace_back(cnt);

	int ans = 0, tmp = 0,offset = 1;

	if (S[0] == '1') offset = 0;

	cnt = 0;
	if (set0.size() <= K) {
		FOR(i, 0, set1.size()) ans += set1[i];
		FOR(i, 0, set0.size()) ans += set0[i];
	}
	else {
		while (K + cnt <= set0.size()) {
			FOR(i, ((cnt - offset) > 0 ? (cnt - offset) : 0), K + cnt + 1 - offset > set1.size() ? set1.size() : K + cnt + 1 - offset) tmp += set1[i];
			FOR(i, cnt, K + cnt) tmp += set0[i];
			ans = ans > tmp ? ans : tmp;
			tmp = 0;
			cnt++;
		}
	}

	cout << ans;
}
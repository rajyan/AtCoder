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
typedef long long lint;

int main() {

	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<lint> A(N + 1);
	for (int i = 0; i < N; i++) cin >> A[i + 1];
	for (int i = 0; i < N; i++) A[i + 1] += A[i];

	double ave = 1.0 * A[N - 1] / 4;

	queue<pair<int, vector<int>>> que;
	que.push(make_pair(0, vector<int>()));
	int lft, rgt, ans = INF;
	while (!que.empty()) {

		auto tmp = que.front();
		que.pop();
		lft = tmp.first;
		rgt = lft;

		while (rgt < N && A[rgt] - A[lft] <= ave) rgt++;

		if (tmp.second.size() < 4) {
			tmp.second.emplace_back(A[rgt] - A[lft]);
			que.push(make_pair(rgt, tmp.second));
			if (rgt > 1) {
				tmp.second.back() += A[rgt - 1] - A[rgt];
				que.push(make_pair(rgt - 1, tmp.second));
			}
		}
		else {
			ans = min(ans, *max_element(tmp.second.begin(), tmp.second.end()
						   - *min_element(tmp.second.begin(), tmp.second.end())));
		}

	}

	cout << ans << "\n";

	return 0;

}
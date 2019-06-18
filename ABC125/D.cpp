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
//#ifdef _DEBUG
//#define DMP(x) cerr << #x << ": " << x << "\n"
//#else
//#define DMP(x) ((void)0)
//#endif
//
//const int MOD = 1000000007, INF = 1111111111;
//using namespace std;
//typedef long long lint;
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<lint> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//
//	vector<pair<lint, int>> B(N - 1);
//	for (int i = 0; i < N - 1; i++) {
//
//		B[i] = make_pair(A[i + 1] + A[i], i);
//	}
//
//	while ((*min_element(B.begin(), B.end())).first < 0) {
//
//		auto min_it = min_element(B.begin(), B.end());
//
//		(*min_it).first *= -1;
//		A[(*min_it).second] *= -1;
//		A[(*min_it).second + 1] *= -1;
//
//		if (min_it > B.begin()) (*(min_it - 1)).first += 2 * A[(*min_it).second];
//		if (min_it + 1 < B.end()) (*(min_it + 1)).first += 2 * A[(*min_it).second + 1];
//	}
//
//	lint ans = 0;
//	for (const auto &elem : A) {
//
//		ans += elem;
//	}
//
//	cout << ans;
//
//	return 0;
//}
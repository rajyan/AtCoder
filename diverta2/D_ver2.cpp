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

lint tran(vector<pair<int, int>> &vec, lint n) {

	lint res = n, tmp;
	if (vec.size() == 3) {
		for (lint i = 0; i * vec[0].first <= n; i++) {
			for (lint j = 0; i * vec[0].first + j * vec[1].first <= n; j++) {
				tmp = n - i * vec[0].first - j * vec[1].first;
				res = max(res, i * vec[0].second + j * vec[1].second +
					tmp / vec[2].first * vec[2].second +
					tmp % vec[2].first);
			}
		}
	}	

	if (vec.size() == 2) {
		for (lint i = 0; i * vec[0].first <= n; i++) {
			tmp = n - i * vec[0].first;
			res = max(res, i * vec[0].second +
				tmp / vec[1].first * vec[1].second +
				tmp % vec[1].first);
		}
	}

	if (vec.size() == 1) { res = max(res, n / vec[0].first * vec[0].second + n % vec[0].first); }
	return res;
}

int main() {

	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<int> a(3), b(3);
	for (int i = 0; i < 3; i++) cin >> a[i];
	for (int i = 0; i < 3; i++) cin >> b[i];

	vector<pair<int, int>> ab, ba;
	for (int i = 0; i < 3; i++) {
		if (a[i] < b[i]) ab.emplace_back(make_pair(a[i], b[i]));
		if (a[i] > b[i]) ba.emplace_back(make_pair(b[i], a[i]));
	}

	cout << tran(ba, tran(ab, N)) << "\n";

	return 0;
}

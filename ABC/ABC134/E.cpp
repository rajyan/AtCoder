#include <cstdio>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <random>
#include <chrono>

#ifdef _DEBUG
#define DMP(x) cerr << #x << ": " << x << "\n"
#else
#define DMP(x) ((void)0)
#endif

const int MOD = 1000000007, INF = 1111111111;
using namespace std;
using lint = long long;

int main() {

	int N;
	cin >> N;
	vector <int> a(N), memo;
	for (int i = 0; i < N; i++) cin >> a[i];

	memo.emplace_back(a[0]);

	for (int i = 1; i < N; i++) {
		
		if (memo.back() >= a[i]) memo.emplace_back(a[i]);
		else *upper_bound(memo.begin(), memo.end(), a[i], greater<int>()) = a[i];

	}

	cout << memo.size();

}

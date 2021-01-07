// for MSVC++
#define _CRT_SECURE_NO_WARNINGS

#include <cassert>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <numeric>
#include <algorithm>

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007, INF = 1010101010;
constexpr lint LINF = 1LL << 60;

#ifdef _DEBUG
#include "../../../../library/src/debug_template.cpp"
#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
#else 
#define DMP(...) ((void)0)
#endif

int main() {

	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int N;
	scanf("%d", &N);

	set<string> S;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		S.emplace(s);
	}

	cout << S.size() << "\n";

	return 0;
}
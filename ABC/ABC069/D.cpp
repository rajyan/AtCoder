#include <cassert>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>

const int MOD = 1000000007, INF = 1111111111;
using namespace std;
using lint = long long;

template <class T>
ostream &operator<<(ostream &os, const vector<T> &vec) {
	for (int i = 0; i < (int)vec.size(); i++) {
		os << vec[i] << (i + 1 == vec.size() ? "" : " ");
	}
	return os;
}

#ifdef _DEBUG
template <class Head>
void dump(const char* str, Head &&h) { cerr << str << " = " << h << "\n"; };
template <class Head, class... Tail>
void dump(const char* str, Head &&h, Tail &&... t) {
	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
	dump(str + 1, t...);
}
#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
#else 
#define DMP(...) ((void)0)
#endif

int main() {

	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int H, W, N;
	cin >> H >> W >> N;

	vector<int> a(N);
	for (int i = 0; i < N; i++) cin >> a[i];

	int cnt = 0;
	vector<vector<int>> ans(H, vector<int>(W));
	for (int row = 0; row < H; row++) {
		for (int col = 0; col < W; col++) {

			if (row & 1) ans[row][col] = cnt + 1;
			else ans[row][W - col - 1] = cnt + 1;

			a[cnt]--;
			if (a[cnt] == 0) cnt++;

		}
	}
	assert(cnt == N);

	for (int row = 0; row < H; row++) {
		for (int col = 0; col < W; col++) {
			cout << ans[row][col] << " ";
		}
		cout << "\n";
	}
	

	return 0;
}
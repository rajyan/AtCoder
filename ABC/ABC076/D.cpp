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
#include <iomanip>

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

	int N;
	cin >> N;

	vector<int> t(N), v(N), time(N + 1);
	for (int i = 0; i < N; i++) cin >> t[i];
	for (int i = 0; i < N; i++) cin >> v[i];
	for (int i = 0; i < N; i++) time[i + 1] = t[i] + time[i];
	int time_end = time.back();

	vector<int> speed(2 * time_end + 1);
	for (int i = 0; i < time_end; i++) speed[i] = i;
	for (int i = time_end; i <= 2 * time_end; i++) speed[i] = 2 * time_end - i;

	for (int i = 0; i <= 2 * time_end; i++) {
		for (int j = 0; j < N; j++) {
			if (2 * time[j] <= i && i < 2 * time[j + 1]) speed[i] = min(speed[i], 2 * v[j]);
			else if (i < 2 * time[j]) speed[i] = min(speed[i], 2 * time[j] - i + 2 * v[j]);
			else speed[i] = min(speed[i], i - 2 * time[j + 1] + 2 * v[j]);
		}
	}

	int ans = 0;
	for (int i = 0; i < 2 * time_end; i++) {
		ans += speed[i] + speed[i + 1];
	}
	cout << fixed << setprecision(20) << ans / 8.0 << "\n";

	return 0;
}
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

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &vec) {
	for (int i = 0; i < vec.size(); i++) {
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

	string s;
	cin >> s;

	int gx, gy; // goal
	cin >> gx >> gy;

	int axis = 0, cnt = 0; // axis = 0 -> x, = 1 -> y;

	vector<vector<int>> pos(2, vector<int>(2 * 8000 + 1));
	pos[0][8000] = 1, pos[1][8000] = 1;

	// ”Ô•º
	s += 'T';
	bool firstT = true;
	for (int i = 0; i < s.size(); i++) {

		if(s[i] == 'T'){

			if (firstT) {
				assert(axis == 0);
				pos[axis][8000] = 0;
				pos[axis][8000 + cnt] = 1;
				firstT = false;
			}
			else {
				for (int j = 0; j <= 2 * 8000; j++) {
					if (pos[axis][j] > 0) {
						
						int id = 2 * i;

						if (pos[axis][j] < id) {
							pos[axis][j] = 0;
							pos[axis][j - cnt] = id;
							if (pos[axis][j + cnt] == 0) pos[axis][j + cnt] = id;
							else pos[axis][j + cnt] = id + 1;
						}
						if (pos[axis][j] > id) {
							pos[axis][j] = id;
							pos[axis][j - cnt] = id;
							if (pos[axis][j + cnt] == 0) pos[axis][j + cnt] = id;
							else pos[axis][j + cnt] = id + 1;
						}

					}
				}
			}

			cnt = 0;
			axis ^= 1;

		}
		else cnt++;

	}
	
	if (pos[0][gx + 8000] && pos[1][gy + 8000]) cout << "Yes" << "\n";
	else cout << "No" << "\n";

	return 0;
}

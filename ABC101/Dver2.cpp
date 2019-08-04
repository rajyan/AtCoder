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
#include <fstream>

const int MOD = 1000000007, INF = 1111111111;
using namespace std;
using lint = long long;

template <class T>
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

	auto dig = [](int n) {
		int sum = 0;
		while (n) {
			sum += n % 10;
			n /= 10;
		}
		return sum;
	};

	auto test = [&](int n) {
		return dig(n / 10 * 10) - n / 10 * 10 + n;
	};

	//ofstream outfile("sunke.txt");
	for (int i = 1; i < 10000; i++) {
		assert(test(i) == dig(i));
		cout << "i: " << i << " S(i): " << dig(i) << " sunuke: " << 1.0*i / dig(i) << "\n";

	}

	return 0;
}
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

#ifdef _DEBUG
#define DMP(x) cerr << #x << ": " << x << "\n"
#else
#define DMP(x) ((void)0)
#endif

const int MOD = 1000000007, INF = 1111111111; 
using namespace std;
using lint = long long;

lint digi(lint n) {
	lint tmp = n, res = 0;
	while (tmp != 0) {
		res += tmp % 10;
		tmp /= 10;
	}
	return res;
}

int main() {

	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	lint prev = 0, now;
	for (int i = 1; i < 500; i++) {
		
		now = digi(i);
		//if (now >= prev) {
		//	cout << i << "\n";
		//	prev = now;
		//}
		cout << setw(15) << i << " = " << double(i) / now << " ";
		if (i % 10 == 0) cout << "\n";
	}

	//int K;
	//cin >> K;

	//string nine = "";
	//for (int i = 1; i <= 10000000; i++) {
	//	
	//	if (i % 10) {
	//		cout << to_string(i % 10) + nine << "\n";
	//		K--;
	//	}
	//	if (i % 10 == 9) nine += '9';
	//	if (!K) break;
	//}

	return 0;
}
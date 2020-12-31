//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <fstream>
//
//const int MOD = 1000000007, INF = 1111111111;
//using namespace std;
//using lint = long long;
//
//template <class T>
//ostream &operator<<(ostream &os, const vector<T> &vec) {
//	for (int i = 0; i < vec.size(); i++) {
//		os << vec[i] << (i + 1 == vec.size() ? "" : " ");
//	}
//	return os;
//}
//
//#ifdef _DEBUG
//template <class Head>
//void dump(const char* str, Head &&h) { cerr << str << " = " << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head &&h, Tail &&... t) {
//	while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
//	dump(str + 1, t...);
//}
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	// ‹ð’¼
//	auto dig = [](int n) {
//		lint sum = 0;
//		while (n) {
//			sum += n % 10;
//			n /= 10;
//		}
//		return sum;
//	};
//
//	const int N = 10000000;
//	vector<double> sunuke(N), munuke(N + 1, INF);
//	for (int i = 1; i <= N; i++) {
//		sunuke[i - 1] = i / double(dig(i));
//	}
//	for (int i = N; i >= 1; i--) {
//		munuke[i - 1] = min(munuke[i], sunuke[i - 1]);
//	}
//	
//	vector<int> ans;
//	for (int i = 0; i < N; i++) {
//		if (sunuke[i] <= munuke[i + 1]) {
//			cout << i + 1 << "\n";
//			ans.emplace_back(i + 1);
//		}
//	}
//
//	int K;
//	cin >> K;
//
//	for (int i = 1; i <= min(K, 9); i++) cout << i << "\n";
//	K -= 9;
//	int cnt = 1, nine = 1, lim = 10;
//	//int chk = 9;
//	while (K > 0) {
//		if (cnt < lim){
//
//			cout << to_string(cnt) + string(nine, '9') << "\n";
//			//assert(to_string(ans[chk]) == to_string(cnt) + string(nine, '9'));
//			//chk++;
//
//		}
//		else {
//			cnt = nine - 1;
//			lim += 10;
//			nine++;
//			K++;
//		}
//		cnt++;
//		K--;
//	}
//
//	return 0;
//}
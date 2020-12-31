//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//long long modpow(long long a, long long n, long long mod) {
//	long long res = 1;
//	while (n > 0) {
//		if (n & 1) res = res * a % mod;
//		a = a * a % mod;
//		n >>= 1;
//	}
//	return res;
//}
//
//int main() {
//
//	int num_people;
//	cin >> num_people;
//
//	vector<int> abs_sub(num_people);
//	for (int i = 0; i < num_people; i++){
//
//		cin >> abs_sub[i];
//	}
//
//	sort(abs_sub.begin(), abs_sub.end());
//
//	for (int i = 0; i < num_people; i++){
//
//		if (abs_sub[i] != ( i + 2 - num_people % 2) / 2 * 2 - 1 + num_people % 2){
//
//			cout << 0;
//			return 0;
//		}
//	}
//
//	cout << modpow(2,num_people/2,1000000007);
//	return 0;
//}
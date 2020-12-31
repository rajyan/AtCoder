//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//#include <map>
//#include <queue>
//#include <algorithm>
//
//#ifdef _DEBUG
//#define DMP(x) cerr << #x << ": " << x << "\n"
//#else
//#define DMP(x) ((void)0)
//#endif
//
//using namespace std;
//using lint = long long;
//
//#pragma GCC optimize ("-O3", "unroll-loops")
//const int nmax = 204800, block = 4096, unrl = 8;
//int a[nmax], b[nmax];
//
//int main() {
//
//	int N;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) scanf("%d", &a[i]);
//	for (int i = 0; i < N; i++) scanf("%d", &b[i]);
//
//	int ans = 0;
//	for (int i = 0; i + unrl <= N; i += unrl) {
//		for (int j = 0; j + block <= N; j += block) {
//			for (int k = j; k < block + j; k++) {
//
//				ans ^= (a[i + 0] + b[k]) ^ (a[i + 1] + b[k]);
//				ans ^= (a[i + 2] + b[k]) ^ (a[i + 3] + b[k]);
//				ans ^= (a[i + 4] + b[k]) ^ (a[i + 5] + b[k]);
//				ans ^= (a[i + 6] + b[k]) ^ (a[i + 7] + b[k]);
//
//			}
//		}
//	}
//
//	for (int i = 0; i < N / unrl * unrl; i++) {
//		for (int j = N / block * block; j < N; j++) {
//			ans ^= a[i] + b[j];
//		}
//	}	
//	for (int i = N / unrl * unrl; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			ans ^= a[i] + b[j];
//		}
//	}
//
//	printf("%d\n", ans);
//
//	return 0;
//}
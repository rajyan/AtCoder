//#include <iostream>
//#include <sstream>
//#include <cstdio>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//#include <set>
//#include <queue>
//
//#define FOR(idx, begin, end) for(int idx = (int)(begin); idx < (int)(end); ++idx)
//
//#ifdef _DEBUG
//#define DMP(x) cerr << #x << ": " << x << "\n"
//#else
//#define DMP(x) ((void)0)
//#endif
//
//using namespace std;
//typedef long long lint;
//
//const int MOD = 1000000007, INF = 1111111111;
//const double EPS = 1e-9;
//
//int main() {
//
//	cin.tie(0);
//
//	int L;
//	cin >> L;
//
//	vector<lint> A(L);
//	for (int i = 0; i < L; i++) cin >> A[i];
//
//	// 座標をノードと考え、Aiをパスの数として1筆書きで消せるパスが最大になるときを求めればよい
//	// 閉路ごとの合計のパスの数-(奇点ノードの数-2)が消せる最大数
//
//	lint sum = 0, closed_sum = 0, prev_A = 0, odd_num = 0, zero_num = 1;
//	vector<lint> list(1,0);
//
//	for (int i = 0; i < L; i++) {
//
//		if (i > 0) prev_A = A[i - 1];
//		odd_num += (prev_A + A[i]) % 2;
//		sum += A[i];
//
//		if (A[i] != 0) {
//			if (zero_num != 0) list.emplace_back(zero_num);
//			zero_num = 0;
//			closed_sum += A[i];
//		}
//		else {
//
//			if (zero_num == 0) list.emplace_back(closed_sum - max<lint>(odd_num / 2 - 1, 0));
//			closed_sum = 0;
//			odd_num = 0;
//			zero_num++;
//		}
//	}
//
//	odd_num += A[L - 1] % 2;
//	if (zero_num == 0) list.emplace_back(closed_sum - max<lint>(odd_num / 2 - 1, 0));
//
//	for (int i = 2, i_sz = (int)(list.size()) - 2; i < i_sz; i+=2) {
//
//		if (list[i] > list[i + 1] || list[i + 1] < list[i + 2]) {
//			list[i + 2] += list[i] - list[i + 1];
//			list[i] = 0;
//		}
//	}
//
//	cout << sum - *max_element(list.begin(), list.end());
//}
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
//const int MOD = 1000000007, INF = 1111111111; 
//using namespace std;
//typedef long long lint;
//
//int main() {
//
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//
//	lint N, K;
//	cin >> N >> K;
//
//	vector<lint> A(N);
//	for (int i = 0; i < N; i++) cin >> A[i];
//
//	// 2進法で表したときの各桁について注目する。（0の数が過半数ならmaxXのその桁は1となる。）
//	// Kと比較してKのi桁目が1ならmaxXも1にできる。
//	// (flag)上の桁から見ていってKが1なのにmaxXは0となる場合その先maxXはKによらず1,0を決めれる。
//	lint one, maxX = 0;
//	bool flag = false;
//	for (int i = 39; i >= 0; i--) {
//
//		// N個の入力のi桁目の1の数を数える
//		one = 0;
//		for (int j = 0; j < N; j++) if ((1LL << i) & A[j]) one++;
//
//		// flagがtrueまたはKのi桁目が1 でかつ0が過半数ならmaxXのi桁目を1にする。
//		if ((flag || (K & (1LL << i))) && one - N / 2 <= 0) maxX ^= (1LL << i);
//
//		// Kが1でmaxXが0となるならそれ以降は必ずK>maxXが成立するのでflag=trueにしてmaxXの1,0は自由に決めれる。
//		if (!flag && (K & (1LL << i)) && one - N / 2 > 0) flag = true;
//
//	}
//
//	lint ans = 0;
//	for (int i = 0; i < N; i++) ans += A[i] ^ maxX;
//
//	cout << ans << "\n";
//
//	return 0;
//}
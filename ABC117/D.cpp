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
//	// 2�i�@�ŕ\�����Ƃ��̊e���ɂ��Ē��ڂ���B�i0�̐����ߔ����Ȃ�maxX�̂��̌���1�ƂȂ�B�j
//	// K�Ɣ�r����K��i���ڂ�1�Ȃ�maxX��1�ɂł���B
//	// (flag)��̌����猩�Ă�����K��1�Ȃ̂�maxX��0�ƂȂ�ꍇ���̐�maxX��K�ɂ�炸1,0�����߂��B
//	lint one, maxX = 0;
//	bool flag = false;
//	for (int i = 39; i >= 0; i--) {
//
//		// N�̓��͂�i���ڂ�1�̐��𐔂���
//		one = 0;
//		for (int j = 0; j < N; j++) if ((1LL << i) & A[j]) one++;
//
//		// flag��true�܂���K��i���ڂ�1 �ł���0���ߔ����Ȃ�maxX��i���ڂ�1�ɂ���B
//		if ((flag || (K & (1LL << i))) && one - N / 2 <= 0) maxX ^= (1LL << i);
//
//		// K��1��maxX��0�ƂȂ�Ȃ炻��ȍ~�͕K��K>maxX����������̂�flag=true�ɂ���maxX��1,0�͎��R�Ɍ��߂��B
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
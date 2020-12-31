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
//	// 入力受け取り
//	int N;
//	vector<int> ABC(3);
//	cin >> N >> ABC[0] >> ABC[1] >> ABC[2];
//
//	vector<int> len(N);
//	for (int i = 0; i < N; i++) cin >> len[i];
//
//	// bit全探索、ABCを作るコストが最小になるように順に決めていくが、使った竹はそれ以降使えないのでABCの最小コストを決める順番も全通り探索する必要がある
//	int cnt, tmp, notused, bitmp, out = INF;
//	vector<int> idx({ 0, 1, 2 });
//
//	// ABCの順番を全て試すためのnext_permutation
//	do {
//
//		// ans初期化、竹を使用したかを管理するためのnotusedの初期化
//		vector<int> ans(3, INF);
//		notused = (1 << N) - 1;
//
//		for (int k = 0; k < 3; k++) {
//			
//			// bit全探索jビット目が1ならその竹を使用する
//			for (int i = 1; i < (1 << N); i++) {
//
//				cnt = -1, tmp = 0;
//				for (int j = 0; j < N; j++) {
//					if (i & (1 << j) & notused) {
//						cnt++;
//						tmp += len[j];
//					}
//				}
//
//				// tmp == 0のときはすでに使用した竹なのでcontinue
//				if (!tmp) continue;
//
//				// mpコストの最小値がansより小さいならansを更新しその時に使用した竹をbittmpで保存
//				if (ans[idx[k]] > abs(tmp - ABC[idx[k]]) + cnt * 10) {
//					ans[idx[k]] = abs(tmp - ABC[idx[k]]) + cnt * 10;
//					bitmp = ~i;
//				}
//
//			}
//			// 使った竹のbitを0にする
//			notused &= bitmp;
//		}
//
//		// 全探索を行い総コストが最小のときが答え
//		out = min(out, ans[0] + ans[1] + ans[2]);
//
//	} while (next_permutation(idx.begin(), idx.end()));
//
//	cout << out << "\n";
//
//	return 0;
//}
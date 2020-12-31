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
//	// ���͎󂯎��
//	int N;
//	vector<int> ABC(3);
//	cin >> N >> ABC[0] >> ABC[1] >> ABC[2];
//
//	vector<int> len(N);
//	for (int i = 0; i < N; i++) cin >> len[i];
//
//	// bit�S�T���AABC�����R�X�g���ŏ��ɂȂ�悤�ɏ��Ɍ��߂Ă������A�g�����|�͂���ȍ~�g���Ȃ��̂�ABC�̍ŏ��R�X�g�����߂鏇�Ԃ��S�ʂ�T������K�v������
//	int cnt, tmp, notused, bitmp, out = INF;
//	vector<int> idx({ 0, 1, 2 });
//
//	// ABC�̏��Ԃ�S�Ď������߂�next_permutation
//	do {
//
//		// ans�������A�|���g�p���������Ǘ����邽�߂�notused�̏�����
//		vector<int> ans(3, INF);
//		notused = (1 << N) - 1;
//
//		for (int k = 0; k < 3; k++) {
//			
//			// bit�S�T��j�r�b�g�ڂ�1�Ȃ炻�̒|���g�p����
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
//				// tmp == 0�̂Ƃ��͂��łɎg�p�����|�Ȃ̂�continue
//				if (!tmp) continue;
//
//				// mp�R�X�g�̍ŏ��l��ans��菬�����Ȃ�ans���X�V�����̎��Ɏg�p�����|��bittmp�ŕۑ�
//				if (ans[idx[k]] > abs(tmp - ABC[idx[k]]) + cnt * 10) {
//					ans[idx[k]] = abs(tmp - ABC[idx[k]]) + cnt * 10;
//					bitmp = ~i;
//				}
//
//			}
//			// �g�����|��bit��0�ɂ���
//			notused &= bitmp;
//		}
//
//		// �S�T�����s�����R�X�g���ŏ��̂Ƃ�������
//		out = min(out, ans[0] + ans[1] + ans[2]);
//
//	} while (next_permutation(idx.begin(), idx.end()));
//
//	cout << out << "\n";
//
//	return 0;
//}
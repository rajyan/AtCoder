//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int N = 5;
//////   ����ȃO���t
//////   1 -- 2 -- 3 
//////   |    |
//////   5 -- 4
//vector<vector<int>> edges{ {1,4},{0,2,3},{1},{1,4},{0,3} };
//
//vector<bool> visited(N);
//
//int dfs(int now) {
//
//	cout << "�����_ " << now + 1 << " �ɂ��܂��I\n\n";
//	visited[now] = true;   // step1 ���̓_��K�ꂽ���Ƃɂ��鏈��
//	
//	cout << "�����܂ł�visited ";
//	for (const auto &e : visited) cout << e << " ";
//	cout << "\n\n";
//
//	int result = 0; // �Ԃ�����
//
//	result += 1; // step2 ��肽�������A����̏ꍇ�A���_�̐��𐔂��邾���Ȃ̂�+1
//
//	for (const auto &e : edges[now]) {  // step3 ���̒��_����s���钸�_�ɂ��āA
//		if (!visited[e]) {				// �܂��K�ꂽ���Ƃ��Ȃ���΁A�����Ɉړ�����
//
//			cout <<"���_ " << now + 1 << " ���璸�_ " << e + 1 << " �ɂ����܂��I\n\n";
//			result += dfs(e);
//		}
//	}
//
//	cout << "���_ " << now + 1 << " ���炽�ǂ��Ă����钸�_�̍��v�i�������܂ށj�� " << result << " �_�ł��I\n\n";
//	return result; //step4 ���̓_���炽�ǂ��čs���Ĉړ��ł��Ȃ�܂ł̍��v��Ԃ�
//
//}
//
//void dfs(int now, vector<int> visited, int idx) {
//
//	idx++;
//	cout << "�����_ " << now + 1 << " �ɂ��܂��I\n\n";
//	visited[now] = idx;   // step1 ���̓_��K�ꂽ���Ƃɂ��鏈��
//
//	cout << "�����܂ł�visited ";
//	for (const auto &e : visited) cout << bool(e) << " ";
//	cout << "\n\n";
//
//	bool flag = true;
//	for (const auto &e : edges[now]) {  // step3 ���̒��_����s���钸�_�ɂ��āA
//		if (!visited[e]) {				// �܂��K�ꂽ���Ƃ��Ȃ���΁A�����Ɉړ�����
//			flag = false;
//			cout << "���_ " << now + 1 << " ���璸�_ " << e + 1 << " �ɂ����܂��I\n\n";
//			dfs(e, visited, idx);
//		}
//	}
//
//	if (flag) {
//		cout << "�s���~�܂�܂���!\n";
//		cout << "�����܂ŖK�ꂽ���_�͏��� ";
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				if (visited[j] == i + 1) cout << j + 1 << " ";
//			}
//		}
//		cout << "�ł��I\n���̃��[�g�őS�Ă̒��_�����ǂ邱��";
//
//		if (any_of(visited.begin(), visited.end(), [](int r) {return r == 0; })) cout << "�͂ł��܂���ł���" << "\n\n";
//		else cout << "���ł��܂����I" << "\n\n";
//	}
//
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	cout << "-------------visited�O���[�o��ver�ł�" << "\n";
//	dfs(0);
//
//	cout << "\n\n\n-------------visited���[�J��ver�ł�" << "\n";
//	dfs(0, vector<int>(N), 0);
//
//	return 0;
//}

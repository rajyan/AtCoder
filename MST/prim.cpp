//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <algorithm>
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
//typedef pair<int, int> points;
//
//const int INF = 1 << 29;
//
////2�X�Ԃ̋��������߂�B�㉺���E�̃��[�v�ƕ��ʂ̋����Ƃōŏ��̂��̂�Ԃ�
//int calc_dist(points town1, points town2, int Hieght, int Width) {
//
//	vector<int> dist(3);
//
//	//���E���[�v
//	dist[0] = Width - abs(town1.first - town2.first) + abs(town1.second - town2.second);
//	//�㉺���[�v
//	dist[1] = Hieght - abs(town1.second - town2.second) + abs(town1.first - town2.first);
//	//���[�v�Ȃ�
//	dist[2] = abs(town1.second - town2.second) + abs(town1.first - town2.first);
//
//	return *min_element(dist.begin(), dist.end());
//}
//
//int main() {
//
//	cin.tie(0);
//
//	//���͓ǂݍ���
//	int N, Height, Width;
//	cin >> N >> Height >> Width;
//
//	vector<points> towns(N);
//	FOR(i, 0, N) cin >> towns[i].first >> towns[i].second;
//
//	//2�_i,j�̋�����dist[i][j]�ŕۑ�
//	vector<vector<int>> dist(N, vector<int>(N, 0));
//
//	//dist�̏�����
//	FOR(i, 0, N)FOR(j, 0, N) dist[i][j] = calc_dist(towns[i], towns[j], Height, Width);
//
//	//�K�ꂽ�X��vector�ŕۑ�
//	vector<int> visited(N, 0);
//
//	//�K�ꂽ���Ƃ̂���X���猩�čŏ��̋����̊X�����ɖK��Ă���(�v�����@)
//	priority_queue<points, vector<points>, greater<points>> dist_queue;
//	pair<int, int> tmp = make_pair(0, 0);
//	dist_queue.push(tmp);
//
//	//�����̏������Aint�ŏ\�������ǈꉞlint
//	lint ans = 0;
//
//	//�S�Ă̊X��K�ꂽ��I��
//	while (*min_element(visited.begin(), visited.end()) == 0) {
//		
//		//�D��x�t���L���[�̐擪���珇�Ɏ��o���A�s���悪�K�ꂽ���Ƃ̂Ȃ��X�Ȃ�tmp�ɂ����
//		do{
//			tmp = dist_queue.top();
//			dist_queue.pop();
//			
//		} while (visited[tmp.second]);
//		
//		//tmp�ɓ��ꂽ�X�ɖK���
//		visited[tmp.second] = 1;
//
//		//�������������𑫂�
//		ans += tmp.first;
//
//		//tmp����K�ꂽ���ƂȂ��X�ւ̋�����S�ăL���[�ɓ����
//		for (int i = 0; i < N; i++) if (!visited[i]) dist_queue.push(make_pair(dist[tmp.second][i], i));
//
//	}
//
//	cout << ans;
//
//	return 0;
//}
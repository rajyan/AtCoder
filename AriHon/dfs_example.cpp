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
//////   こんなグラフ
//////   1 -- 2 -- 3 
//////   |    |
//////   5 -- 4
//vector<vector<int>> edges{ {1,4},{0,2,3},{1},{1,4},{0,3} };
//
//vector<bool> visited(N);
//
//int dfs(int now) {
//
//	cout << "今頂点 " << now + 1 << " にいます！\n\n";
//	visited[now] = true;   // step1 今の点を訪れたことにする処理
//	
//	cout << "ここまでのvisited ";
//	for (const auto &e : visited) cout << e << " ";
//	cout << "\n\n";
//
//	int result = 0; // 返すもの
//
//	result += 1; // step2 やりたい処理、今回の場合、頂点の数を数えるだけなので+1
//
//	for (const auto &e : edges[now]) {  // step3 今の頂点から行ける頂点について、
//		if (!visited[e]) {				// まだ訪れたことがなければ、そこに移動する
//
//			cout <<"頂点 " << now + 1 << " から頂点 " << e + 1 << " にいきます！\n\n";
//			result += dfs(e);
//		}
//	}
//
//	cout << "頂点 " << now + 1 << " からたどっていける頂点の合計（自分を含む）は " << result << " 点です！\n\n";
//	return result; //step4 その点からたどって行って移動できなるまでの合計を返す
//
//}
//
//void dfs(int now, vector<int> visited, int idx) {
//
//	idx++;
//	cout << "今頂点 " << now + 1 << " にいます！\n\n";
//	visited[now] = idx;   // step1 今の点を訪れたことにする処理
//
//	cout << "ここまでのvisited ";
//	for (const auto &e : visited) cout << bool(e) << " ";
//	cout << "\n\n";
//
//	bool flag = true;
//	for (const auto &e : edges[now]) {  // step3 今の頂点から行ける頂点について、
//		if (!visited[e]) {				// まだ訪れたことがなければ、そこに移動する
//			flag = false;
//			cout << "頂点 " << now + 1 << " から頂点 " << e + 1 << " にいきます！\n\n";
//			dfs(e, visited, idx);
//		}
//	}
//
//	if (flag) {
//		cout << "行き止まりました!\n";
//		cout << "ここまで訪れた頂点は順に ";
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				if (visited[j] == i + 1) cout << j + 1 << " ";
//			}
//		}
//		cout << "です！\nこのルートで全ての頂点をたどること";
//
//		if (any_of(visited.begin(), visited.end(), [](int r) {return r == 0; })) cout << "はできませんでした" << "\n\n";
//		else cout << "ができました！" << "\n\n";
//	}
//
//}
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	cout << "-------------visitedグローバルverです" << "\n";
//	dfs(0);
//
//	cout << "\n\n\n-------------visitedローカルverです" << "\n";
//	dfs(0, vector<int>(N), 0);
//
//	return 0;
//}

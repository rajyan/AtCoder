//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//
//int main() {
//
//	int N, D;
//	cin >> N >> D;
//
//	vector<string> line(N);
//	map<string, int> map;
//
//	for (int i = 0; i < N; i++)	{
//
//		cin >> line[i];
//
//		int cnt = 0, cntdot = 0;
//
//		while (cntdot != D) {
//			if(*(line[i].rbegin() + cnt) == '.') cntdot++;
//			cnt++;
//		}
//		line[i] = line[i].substr(line[i].length() - cnt + 1);
//
//		map[line[i]]++;
//	}
//
//	vector<pair<int, string>> output;
//	for (auto &&ele : map) output.emplace_back(ele.second, ele.first);
//
//	sort(output.begin(), output.end(), greater<pair<int,string>>());
//	for (auto &&ele : output) cout << ele.second << " " << ele.first << "\n";
//
//	return 0;
//}
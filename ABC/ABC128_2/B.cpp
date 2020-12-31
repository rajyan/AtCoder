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
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<pair<string, pair<int, int>>> data(N);
//	string city;
//	int rank;
//	for (int i = 0; i < N; i++) {
//		cin >> city >> rank;
//		data[i] = (make_pair(city, make_pair(rank * -1, i + 1)));
//	}
//
//	sort(data.begin(), data.end());
//
//	for (const auto &elem : data) {
//
//		cout << elem.second.second << "\n";
//
//	}
//
//	return 0;
//}
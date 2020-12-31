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
//#ifdef _DEBUG
//#define DMP(x) cerr << #x << ": " << x << "\n"
//#else
//#define DMP(x) ((void)0)
//#endif
//
//using namespace std;
//typedef long long lint;
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N, M;
//	cin >> N >> M;
//
//	int tmp;
//	vector<int> city(N);
//	for (int i = 0; i < M * 2; i++) {
//		cin >> tmp;
//		city[tmp - 1]++;
//	}
//
//	for (const auto &elem : city) {
//
//		cout << elem << "\n";
//	}
//	return 0;
//}
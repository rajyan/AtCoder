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
//	lint N, K;
//	cin >> N >> K;
//
//	vector<pair<lint,lint>> num(N);
//	for (int i = 0; i < N; i++) cin >> num[i].first >> num[i].second;
//	sort(num.begin(), num.end());
//
//	lint ptr = 0, idx = 0;
//	while (ptr < K) {
//	
//		ptr += num[idx].second;
//		idx++;
//	}
//
//	cout << num[idx - 1].first;
//
//	return 0;
//}
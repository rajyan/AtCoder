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
//using lint = long long;
//
//int main() {
//
//	cin.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<int> a(N);
//	for (int i = 0; i < N; i++) cin >> a[i];
//	sort(a.begin(), a.end());
//
//	cout << a.back() << " ";
//
//	int tmp = (a.back() + 1) / 2;
//	auto bnd = upper_bound(a.begin(), a.end(), tmp);
//	if (*bnd - tmp >= tmp - *(bnd - 1)) cout << *(bnd - 1) << "\n";
//	else cout << *bnd << "\n";
//
//	return 0;
//}
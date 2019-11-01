//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int N, Q;
//	cin >> N >> Q;
//
//	vector<int> is_white(N + 1);
//	for (int i = 0; i < Q; i++) {
//		int l, r;
//		cin >> l >> r;
//		is_white[l - 1] += 1;
//		is_white[r] -= 1;
//	}
//
//	for (int i = 0; i < N; i++)is_white[i + 1] += is_white[i];
//	string ans;
//	for (int i = 0; i < N; i++)ans += ((is_white[i] & 1) + '0');
//	cout << ans << "\n";
//
//}

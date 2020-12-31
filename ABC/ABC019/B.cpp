//#include <iostream>
//using namespace std;
//string runlength(string s, char banpei = '*') {
//	s += banpei;
//	char now = s[0];
//	int cnt = 0;
//	string res;
//	for (const auto &c : s) {
//		if (now == c) cnt++;
//		else {
//			res += now + to_string(cnt);
//			now = c;
//			cnt = 1;
//		}
//	}
//	return res;
//}
//
//int main() {
//	string s;
//	cin >> s;
//	cout << runlength(s) << endl;
//}

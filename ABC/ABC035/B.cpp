//#include <iostream>
//
//using namespace std;
//
//int main() {
//	string s;
//	cin >> s;
//	int n;
//	cin >> n;
//
//	int x = 0, y = 0, cnt = 0;
//	for (const auto &c : s) {
//		if (c == 'U') y++;
//		else if (c == 'D') y--;
//		else if (c == 'R') x++;
//		else if (c == 'L') x--;
//		else cnt++;
//	}
//
//	while (cnt) {
//		if (x != 0) x += ((x > 0) ? -1 : 1) * (n == 1 ? -1 : 1);
//		else if (y != 0) y += ((y > 0) ? -1 : 1) * (n == 1 ? -1 : 1);
//		else x++;
//		cnt--;
//	}
//
//	cout << abs(x) + abs(y) << endl;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//
//	int S_x, S_y, G_x, G_y;
//
//	cin >> S_x >> S_y >> G_x >> G_y;
//
//	for (int i = 0; i < G_x - S_x; i++){
//		cout << 'R';
//	}
//	for (int i = 0; i < G_y - S_y; i++) {
//		cout << 'U';
//	}
//	for (int i = 0; i < G_x - S_x; i++) {
//		cout << 'L';
//	}
//	for (int i = 0; i < G_y - S_y; i++) {
//		cout << 'D';
//	}
//	cout << 'D';
//	for (int i = 0; i < G_x - S_x + 1; i++) {
//		cout << 'R';
//	}
//	for (int i = 0; i < G_y - S_y + 1; i++) {
//		cout << 'U';
//	}
//	cout << "LU";
//	for (int i = 0; i < G_x - S_x + 1; i++) {
//		cout << 'L';
//	}
//	for (int i = 0; i < G_y - S_y + 1; i++) {
//		cout << 'D';
//	}
//	cout << 'R';
//	return 0;
//}
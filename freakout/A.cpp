//#include <iostream>
//#include <sstream>
//#include <vector>
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
//int main(int argc, char *argv[]) {
//
//	//入力受け取り（char配列なのでstringstreamでintに変換）
//	stringstream instring(argv[1]);
//
//	lint input;
//	instring >> input;
//
//	//フィボナッチ数列を作り、初めの２項を入れる。既に計算した項はメモしておくことで高速化
//	vector<lint> fibb(1000);
//
//	fibb[0] = 1;
//	fibb[1] = 1;
//
//	for (int i = 2; fibb[i - 1] > 0; i++) {
//		//フィボナッチ数列の遷移式
//		fibb[i] = fibb[i - 1] + fibb[i - 2];
//		//入力が数列と同じなら遷移をやめ、現在のiを出力(0-indexedから1-indexedに)
//		if (fibb[i] == input) {
//			cout << i + 1;
//			return 0;
//		}
//	}
//	//全て異なるなら-1
//	cout << -1;
//	return 0;
//}
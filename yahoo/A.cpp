//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//
//	//服の価格を入れる配列priceを準備
//	vector<int> price(10);
//
//	//入力を受け取る
//	for (int i = 0; i < 10; i++){
//
//		cin >> price[i];
//	}
//
//	//答えの出力用のsumを初期化（答えはintでオーバーフローしない）
//	int sum = 0;
//
//	//各価格について10000以下かをifで確認し、trueなら足す
//	for (int i = 0; i < 10; i++) {
//
//		if (price[i] <= 10000) {
//			sum += price[i];
//		}
//	}
//
//	//答えの出力
//	cout << sum;
//
//	return 0;
//}
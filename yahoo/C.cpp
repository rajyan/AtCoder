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
//using namespace std;
//typedef long long lint;
//
//int main() {
//
//	int N, X, Y;
//	cin >> N >> X >> Y;
//
//	vector<double> price(N);
//	for (int i = 0; i < N; i++){
//
//		cin >> price[i];
//	}
//
//	sort(price.begin(), price.end(), greater<int>());
//	
//	int higher2000 = 0, higher1000 = 0;
//	for (int i = 0; i < N; i++){
//
//		if (2000 < price[i]) higher2000++;
//		if (1000 < price[i]) higher1000++;
//	}
//
//	int sum = 0;
//
//	int i = 0;
//	for (; i <= min(higher1000 - higher2000, higher1000 - Y) && X > 0; i++) {
//
//		price[i] *= 0.95;
//		X--;
//		sum += price[i];
//	}
//
//	for (; Y > 0 && price[i] > 1000; i++) {
//
//		price[i] -= 100;
//		Y--;
//		sum += price[i];
//	}
//
//	for (; i < N; i++) {
//
//		if (X > 0) {
//			price[i] *= 0.95;
//			X--;
//		}
//		sum += price[i];
//	}
//	
//	//for (int i = 0; i < N; i++) { 
//
//	//	if (price[i] > 2000 && X > 0) {
//	//		
//	//		price[i] *= 0.95;
//	//		X--;
//	//	}
//	//	else if(price[i] > 1000 && Y > 0){
//	//		price[i] -= 100;
//	//		Y--;
//	//	}
//	//	else if (X > 0) {
//	//		price[i] *= 0.95;
//	//		X--;
//	//	}
//	//	sum += price[i];
//	//}
//
//	cout << sum;
//
//	return 0;
//}
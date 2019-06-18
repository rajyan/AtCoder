//#include <iostream>
//#include <string>
//#include <vector>
//#include <utility>
//
//using namespace std;
//
//int main() {
//
//	int num_box, num_spell;
//
//	cin >> num_box >> num_spell;
//
//	string box_letter;
//
//	cin >> box_letter;
//
//	vector	<pair<char, char>> spell(num_spell);
//	for (int i = 0; i < num_spell; i++){
//
//		cin >> spell[i].first;
//		cin >> spell[i].second;
//	}
//
//	vector <int> golems(num_box,1);
//	vector <int> golemstmp(num_box, 1);
//
//	for (int i = 0; i < num_spell; i++){
//		for (int j = 0; j < num_box; j++) {
//		
//			if (box_letter[j] == spell[i].first) {
//				if (spell[i].second == 'R'){
//
//					if (golems[j] != 0){
//
//						golemstmp[j] = 0 ;
//						if (j < num_box - 1) {
//
//							golemstmp[j + 1] += golems[j];
//						}
//					}
//
//				}
//				else {
//					if (golems[j] != 0) {
//
//						golemstmp[j] = 0;
//						if (j > 0) {
//
//							golemstmp[j - 1] += golems[j];
//						}
//					}
//				}
//
//			}
//			copy(golemstmp.begin(), golemstmp.end(), golems.begin());
//		}
//
//	}
//
//	int sum = 0;
//
//	for (int i = 0; i < num_box; i++){
//
//		sum += golems[i];
//	}
//
//	cout << sum;
//
//	return 0;
//}
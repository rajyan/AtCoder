//#include <iostream>
//#include <vector>
//#include <utility>
//
//using namespace std;
//
//int main() {
//
//	int num_problem, num_drink, sum_time = 0;
//
//	cin >> num_problem;
//
//	vector<int> problem_time(num_problem);
//	for (int i = 0; i < num_problem; i++){
//
//		cin >> problem_time[i];
//	}
//
//	cin >> num_drink;
//
//	vector<pair<int, int>> drink(num_drink);
//
//	for (int i = 0; i < num_drink; i++){
//
//		cin >> drink[i].first >> drink[i].second;
//	}
//
//	for (int i = 0; i < num_problem; i++){
//
//		sum_time += problem_time[i];
//	}
//
//	for (int i = 0; i < num_drink; i++) {
//
//		cout << sum_time - problem_time[drink[i].first - 1] + drink[i].second << "\n";
//	}
//
//	return	0;
//}
#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

int main() {

	int num_box, num_spell;

	cin >> num_box >> num_spell;

	string box_letter;

	cin >> box_letter;

	vector	<pair<char, char>> spell(num_spell);
	for (int i = 0; i < num_spell; i++) {

		cin >> spell[i].first;
		cin >> spell[i].second;
	}

	int count_R = 0, count_L = 0,count_Rtmp = 0, count_Ltmp = 0;
	int idx = num_box - 1;

	for (int i = 0; i < num_spell; i++) {

		for (int j = idx; j < num_box; j++) {
			if (spell[num_spell - i - 1].first == box_letter[j] && spell[num_spell - i - 1].second == 'L') {
				idx = num_box - 1;
				count_Rtmp = count_Rtmp < count_R ? count_R : count_Rtmp;
				count_R = 0;
			}
		}
		for (int j = idx; j < num_box; j++) {

			if (spell[num_spell - i - 1].first == box_letter[j] && spell[num_spell - i - 1].second == 'R') {
				idx--;
				count_R++;
			}
		}
	}

	idx = 0;
	for (int i = 0; i < num_spell; i++) {

		for (int j = 0; j <= idx; j++) {

			if (spell[num_spell - i - 1].first == box_letter[j] && spell[num_spell - i - 1].second == 'R') {
				idx = 0;
				count_Ltmp = count_Ltmp < count_L ? count_L : count_Ltmp;
				count_L = 0;
			}
		}
		for (int j = idx; j < num_box; j++) {

			if (spell[num_spell - i - 1].first == box_letter[j] && spell[num_spell - i - 1].second == 'L') {
				idx++;
				count_L++;
			}
		}
	}

	count_Rtmp = count_Rtmp < count_R ? count_R : count_Rtmp;
	count_Ltmp = count_Ltmp < count_L ? count_L : count_Ltmp;

	cout << num_box - count_Ltmp - count_Rtmp;
	while (true)
	{

	}
	return 0;

}
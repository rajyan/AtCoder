//#ifdef _DEBUG
//#include "../../library/library/debug_template.cpp"
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else
//#define DMP(...) ((void)0)
//#endif
//
//#include <cassert>
//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <vector>
//#include <set>
//#include <map>
//#include <unordered_map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//#include <bitset>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1010101010;
//constexpr lint LINF = 1LL << 60;
//
//struct init {
//	init() {
//		cin.tie(nullptr); ios::sync_with_stdio(false);
//		cout << fixed << setprecision(10);
//	}
//} init_;
//
//int main() {
//
//	string s;
//	cin >> s;
//
//	int i = 0;
//	while (i < s.size() && s[i] == '_') i++;
//	string f_unsco = s.substr(0, i);
//	s = s.substr(i);
//
//	i = (int)s.size() - 1;
//	while (0 <= i && s[i] == '_') i--;
//	string b_unsco = s.substr(i + 1);
//	s = s.substr(0, i + 1);
//
//	bool has_unsco = false;
//	bool is_camel = s.empty() ? true : islower(s[0]);
//	bool is_word = true;
//	bool word_begin = true;
//	for (const auto& c : s) {
//		if (c == '_') {
//			if (word_begin) is_word = false;
//			has_unsco = true;
//			is_camel = false;
//			word_begin = true;
//		}
//		else if (word_begin) {
//			if (!islower(c)) is_word = false;
//			word_begin = false;
//		}
//		else {
//			if (isupper(c)) is_word = false;
//		}
//	}
//
//	if (is_camel && !has_unsco) {
//		string ans = "";
//		for (int i = 0; i < s.size(); i++) {
//			if (isupper(s[i])) {
//				ans += '_';
//				ans += tolower(s[i]);
//			}
//			else ans += s[i];
//		}
//		ans[0] = tolower(ans[0]);
//		cout << f_unsco + ans + b_unsco << "\n";
//	}
//	else if (has_unsco && is_word) {
//		string ans = "";
//		for (int i = 0; i < s.size(); i++) {
//			if (s[i] == '_') {
//				s[i + 1] = toupper(s[i + 1]);
//			}
//			else ans += s[i];
//		}
//		cout << f_unsco + ans + b_unsco << "\n";
//	}
//	else {
//		cout << f_unsco + s + b_unsco << "\n";
//	}
//
//	return 0;
//}

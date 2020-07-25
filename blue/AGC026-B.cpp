//#include <cstdio>
//#include <cmath>
//#include <iostream>
//#include <iomanip>
//#include <sstream>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//using lint = long long;
//constexpr int MOD = 1000000007, INF = 1010101010;
//constexpr lint LINF = 1LL << 60;
//
//template <class T>
//ostream& operator<<(ostream& os, const vector<T>& vec) {
//    for (const auto& e : vec) os << e << (&e == &vec.back() ? "\n" : " ");
//    return os;
//}
//
//#ifdef _DEBUG
//template <class T>
//void dump(const char* str, T&& h) { cerr << str << " = " << h << "\n"; };
//template <class Head, class... Tail>
//void dump(const char* str, Head&& h, Tail&&... t) {
//    while (*str != ',') cerr << *str++; cerr << " = " << h << "\n";
//    dump(str + (*(str + 1) == ' ' ? 2 : 1), t...);
//}
//#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
//#else 
//#define DMP(...) ((void)0)
//#endif
//
//lint gcd(lint a, lint b) { return b ? gcd(b, a % b) : a; }
//
//int main() {
//
//    cin.tie(nullptr);
//    ios::sync_with_stdio(false);
//
//    int t;
//    cin >> t;
//
//    for (int i = 0; i < t; i++) {
//
//        lint a, b, c, d;
//        cin >> a >> b >> c >> d;
//
//        if (b > d || b > a) {
//            cout << "No\n";
//            continue;
//        }
//
//        if (b - 1 <= c) {
//            cout << "Yes\n";
//            continue;
//        }
//
//        lint g = gcd(b, d);
//        if (a % b + (b - 1 - a % b) / g * g <= c) cout << "Yes\n";
//        else cout << "No\n";
//
//    }
//
//    return 0;
//}

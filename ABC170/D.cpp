//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    int n;
//    cin >> n;
//    vector<int> a(n + 1);
//    for (int i = 0; i < n; i++) cin >> a[i];
//    sort(a.begin(), a.end() - 1);
//    vector<int> used(1000011);
//    int ans = 0;
//    for (int i = 0; i < n; i++) {
//        if (used[a[i]] == 0) {
//            if (a[i] != a[i + 1]) ans++;
//            for (int j = 1; j * a[i] < 1000010; j++) used[j * a[i]] = 1;
//        }
//    }
//    cout << ans;
//}

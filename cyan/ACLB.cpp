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
//#include <functional>
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
//template <typename T>
//struct SegmentTree {
//    using F = function<T(T, T)>;
//    int n;
//    F f;
//    T ti;
//    vector<T> dat;
//
//    SegmentTree(F f, T ti) :f(f), ti(ti) {}
//
//    void init(int n_) {
//        n = 1;
//        while (n < n_) n <<= 1;
//        dat.assign(n << 1, ti);
//    }
//
//    void build(const vector<T>& v) {
//        int n_ = v.size();
//        init(n_);
//        for (int i = 0; i < n_; i++) dat[n + i] = v[i];
//        for (int i = n - 1; i; i--)
//            dat[i] = f(dat[(i << 1) | 0], dat[(i << 1) | 1]);
//    }
//
//    void set_val(int k, T x) {
//        dat[k += n] = x;
//        while (k >>= 1)
//            dat[k] = f(dat[(k << 1) | 0], dat[(k << 1) | 1]);
//    }
//
//    T query(int a, int b) {
//        if (a >= b) return ti;
//        T vl = ti, vr = ti;
//        for (int l = a + n, r = b + n; l < r; l >>= 1, r >>= 1) {
//            if (l & 1) vl = f(vl, dat[l++]);
//            if (r & 1) vr = f(dat[--r], vr);
//        }
//        return f(vl, vr);
//    }
//
//    template<typename C>
//    int find(int st, C& check, T& acc, int k, int l, int r) {
//        if (l + 1 == r) {
//            acc = f(acc, dat[k]);
//            return check(acc) ? k - n : -1;
//        }
//        int m = (l + r) >> 1;
//        if (m <= st) return find(st, check, acc, (k << 1) | 1, m, r);
//        if (st <= l and !check(f(acc, dat[k]))) {
//            acc = f(acc, dat[k]);
//            return -1;
//        }
//        int vl = find(st, check, acc, (k << 1) | 0, l, m);
//        if (~vl) return vl;
//        return find(st, check, acc, (k << 1) | 1, m, r);
//    }
//
//    template<typename C>
//    int find(int st, C& check) {
//        T acc = ti;
//        return find(st, check, acc, 1, 0, n);
//    }
//};
//
//template<class T>
//inline bool chmax(T& a, const T b) { return a < b && (a = b, true); }
//
//int main() {
//
//    int N, K;
//    cin >> N >> K;
//
//    vector<int> A(N);
//    for (int i = 0; i < N; i++) cin >> A[i];
//
//    constexpr int A_max = 333333;
//    auto f = [](int a, int b) { return max(a, b); };
//    SegmentTree<int> sg(f, 0);
//    sg.init(A_max);
//
//    int ans = 0;
//    for (int i = 0; i < N; i++) {
//        int L = max(A[i] - K, 0);
//        int R = min(A[i] + K + 1, A_max);
//        int now = sg.query(L, R) + 1;
//        sg.set_val(A[i], now);
//        chmax(ans, now);
//    }
//
//    cout << ans << "\n";
//
//	return 0;
//}

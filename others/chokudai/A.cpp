#ifdef _DEBUG
#include "../../../library/src/debug_template.cpp"
#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
#else
#define DMP(...) ((void)0)
#endif

#include <cassert>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <numeric>
#include <algorithm>
#include <array>

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007, INF = 1010101010;
constexpr lint LINF = 1LL << 60;

template<class T>
vector<T> make_vec(size_t s, T val) { return vector<T>(s, val); }
template<class... Size>
auto make_vec(size_t s, Size... tail) {
    return vector<decltype(make_vec(tail...))>(s, make_vec(tail...));
}

int id, n = 100, k;
auto color = make_vec(n, n, 0);
auto base = make_vec(n, n, 0);
auto memo = make_vec(n, n, 0);

int check(array<int, 3> v) {

    int Y = v[0] - 1;
    int X = v[1] - 1;
    int C = v[2];

    color = base;
    int FirstC = color[Y][X];
    if (FirstC == C) return 0;

    queue<pair<int, int>> q;
    q.push(make_pair(Y, X));
    color[Y][X] = C;

    int point = 0;
    vector<int> vy = { 1, 0, -1, 0 };
    vector<int> vx = { 0, 1, 0, -1 };
    while (!q.empty()) {
        auto now = q.front(); q.pop();
        int nowY = now.first;
        int nowX = now.second;

        for (int k = 0; k < 4; k++) {
            int nextY = nowY + vy[k];
            int nextX = nowX + vx[k];
            if (nextY < 0 || nextY >= n) continue;
            if (nextX < 0 || nextX >= n) continue;
            if (color[nextY][nextX] == FirstC) {
                color[nextY][nextX] = C;
                q.push(make_pair(nextY, nextX));
            }
            if (color[nextY][nextX] == C) {
                point++;
            }
        }
    }

    //int point = 0;
    //for (int i = 1; i <= k; i++) {
    //    int cnt = 0;
    //    for (int y = 0; y < n; y++) {
    //        for (int x = 0; x < n; x++) {
    //            if (color[y][x] == i) cnt++;
    //        }
    //    }
    //    point = max(point, cnt);
    //}
    //point *= 100;

    cerr << "point: " << point << "\n";
    return point;
}

struct init {
    init() {
        cin.tie(nullptr); ios::sync_with_stdio(false);
        cout << fixed << setprecision(10);
    }
} init_;

template<class T>
inline bool chmax(T& a, const T b) { return a < b && (a = b, true); }

int main() {

    cin >> id >> n >> k;

    vector<string> S(n);
    for (int i = 0; i < n; i++) cin >> S[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            base[i][j] = S[i][j] - '0';
        }
    }

    vector<array<int, 3>> xyc;
    while (true) {

        int now = 0;
        for (int c = 1; c <= 9; c++) {
            if (chmax(now, check(array<int, 3>{n / 2, n / 2, c}))) {
                memo = color;
            }
        }

        base = memo;
        xyc.emplace_back(array<int, 3>{n / 2, n / 2, base[n / 2 - 1][n / 2 - 1]});

        int point = 0;
        for (int i = 1; i <= k; i++) {
            int cnt = 0;
            for (int y = 0; y < n; y++) {
                for (int x = 0; x < n; x++) {
                    if (base[y][x] == i) cnt++;
                }
            }
            point = max(point, cnt);
        }
        if (point == n * n) break;
    }

    cout << xyc.size() << "\n";
    for (const auto& [y, x, c] : xyc) cout << y << " " << x << " " << c << "\n";

    return 0;
}

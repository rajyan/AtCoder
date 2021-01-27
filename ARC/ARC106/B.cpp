
#ifdef _DEBUG
#include "../../../library/src/debug_template.hpp"
#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
#else
#define DMP(...) ((void)0)
#endif

#include <cassert>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <queue>
#include <numeric>
#include <algorithm>
#include <bitset>
#include <functional>

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007, INF = 1010101010;
constexpr lint LINF = 1LL << 60;

struct init {
    init() {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(10);
    }
} init_;

class UnionFind {
private:
    vector<int> data;
public:
    explicit UnionFind(int size) : data(size, -1) {}
    [[nodiscard]] int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }
    [[nodiscard]] bool is_same(int x, int y) { return root(x) == root(y); }
    [[nodiscard]] int size(int x) { return -data[root(x)]; }

    bool unify(int x, int y) {
        x = root(x);
        y = root(y);
        if (x != y) {
            if (data[y] < data[x]) swap(x, y);
            data[x] += data[y];
            data[y] = x;
            return true;
        }
        return false;
    }
};

int main() {

    int N, M;
    cin >> N >> M;

    vector<lint> a(N), b(N);
    for (int i = 0; i < N; i++) cin >> a[i];
    for (int i = 0; i < N; i++) cin >> b[i];

    UnionFind uf(N);
    vector<vector<int>> edges(N);
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        uf.unify(u, v);
    }

    vector<lint> sum(N);
    for (int i = 0; i < N; i++) {
        sum[uf.root(i)] += a[i] - b[i];
    }

    if (all_of(sum.begin(), sum.end(), [](lint s) { return s == 0; })) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}

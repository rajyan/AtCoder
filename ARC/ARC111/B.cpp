
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
    vector<bool> not_tree;
public:
    UnionFind(int size) : data(size, -1), not_tree(size) {}
    int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }
    bool is_same(int x, int y) { return root(x) == root(y); }
    bool is_tree(int x) { return !not_tree[root(x)]; }
    int size(int x) { return -data[root(x)]; }

    bool unify(int x, int y) {
        x = root(x);
        y = root(y);
        if (x != y) {
            if (data[y] < data[x]) swap(x, y);
            data[x] += data[y];
            data[y] = x;
            not_tree[x] = not_tree[x] | not_tree[y];
            return true;
        }
        else not_tree[x] = true;

        return false;
    }
};

int main() {

    int N;
    cin >> N;

    constexpr int C = 400000;
    UnionFind uf(C);
    for (int i = 0; i < N; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        uf.unify(u, v);
    }

    int ans = 0;
    for (int i = 0; i < C; i++) {
        if (uf.root(i) != i) continue;
        ans += uf.size(i) - uf.is_tree(i);
    }

    cout << ans << '\n';

    return 0;
}

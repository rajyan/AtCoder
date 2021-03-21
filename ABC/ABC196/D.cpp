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
#include <variant>

using namespace std;
using lint = long long;
constexpr int INF = 1010101010;
constexpr lint LINF = 1LL << 60;

struct init {
    init() {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(10);
    }
} init_;

class UnionFind {
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

private:
    vector<int> data;
};

int main() {

    int H, W, A, B;
    cin >> H >> W >> A >> B;

    int ans = 0;
    int cnt = H * (W - 1) + W * (H - 1);
    vector<int> bit(cnt);
    fill(bit.begin() + cnt - A, bit.end(), 1);

    do {
        UnionFind uf(H * W);
        int k = 0;
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                int idx = i * W + j;
                if (j != W - 1 && bit[k++]) {
                    uf.unify(idx, idx + 1);
                }
                if (i != H - 1 && bit[k++]) {
                    uf.unify(idx, idx + W);
                }
            }
        }

        int a = 0, b = 0;
        for (int i = 0; i < H * W; i++) {
            int sz = uf.size(i);
            if (sz == 1) b++;
            else if (sz == 2) a++;
            else break;
        }

        if (a == 2 * A && b == B) ans++;

    } while (next_permutation(bit.begin(), bit.end()));

    cout << ans << '\n';

    return 0;
}

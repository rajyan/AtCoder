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
#include <random>
#include <chrono>

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

struct Random {
    unsigned int seed;
    mt19937 mt;
    explicit Random(unsigned int s = chrono::steady_clock::now().time_since_epoch().count()) : seed(s), mt(seed) {}

    lint operator()(const lint &rand_min, const lint &rand_max) {
        uniform_int_distribution<lint> dist(rand_min, rand_max);
        return dist(mt);
    }
    lint operator()(const lint &rand_max) { return (*this)(0LL, rand_max); }

    [[nodiscard]] vector<lint> uniq_vec(const int &sz, const lint &rand_min, lint rand_max) {

        vector<lint> res(sz);
        unordered_map<lint, lint> memo;
        for (int i = 0; i < sz; i++, rand_max--) {

            lint rand_val = (*this)(rand_min, rand_max);

            // If rand_max hasn't been replaced yet, fill it with rand_max
            if (memo.find(rand_max) == memo.end()) memo[rand_max] = rand_max;

            auto val_itr = memo.find(rand_val);
            if (val_itr == memo.end()) { // replace rand_val with rand_max
                memo[rand_val] = memo[rand_max];
            }
            else { // If rand_val has already been replaced
                rand_val = val_itr->second;
                val_itr->second = memo[rand_max];
            }

            res[i] = rand_val;
        }
        return res;
    }
    template<class Ite>
    void shuf(Ite first, Ite last) { shuffle(first, last, mt); }

    string random_string(const int &max_len, const string list = "abcdefghijklmnopqrstuvwxyz") {
        assert(!list.empty());
        int size = (int)(*this)(1, max_len);
        string res(size, 0);
        generate(res.begin(), res.end(), [this, &list]() { return list[(*this)((int)list.size() - 1)]; });
        return res;
    }

};

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

class Timer {
public:
    Timer() { reset(); }

    void reset() {
        start = chrono::high_resolution_clock::now();
    }

    [[nodiscard]] chrono::microseconds::rep elapsed() const {
        auto end = chrono::high_resolution_clock::now();
        return chrono::duration_cast<chrono::microseconds>(end - start).count();
    }

private:
    chrono::high_resolution_clock::time_point start;
};


int main() {

    int N, M;
    cin >> N >> M;

    set<int> A;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        A.emplace(a);
    }

    Random ran;
    UnionFind uf(N);
    vector<pair<int, int>> ans;
    Timer t;
    while (t.elapsed() <= 1800 * 1000){
        int a = ran(N - 1);
        int b = ran(N - 1);
        if (!uf.is_same(a, b) && (A.find(a ^ b) == A.end())) {
            uf.unify(a, b);
            ans.emplace_back(a, b);
        }
    }
    
    if (ans.size() == N - 1) {
        for (const auto &[a, b] : ans) {
            cout << a << ' ' << b << '\n';
        }
    }
    else {
        cout << -1 << '\n';
    }	

    return 0;
}

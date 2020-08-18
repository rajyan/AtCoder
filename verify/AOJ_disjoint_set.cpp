
#define PROBLEM 'http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A'

#include <iostream>
#include <vector>

#include "../../library/library/UnionFind.cpp"

using namespace std;
using lint = long long;

int main() {

	int n, q;
	cin >> n >> q;

	UnionFind uf(n);
	for (int i = 0; i < q; i++) {
		int c, x, y;
		cin >> c >> x >> y;

		if (c) {
			cout << uf.is_same(x, y) << "\n";
		}
		else {
			uf.unify(x, y);
		}
	}

	return 0;
}

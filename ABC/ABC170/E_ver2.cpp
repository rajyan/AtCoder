#include <cassert>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <queue>
#include <numeric>
#include <algorithm>

using namespace std;
using lint = long long;
constexpr int MOD = 1000000007, INF = 1010101010;
constexpr lint LINF = 1LL << 60;

#ifdef _DEBUG
#include "../../../library/src/debug_template.hpp"
#define DMP(...) dump(#__VA_ARGS__, __VA_ARGS__)
#else 
#define DMP(...) ((void)0)
#endif

struct init {
	init() {
		cin.tie(nullptr); ios::sync_with_stdio(false);
		cout << fixed << setprecision(10);
	}
} init_;

int main() {

	int N, Q;
	cin >> N >> Q;

	const int kg_num = 200000;

	vector<priority_queue<int>> kg(kg_num + 1);
	// �c�t�����Ƃ̉���  �c�t��id, (���[�g, ����id) *rbegin���ő�
	unordered_map<int, set<pair<int, int>>> mp;
	// �c�t�����Ƃ̍ő�̃��[�g (max���[�g�A����id) *begin��ans
	set<pair<int, int>> maxst;
	// ����id�ɑ΂��鏊��
	vector<int> v(N);
	// ����id�ɑ΂��郌�[�g
	vector<int> rate(N);

	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		mp[b].emplace(a, i);
		rate[i] = a;
		v[i] = b;
	}

	for (const auto& [id, st] : mp) maxst.emplace(*st.rbegin());

	for (int i = 0; i < Q; i++) {
		int c, d;
		cin >> c >> d;
		c--;

		// ���݂̏����ƈړ���̍ő��maxst����폜���Ă���
		maxst.erase(*mp[v[c]].rbegin());
		if (!mp[d].empty()) maxst.erase(*mp[d].rbegin());

		// �������ړ�������
		auto p = make_pair(rate[c], c);
		mp[v[c]].erase(p);
		mp[d].emplace(p);

		// �폜�����Ƃ���̍ő�ŏ������Ȃ���
		if (!mp[v[c]].empty()) maxst.emplace(*mp[v[c]].rbegin());
		maxst.emplace(*mp[d].rbegin());

		// ���������ڂ�
		v[c] = d;

		cout << maxst.begin()->first << "\n";

	}

	return 0;
}


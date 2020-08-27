#include <random>
#include <chrono>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>

using namespace std;
using lint = long long;

struct RandNum {

	mt19937 mt;
	RandNum() : mt(chrono::steady_clock::now().time_since_epoch().count()) {}

	lint operator() (const lint& rand_min, const lint& rand_max) {
		uniform_int_distribution<lint> dist(rand_min, rand_max);
		return dist(mt);
	}
	lint operator() (lint rand_max) { return (*this)(0LL, rand_max); }

	vector<lint> uniq_vec(const int& sz, const lint& rand_min, lint rand_max) {

		vector<lint> res(sz);
		unordered_map<lint, lint> memo;
		for (int i = 0; i < sz; i++, rand_max--) {

			lint rand_val = (*this)(rand_min, rand_max);

			// If rand_max hasn't been replaced yet, fill it with rand_max
			if (memo.find(rand_max) == memo.end()) memo[rand_max] = rand_max;

			auto val_itr = memo.find(rand_val);
			if (val_itr == memo.end()) { // If rand_val has already been replaced
				memo[rand_val] = memo[rand_max];
			}
			else {
				rand_val = val_itr->second;
				val_itr->second = memo[rand_max];
			}

			res[i] = rand_val;
		}
		return res;
	}

	template<class Ite>
	void shuf(Ite first, Ite last) { shuffle(first, last, mt); }

};


int main() {
	RandNum ran;
	auto d = ran.uniq_vec(100, 0, 99);
	sort(d.begin(), d.end());
	for (const auto& e : d) cout << e << " ";
}

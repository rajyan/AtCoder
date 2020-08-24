//
//#define PROBLEM "https://judge.yosupo.jp/problem/associative_array"
//
//#include <iostream>
//#include <string>
//#include <unordered_map>
//
//using namespace std;
//using lint = long long;
//
//inline uint64_t fnv1a_64(string data) {
//
//	uint64_t hash = 0xcbf29ce484222325;
//	constexpr uint64_t prime = 0x100000001b3;
//
//	for (int i = 0; i < (int)data.size(); ++i) {
//		hash = hash ^ data[i];
//		hash *= prime;
//	}
//
//	return hash;
//}
//
//struct test {
//	lint i;
//	bool operator==(const test& r) const { return i == r.i; }
//	test(lint i) : i(i) {}
//};
//
//namespace std {
//	template<>
//	struct hash<test> {
//		uint64_t operator() (const test& t) const {
//			return fnv1a_64(to_string(t.i));
//		}
//	};
//}
//
//int main() {
//
//	int q;
//	cin >> q;
//
//	unordered_map<test, lint> mp;
//	for (int i = 0; i < q; i++) {
//		int t;
//		cin >> t;
//		if (t) {
//			lint k;
//			cin >> k;
//			cout << mp[test(k)] << "\n";
//		}
//		else {
//			lint k, v;
//			cin >> k >> v;
//			mp[test(k)] = v;
//		}
//	}
//
//	return 0;
//}

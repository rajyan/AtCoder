//#include <algorithm>
//#include <iostream>
//#include <iomanip>
//#include <random>
//#include <chrono>
//#include <queue>
//
//struct RandNum {
//
//	std::mt19937 mt;
//	RandNum() : mt(std::chrono::steady_clock::now().time_since_epoch().count()) {}
//
//	int operator()(int a, int b) {
//		std::uniform_int_distribution<int> dist(a, b);
//		return dist(mt);
//	}
//	int operator() (int b) { return (*this)(0LL, b); }
//
//	template<class Ite>
//	void shuf(Ite first, Ite last) { shuffle(first, last, mt); }
//
//};
//
//struct test {
//	int ma, mi;
//	test(int a = 0, int i = 0) :ma(a), mi(i) {}
//
//	bool operator< (const test& rhs) { 
//		std::cout << "not const" << "\n";
//		// mi をつかってoperator< が何回呼ばれたかを数えるとする
//		mi++;
//		return ma < rhs.ma; 
//	}
//
//	bool operator< (const test& rhs) const { 
//		std::cout << "const" << "\n";
//		// mi++ はコンパイルエラー
//		return ma < rhs.ma; 
//	}
//};
//
//int main() {
//
//	{
//		// non const < non const
//		test t1(1), t2(2);
//		std::cout << std::boolalpha << (t1 < t2) << "\n";
//		std::cout << t1.ma << ", " << t1.mi << "\n";
//		std::cout << t2.ma << ", " << t2.mi << "\n";
//	}
//
//	{
//		// const < const
//		const test ct1(1), ct2(2);
//		std::cout << std::boolalpha << (ct1 < ct2) << "\n";
//		std::cout << ct1.ma << ", " << ct1.mi << "\n";
//		std::cout << ct2.ma << ", " << ct2.mi << "\n";
//	}
//
//	{
//		// const < non const
//		const test ct1(1);
//		test t2(2);
//		std::cout << std::boolalpha << (ct1 < t2) << "\n";
//		std::cout << ct1.ma << ", " << ct1.mi << "\n";
//		std::cout << t2.ma << ", " << t2.mi << "\n";
//	}
//
//	{
//		// non const < const
//		test t1(1);
//		const test ct2(2);
//		std::cout << std::boolalpha << (t1 < ct2) << "\n";
//		std::cout << t1.ma << ", " << t1.mi << "\n";
//		std::cout << ct2.ma << ", " << ct2.mi << "\n";
//	}
//
//	RandNum ran;
//	const int len = 5;
//	{
//		// vector test
//		std::cout << "\n";
//		std::cout << "---vector test---" << "\n\n";
//		std::vector<test> tvec(len);
//		for (int i = 0; i < len; i++) {
//			tvec[i] = ran(1, 100);
//		}
//		std::sort(tvec.begin(), tvec.end());
//		for (const auto& [a, i] : tvec) std::cout << a << ", " << i << "\n";
//	}
//
//	{
//		// priority_queue test
//		std::cout << "\n";
//		std::cout << "---priority_queue test---" << "\n\n";
//		std::priority_queue<test> pq;
//		for (int i = 0; i < len; i++) {
//			pq.emplace(ran(1, 100));
//		}
//
//		while (!pq.empty()) {
//			const auto& [a, i] = pq.top();
//			std::cout << a << ", " << i << "\n";
//			pq.pop();
//		}
//	}
//
//	return 0;
//}

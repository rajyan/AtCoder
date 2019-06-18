#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include "curlhelper.h"

using namespace std;

#ifdef _DEBUG
#define DMP(x) cerr << #x << ": " << x << "\n"
#else
#define DMP(x) ((void)0)
#endif

class solve : HTTPDownloader {

	vector<long long> memo;
	long long output;

	void ask(int n) {
		//string url = "https://codecheck-challenge-api.herokuapp.com/api/recursive/ask";
		//url += "?n=";
		//url += to_string(n);
		//url += "&seed=";l
		//url += seed;
		string url = "https://qiita.com/";
		cout << download(url);
		n = 0;
		calc(n);
	}

public:
	string seed;

	solve() : memo(300), output(0) { memo[0] = 1; memo[2] = 2; }

	void calc(int n) {

		if (n == 0 || n == 2) {

			output += memo[n];
			return;
		}

		if (n % 2 == 0) {
			for (int i = 0; i < 4; i++) {
				if (memo[n - i] != 0) {

					output += memo[n - i];
					return;
				}
				else calc(n - i);
			}
		}
		else {
			ask(n);
		}
	}

	void print() { cout << output; }
};


int main(int argc, char *argv[]) {

		if (argc < 3) {

			cout << "Error";
			return 1;
		}
		else {

			solve solver;

			solver.seed = argv[1];

			stringstream input;

			int n;
			input << argv[2];
			input >> n;			

			//if (!input.good()) {
			//	cout << "Error";
			//	return 0;
			//}

			solver.calc(n);

			solver.print();
			return 0;
		}

}

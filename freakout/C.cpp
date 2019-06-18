//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main(int argc, char *argv[]) {
//
//	//2分探索の範囲rangeと送信するm、応答の受け取りのresの初期化
//	int range = (int)(1e9 / 2 + 1);
//	int m = (int)(1e9 / 2 + 1);
//	string res;
//
//	//応答がEqualとなるまでループを続ける
//	while (res != "Equal") {
//
//		//送信部分
//		{
//			ofstream lock_q("lock_query.txt");
//			lock_q << "locked";
//
//			ofstream query("query.txt");
//			query << m;
//
//			remove("lock_query.txt");
//		}
//
//		//応答作成待ち
//		while (true) {
//			ifstream lock("lock_response.txt");
//			ifstream response("response.txt");
//			if (!lock.is_open() && response.is_open()) break;
//		};
//
//		//応答受け取り
//		{
//			ifstream response("response.txt");
//			response >> res;
//			remove("response.txt");
//		}
//
//		//mの更新（2分探索）
//		if (res == "High") {
//			range = range / 2 + range % 2;
//			m -= range;
//		}
//		else {
//			range = range / 2 + range % 2;
//			m += range;
//		}
//	}
//
//	return 0;
//}
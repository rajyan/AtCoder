//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main(int argc, char *argv[]) {
//
//	//2���T���͈̔�range�Ƒ��M����m�A�����̎󂯎���res�̏�����
//	int range = (int)(1e9 / 2 + 1);
//	int m = (int)(1e9 / 2 + 1);
//	string res;
//
//	//������Equal�ƂȂ�܂Ń��[�v�𑱂���
//	while (res != "Equal") {
//
//		//���M����
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
//		//�����쐬�҂�
//		while (true) {
//			ifstream lock("lock_response.txt");
//			ifstream response("response.txt");
//			if (!lock.is_open() && response.is_open()) break;
//		};
//
//		//�����󂯎��
//		{
//			ifstream response("response.txt");
//			response >> res;
//			remove("response.txt");
//		}
//
//		//m�̍X�V�i2���T���j
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
//#include <iostream>
//#include <sstream>
//#include <vector>
//
//#ifdef _DEBUG
//#define DMP(x) cerr << #x << ": " << x << "\n"
//#else
//#define DMP(x) ((void)0)
//#endif
//
//using namespace std;
//typedef long long lint;
//
//int main(int argc, char *argv[]) {
//
//	//���͎󂯎��ichar�z��Ȃ̂�stringstream��int�ɕϊ��j
//	stringstream instring(argv[1]);
//
//	lint input;
//	instring >> input;
//
//	//�t�B�{�i�b�`��������A���߂̂Q��������B���Ɍv�Z�������̓������Ă������Ƃō�����
//	vector<lint> fibb(1000);
//
//	fibb[0] = 1;
//	fibb[1] = 1;
//
//	for (int i = 2; fibb[i - 1] > 0; i++) {
//		//�t�B�{�i�b�`����̑J�ڎ�
//		fibb[i] = fibb[i - 1] + fibb[i - 2];
//		//���͂�����Ɠ����Ȃ�J�ڂ���߁A���݂�i���o��(0-indexed����1-indexed��)
//		if (fibb[i] == input) {
//			cout << i + 1;
//			return 0;
//		}
//	}
//	//�S�ĈقȂ�Ȃ�-1
//	cout << -1;
//	return 0;
//}
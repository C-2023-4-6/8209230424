#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << oct << testUnint << dec<<endl;//<<oct��תΪ�˽��ƺ����������decʹ֮��Ĵ���ת��ʮ����
	cout << "output in char type:" << static_cast<char>(testUnint) << endl;//��Ϊcharû�ж�Ӧ�ַ�����޷���ʾ
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//Ϊʲô���Ϊ-2?:��Ϊ�������
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint <<dec<< endl; //16�������
	cout << "output in int type:" << static_cast<int>(100) << endl; //��һ��ʵ��ת����int ����

	system("pause");
	return 0;
}

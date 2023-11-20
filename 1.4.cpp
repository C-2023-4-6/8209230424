#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << oct << testUnint << dec<<endl;//<<oct，转为八进制后可在最后加上dec使之后的代码转回十进制
	cout << "output in char type:" << static_cast<char>(testUnint) << endl;//因为char没有对应字符因此无法显示
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?:因为数据溢出
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint <<dec<< endl; //16进制输出
	cout << "output in int type:" << static_cast<int>(100) << endl; //将一个实数转换成int 不变

	system("pause");
	return 0;
}

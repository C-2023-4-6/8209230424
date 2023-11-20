#include<iostream>
using namespace std;
int main()
{
    cout << "bool length:" << sizeof(bool) << endl;//布尔型
    cout << "char length:" << sizeof(char) << endl;//字符型
	cout << "int length:" << sizeof(int) << endl;//整数型
    cout << "float length:" << sizeof(float) << endl;//实数型
    //cout << "void length:" << sizeof(void) << endl;//空值型 void需要搭配数字使用，因此无法计算长度
}

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a;
	cout << "请输入华氏温度:";
	cin >> a;
	cout << fixed << setprecision(2) << "摄氏温度为：" << (a - 32) * 5 / 9;//如果不加fixed，setprecision会变成控制数字的位数
	return 0;
}
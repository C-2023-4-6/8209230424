#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a;
	cout << "�����뻪���¶�:";
	cin >> a;
	cout << fixed << setprecision(2) << "�����¶�Ϊ��" << (a - 32) * 5 / 9;//�������fixed��setprecision���ɿ������ֵ�λ��
	return 0;
}
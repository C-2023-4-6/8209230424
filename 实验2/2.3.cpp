#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)//&&Ϊ��
	{
		cout << a + b + c << endl;
		if (a == b || b == c || a == c)//||Ϊ��
		{
			cout << "�ǵ���������";
		}
		else
			cout << "���ǵ���������";
	}
	else
		cout << "�޷�����������";
}
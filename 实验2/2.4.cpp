#include<iostream>
using namespace std;
int main()
{
	double x, y;
	while (1)//while��ѭ��һ����ʽ
	{
		char s;
		cin >> x >> s >> y;
		if (s == '+')
		{
			cout << x << "+" << y << "=" << x + y;
		}
		if (s == '-')
		{
			cout << x << "-" << y << "=" << x - y;
		}
		if (s == '*')
		{
			cout << x << "*" << y << "=" << x * y;
		}
		if (s == '/')
		{
			if (y == 0)
			{
				cout << "������������";
			}
			else
				cout << x << "/" << y << "=" << x / y;
		}
		if (s == '%')
		{
			cout << x << "%" << y << "=" << int(x) % int(y);//ȡ�໹��int��
		}
		if (s != '+' && s != '-' && s != '*' && s != '/' && s != '%')
		{
			cout << "�����㲻����";
		}
	}
}
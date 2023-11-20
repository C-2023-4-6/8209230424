#include<iostream>
using namespace std;
int main()
{
	double x, y;
	while (1)//while死循环一般形式
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
				cout << "此运算无意义";
			}
			else
				cout << x << "/" << y << "=" << x / y;
		}
		if (s == '%')
		{
			cout << x << "%" << y << "=" << int(x) % int(y);//取余还是int好
		}
		if (s != '+' && s != '-' && s != '*' && s != '/' && s != '%')
		{
			cout << "此运算不成立";
		}
	}
}
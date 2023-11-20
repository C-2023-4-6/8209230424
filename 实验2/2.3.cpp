#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)//&&为与
	{
		cout << a + b + c << endl;
		if (a == b || b == c || a == c)//||为或
		{
			cout << "是等腰三角形";
		}
		else
			cout << "不是等腰三角形";
	}
	else
		cout << "无法构成三角形";
}
#include<iostream>
#undef UNICODE
using namespace std;
int main()
{
	int  n = 0, m = 0, x, y;
	cin >> x >> y;
	for (int i = 1; i <= x && i <= y; i++)
	{
		if (x % i == 0 && y % i == 0)
		{
			n = i;

		}
	}
	for (int j = 1; j++;)
	{
		if (j % x == 0 && j % y == 0)
		{
			m = j;

			break;
		}
	}
	cout << "�������Ϊ��" << n << endl;
	cout << "��С������Ϊ��" << m << endl;
	return 0;
}
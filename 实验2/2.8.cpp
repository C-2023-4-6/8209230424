/*#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x, x1, a;
	cin >> a;
	x = a;
	x1 = (x + a / x) / 2;
	do
	{ 	
		x = x1;
		x1 = (x + a / x) / 2;

	} while (fabs(x1 - x) > 0.00001);//ʹ��cmath fabs���ﵽ����ֵ��Ч��
	cout << x;
	return 0;
}
*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x, x1, a;
	cin >> a;
	x = a;
	x1 = (x + a / x) / 2;
	if (a < 0)
	{
		cout << "����";
	}
	if (a == 0)
	{
		cout << "0��ƽ����Ϊ0";
	}
	if(a>0)
	{ 
	do
	{
		x = x1;
		x1 = (x + a / x) / 2;

	} while (fabs(x1 - x) > 0.00001);//ʹ��cmath fabs���ﵽ����ֵ��Ч��
	cout << x;
	}
	return 0;
}
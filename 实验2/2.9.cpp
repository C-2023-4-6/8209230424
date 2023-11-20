#include<iostream>
using namespace std;
int main()
{
	double  a,b,x;
	b = 0;
	for (int i =1; i <= 100; i++)
	{
		a = i;
		x = pow(2 , a);
		b = b + x;//b是每天买的苹果之和
		if (pow(2,a+1) > 100)
			break;
	}
	cout << (0.8 * b)/a;
}
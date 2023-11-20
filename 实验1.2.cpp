#include<iostream>
using namespace std;
int main()
{
	int a, b;
	const double pi = 3.14159;
	cout << "ÇëÊäÈëÔ²×¶µ×°ë¾¶£º" ;
	cin >> a;
	cout << "ÇëÊäÈëÔ²×¶¸ß£º";
	cin >> b;
	cout << (a * a * pi) * b * 1 / 3;
	return 0;
}
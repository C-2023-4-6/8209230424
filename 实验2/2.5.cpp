#include<iostream>
using namespace std;
int main()
{
	char c ;
	int english = 0, num = 0, space = 0, other = 0;
	while ((c = getchar() )!= '\n')//从键盘输入一个字符 ：getchar()	然后把字符的值赋给c ：c = getchar()		然后判断c是否等于‘\n’ ，'\n'代表换行。
	{
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		{
			english++;
		}
		else if (c >= '0' && c <= '9')
		{
			num++;
		}
		else if (c == ' ')
		{
			space++;
		}
	    else
		{
		    other++;
		}
	}
	cout << "english=" << english << "\nnum=" << num << "\nspace=" << space << "\nother=" << other;
	return 0;
}		
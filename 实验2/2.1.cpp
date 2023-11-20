#include<iostream>
using namespace std;
int main()
{
	char w  = '0';//定义一个字符并储存到变量w，然后初始化为0
	cin >> w;
	scanf_s("%c",&w);//%c是匹配单个字符，&后面接定义的变量
	if (w >= 'a' && w <= 'z')//w在a到z的话
	{//if的（）后加{}可以使else不会找不到if
		w = w + 'A' - 'a';//'A' - 'a'为小写转大写，'a'-'A'为大写转小写
		cout << w;
	}
	else
		cout << int(w)+1;//int转回ascll码
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	char c ;
	int english = 0, num = 0, space = 0, other = 0;
	while ((c = getchar() )!= '\n')//�Ӽ�������һ���ַ� ��getchar()	Ȼ����ַ���ֵ����c ��c = getchar()		Ȼ���ж�c�Ƿ���ڡ�\n�� ��'\n'�����С�
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
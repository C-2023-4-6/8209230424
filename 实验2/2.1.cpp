#include<iostream>
using namespace std;
int main()
{
	char w  = '0';//����һ���ַ������浽����w��Ȼ���ʼ��Ϊ0
	cin >> w;
	scanf_s("%c",&w);//%c��ƥ�䵥���ַ���&����Ӷ���ı���
	if (w >= 'a' && w <= 'z')//w��a��z�Ļ�
	{//if�ģ������{}����ʹelse�����Ҳ���if
		w = w + 'A' - 'a';//'A' - 'a'ΪСдת��д��'a'-'A'Ϊ��дתСд
		cout << w;
	}
	else
		cout << int(w)+1;//intת��ascll��
	return 0;
}
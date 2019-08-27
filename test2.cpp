#include <iostream>
using namespace std;
/*2������ָ���ĺ�����������ɺ�����
a����һ���ַ���ת��Ϊ���֣�����ֵ����У��ת���Ƿ�ɹ�
bool strtoi(const char *, int &);
b����һ������ͨ��ָ�����ư�λ����ֱ�Ӹ���ԭ����
void sysReverse(int &, int);*/

bool strtoi(const char *src, int &res)
{
	if (!src)//�жϷǿ�
	{
		return false;
	}
	while (*src <= ' ')//�������ɼ����ַ�
	{
		src++;
	}
	int flag = 1;
	if (*src == '-')
	{
		flag = -1;
		src++;
	}
	if (*src > '9' || *src < '0')
	{
		return false;
	}
	int sum = 0, tmp;
	int i;
	for (i = 0; src[i] <='9' && src[i]>='0'; i++)
	{
		tmp = src[i] - '0';
		sum = sum * 10 + tmp;
	}
	res = sum * flag;

	return true;
}
void sysReverse(int &num, int hex)
{
	int i;
	int tmp, sum = 0;
	for (i = num; i; i /= hex)
	{
		tmp = i % hex;
		sum = sum * hex + tmp;
	}
	num = sum;
}


int main()
{
	int res;
	int num = 25;
	sysReverse(num, 2);
	if (strtoi("\n\n\n\n\n\n\n\n      -127", res))
	{
		cout << res << endl;
	}
	else
	{
		cout << "fail\n";
	}

	return 0;
}
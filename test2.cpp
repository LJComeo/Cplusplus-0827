#include <iostream>
using namespace std;
/*2、按照指定的函数声明，完成函数：
a、将一个字符串转换为数字，返回值用来校验转换是否成功
bool strtoi(const char *, int &);
b、将一个数字通过指定进制按位逆序（直接覆盖原数）
void sysReverse(int &, int);*/

bool strtoi(const char *src, int &res)
{
	if (!src)//判断非空
	{
		return false;
	}
	while (*src <= ' ')//跳过不可见的字符
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
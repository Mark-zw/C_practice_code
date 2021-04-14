#define _CRT_SECURE_NO_WARNINGS 1 
//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。
#include<stdio.h>
#include<math.h>
int isPrime(int i)
{
	int j = 0;
	for (j = 2; j <= sqrt(i); j++)//不能被整除到开平方i即可
	{
		if ((i % j) == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i = 0;
	int ret = 0;
	for (i = 101; i <= 200; i+=2)//偶数不可能为素数 
	{
		ret = isPrime(i);
		if (ret == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
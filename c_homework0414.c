#define _CRT_SECURE_NO_WARNINGS 1 
//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������
#include<stdio.h>
#include<math.h>
int isPrime(int i)
{
	int j = 0;
	for (j = 2; j <= sqrt(i); j++)//���ܱ���������ƽ��i����
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
	for (i = 101; i <= 200; i+=2)//ż��������Ϊ���� 
	{
		ret = isPrime(i);
		if (ret == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
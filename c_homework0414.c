#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//3.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
void print_mul_table(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%2d * %2d = %2d ", i, j, i * j);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print_mul_table(n);
	return 0;
}

////2.ʵ��һ��������������������������
//void swap(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("before swap:a = %d,b = %d\n", a, b);
//	swap(&a, &b);
//	printf(" after swap:a = %d,b = %d\n", a, b);
//	return 0;
//}

////1.ʵ�ֺ����ж�year�ǲ������ꡣ
//int Leap_year(int y)
//{
//	if (y % 4 == 0 && y % 100 != 0 || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//		return -1;
//}
//int main()
//{
//	int year = 0;
//	int ret = 0;
//	scanf("%d", &year);
//	ret = Leap_year(year);
//	if (-1 == ret)
//	{
//		printf("%d��������\n", year);
//	}
//	else
//		printf("%d������\n", year);
//	return 0;
//}

//int is_leap_year(int x)
//{
//	if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//
//	return 0;
//}


//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������
//#include<stdio.h>
//#include<math.h>
//int isPrime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)//���ܱ���������ƽ��i����
//	{
//		if ((i % j) == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 101; i <= 200; i+=2)//ż��������Ϊ���� 
//	{
//		ret = isPrime(i);
//		if (ret == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
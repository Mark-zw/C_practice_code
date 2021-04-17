#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//3.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
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

////2.实现一个函数来交换两个整数的内容
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

////1.实现函数判断year是不是闰年。
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
//		printf("%d不是闰年\n", year);
//	}
//	else
//		printf("%d是闰年\n", year);
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


//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。
//#include<stdio.h>
//#include<math.h>
//int isPrime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)//不能被整除到开平方i即可
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
//	for (i = 101; i <= 200; i+=2)//偶数不可能为素数 
//	{
//		ret = isPrime(i);
//		if (ret == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
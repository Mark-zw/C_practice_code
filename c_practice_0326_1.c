#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//（3）输入10个数，输出其中最大的一个数。
int main()
{
	int arr[] = { 1,11,33,55,13,44,56,63,67,92 };//创建数组存放10数字
	int Max = arr[0];//假设最大值为Max，将a[0]当做初始值赋给Max
	int sz = sizeof(arr) / sizeof(arr[0]);//求数组arr元素的个数，方面后面计算下标
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (Max < arr[i])
		{
			Max = arr[i];//总是将较大值赋给Max
		}
	}
	printf("Max = %d", Max);
	return 0;
}

//（1）输出1900-2000年中是闰年的年份，符合下面两个条件之一的年份是闰年
//int main()
//{
//	int year = 0;
//	for (year = 1900; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//			printf("%d ", year);
//	}
//	return 0;
//}

//（8）求方程式ax ^ 2 + bx + c = 0的根。分别考虑：
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//	double d = 0.0;
//	double x1 = 0.0;
//	double x2 = 0.0;
//	printf("请输入求解方程式的系数a,b,c：>>\n");
//	scanf("%lf%lf%lf", &a, & b, &c);
//	d = pow(b, 2) - 4 * a * c;
//	if (d >= 0)
//	{
//		if (d == 0)
//		{
//			x1 = -b / (2 * a);
//			x2 = -b / (2 * a);
//		}
//		else
//		{
//			x1 = (-b + sqrt(d)) / (2 * a);
//			x2 = (-b - sqrt(d)) / (2 * a);
//		}
//		printf("x1= %lf,x2= %lf", x1, x2);
//	}
//	else
//		printf("方程无实数解！\n");
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = pow(a,2);
//	printf("b = %d\n", b);
//	return 0;
//}

////（7）求两个数m和n的最大公约数。
//int G_com_div(int m, int n)
//{
//	int i = m % n;
//	while (i)
//	{
//			m = n;
//			n = i;
//			i = m % n;
//	}
//	return n;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int ret = 0;
//	printf("请输入两个正整数:>>\n");
//	scanf("%d%d", &m, &n);
//	//用辗转相除法
//	ret = G_com_div(m, n);//G_com_div得到输入两个数的最大公约数并将其返回
//	printf("最大公约数为：%d\n",ret);
//	return 0;
//}

//（6）将100~200之间的素数输出。
//int is_Prime(int i)
//{
//	int j = 0;
//	for (j = 2; j < sqrt(i); j++)
//	{
//		if (i % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_Prime(i) == 1)//is_Prime函数判断输入数是否为素数,是 返回1 不是返回0
//			printf("%d ",i);
//	}
//	return 0;
//}

//（5）判断一个数能否同时被3和5整除。
//int Judge(int a)
//{
//	if ((a % 3 == 0) && (a % 5 == 0))
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	printf("请输入一个正整数:>>\n");
//	scanf("%d", &i);
//	ret = Judge(i);//Judge函数判断输入数是否能同时被3和5整除，能返回1，不能返回-1；
//	if (ret == 1)
//		printf("%d可以同时被3和5整除\n",i);
//	else
//		printf("%d不可以同时被3和5整除\n",i);
//	return 0;
//}

//（4）求1+2+3+......+100。
//int GetSum(int x)
//{
//	int j = 0;
//	int y = 0;
//	for (j = 1; j <= x; j++)
//	{
//		y += j;
//	}
//	return y;
//}
//int main()
//{
//	int i = 100;
//	int sum = 0;
//	sum = GetSum(i);//GetSum函数求前i项之和并返回
//	printf("sum = %d\n", sum);
//	return 0;
//}

//（3）有3个数a,b,c,要求按大小顺序把它们输出。
//int GetMax(int a, int b, int c)
//{
//	if (a < b)
//	{
//		a = b;
//	}
//	if (a < c)
//	{
//		a = c;
//	}
//	return a;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int MAX = 0;
//	printf("please input three intgers:>>\n");
//	scanf("%d%d%d", &a, &b, &c);
//	MAX=GetMax(a, b, c);//GetMax函数自动求三个数中的最大值并返回
//	printf("MAX = %d", MAX);
//	return 0;
//}
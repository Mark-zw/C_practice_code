#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 10) == 9)
//			count++;
//		if ((i / 10) == 9)
//			count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//			printf("%d ", year);
//	}
//	return 0;
//}
//#include<stdio.h>
////方法一：试除法       效率较低
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i < 200; i++)
//	{
//		//试除法 从2到i-1试除
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//#include<stdio.h>
//方法一
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;//计数
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 3) == 0)
//			printf("%d  ", i);
//		count++;
//	}
//	printf("1-100之间3的倍数的个数为 %d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	int fac = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		//fac = fac * i;
//		//sum = sum + fac;
//		fac *= i;
//		sum += fac;
//	}
//	printf("sum = %d", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int factorial=1;
//	int sum = 0;
//	scanf("%d", &n);
//	for(i=1;i<=n;i++)
//	{
//		int j = 1;
//		factorial = 1;
//		for (j = 1; j <= i; j++)
//		{
//			factorial = factorial * j;
//		}
//		sum += factorial;
//	}
//	//printf("factorial = %d\n", factorial);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; )
//	{
//		if (i == 10)
//			//break;
//			continue;
//		printf("%d ", i);
//		i++;
//
//	}
//	return 0;
//}

//int main()
//{
//	printf("%s\n", "\"");
//	//printf("%c\n", '\'');
//	return 0;
//}

//int a = 100;
//int main()
//{
//	printf("%d\n", a);
//}

//int main()
//{
//	double x, y, dis1, dis2, dis3, dis4, high;
//	double x1 = 2, y1 = 2, x2 = -2, y2 = 2, x3 = -2, y3 = -2, x4 = 2, y4 = -2;
//	scanf("%lf%lf", &x, &y);
//	dis1 = (x - x1) * (x - x1) + (y - y1) * (y - y1);
//	dis2 = (x - x2) * (x - x2) + (y - y2) * (y - y2);
//	dis3 = (x - x3) * (x - x3) + (y - y3) * (y - y3);
//	dis4 = (x - x4) * (x - x4) + (y - y4) * (y - y4);
//	if (dis1 < 1 || dis2 < 1 || dis3 < 1 || dis4 < 1)
//	{
//		high = 10;
//	}
//	else
//	{
//		high = 0;
//	}
//	printf("坐标(%lf,%lf)的高度为：%lf", x, y, high);
//	return 0;
//}

//int main()
//{
//	int a, b, c, d, temp = 0;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	if (a > b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a > c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (a > d)
//	{
//		temp = a;
//		a = d;
//		d = temp;
//	}
//	if (b > c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	if (b > d)
//	{
//		temp = b;
//		b = d;
//		d = temp;
//	}
//	if (c > d)
//	{
//		temp = c;
//		c = d;
//		d = temp;
//	}
//	printf("%d %d %d %d\n", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	double i, bonus;
//	scanf("%lf", &i);
//	switch ((int)i / 100000)
//	{
//	case 0:
//		bonus = i * 0.1;
//		break;
//	case 1:
//		bonus = 100000 * 0.1 + (i - 100000) * 0.075;
//		break;
//	case 2:
//	case 3:
//		bonus = 100000 * 0.1 + (200000 - 100000) * 0.075 + (i - 200000) * 0.05;
//		break;
//	case 4:
//	case 5:
//		bonus = 100000 * 0.1 + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (i - 400000) * 0.03;
//		break;
//	case 6:
//	case 7:
//	case 8:
//	case 9:
//		bonus = 100000 * 0.1 + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (600000 - 400000) * 0.03 + (i - 600000) * 0.015;
//		break;
//	default:
//		bonus = 100000 * 0.1 + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (600000 - 400000) * 0.03 + (1000000 - 600000) * 0.015 + (i - 1000000) * 0.01;
//		break;
//	}
//	printf("bonus = %lf\n", bonus);
//	return 0;
//}

//int main()
//{
//	double i, bonus;
//	scanf("%lf", &i);
//	if (i <= 100000)
//	{
//		bonus = i * 0.1;
//	}
//	else if (i > 100000 && i <= 200000)
//	{
//		bonus = 100000 * 0.1 + (i - 100000) * 0.075;
//	}
//	else if (i > 200000 && i <= 400000)
//	{
//		bonus = 100000 * 0.1 + (200000 - 100000) * 0.075 + (i - 200000) * 0.05;
//	}
//	else if (i > 400000 && i <= 600000)
//	{
//		bonus = 100000 * 0.1 + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (i - 400000) * 0.03;
//	}
//	else if (i > 600000 && i <= 1000000)
//	{
//		bonus = 100000 * 0.1 + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (600000 - 400000) * 0.03 + (i - 600000) * 0.015;
//	}
//	else
//	{
//		bonus = 100000 * 0.1 + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (600000 - 400000) * 0.03 + (1000000 - 600000) * 0.015 + (i - 1000000) * 0.01;
//	}
//	printf("bonus = %lf\n", bonus);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	do
//	{
//		num = num / 10;
//		count++;
//	} 	while (num);
//	printf("%d \n", count);
//	return 0;
//}

//int main()
//{
//	double score = 0;
//	char grade = 0;
//	printf("Please input score:");
//	scanf("%lf", &score);
//	if (score < 0 || score>100)
//	{
//		printf("worng score(0-100):try again\n");
//		scanf("%lf", &score);
//	}
//	switch ((int)score / 10)
//	{
//	case 9:
//		grade = 'A';
//		break;
//	case 8:
//		grade = 'B';
//		break;
//	case 7:
//		grade = 'C';
//		break;
//
//	case 6:
//		grade = 'D';
//		break;
//	case 5:
//	case 4:
//	case 3:
//	case 2:
//	case 1:
//	case 0:
//		grade = 'E';
//		break;
//	}
//	printf("%.1lf is grade %c \n", score, grade);
//	return 0;
//}

//int main()
//{
//	double x, y;
//	scanf("%lf", &x);
//	if (x < 1)
//	{
//		y = x;
//	}
//	else if (x >= 1 && x < 10)
//	{
//		y = 2 * x - 1;
//	}
//	else
//	{
//		y = 3 * x - 11;
//	}
//	printf("y = %.2lf\n", y);
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int num = 0;
//	int sq = 0;
//	double ret = 0;
//	scanf("%d", &num);
//	if (num >= 1000)
//	{
//		printf("input number error,please input a number between 0 and 999\n");
//		scanf("%d", &num);
//	}
//	sq = sqrt(num);
//	printf("%d", sq);
//	return 0;
//}

////输出三个数中最大值
//int main()
//{
//	int a, b, c,temp = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	printf("Max:%d\n", a);
//	return 0;
//}
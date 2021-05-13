#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int main()
{
	printf("%3d\n", 6);
	printf("%-3d\n", 6);
	printf("%5d\n", 6);

	return 0;
}

//int main()
//{
//	putchar('a');
//	puts("absc");
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	double a, b, c;
//	double p, q;
//	double x1, x2;
//	double dis;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	dis = b * b - 4 * a * c;
//	if (dis >= 0)
//	{
//		p = (-b) / (2 * a);
//		q = sqrt(dis) / 2 * a;
//		x1 = p + q;
//		x2 = p - q;
//		printf("x1 = %lf\n", x1);
//		printf("x2 = %lf\n", x2);
//	}
//	else
//	{
//		printf("No real root!\n");
//	}
//	return 0;
//}

//#include<math.h>
//海伦公式
//int main()
//{
//	double a, b, c;
//	double l, s;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	l = (a + b + c) / 2;
//	s = sqrt(l * (l - a) * (l - b) * (l - c));
//	printf("area is %.2lf\n", s);
//	return 0;
//}

//int main()
//{
//	//unsigned int i = -1;
//	//printf("%u\n", i);
//	float f = (float)3.14158;
//	printf("%f", f);
//	return 0;
//}

//int main()
//{
//	double F = 0;
//	double C = 0;
//	scanf("%lf", &F);
//	C = 5 * (F - 32) / 9;
//	printf("%.1lf °C\n", C);
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 3 == 0 && n % 5 == 0)
//	{
//		printf("%d 可以同时被3和5整除\n",n);
//	}
//	else
//	{
//		printf("%d 不可以同时被3和5整除\n",n);
//
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += i;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			printf("%d is not prime.\n", n);
//			break;
//		}
//	}
//	if (i == n)
//	{
//		printf("%d is prime.\n",n);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + 1.0*flag / i;
//		flag = -flag;
//	}
//	printf("sum = %lf\n", sum);
//}

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + 1.0 / i;
//	}
//	printf("sum = %lf\n", sum);
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 2000; i <= 2500; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}		
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 2; i <= 11; i+=2)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	int max = 0;
//	scanf("%d,%d,%d", &a, &b, &c);
//	if (a < b)
//	{
//		max = b;
//	}
//	else
//	{
//		max = a;
//	}
//	if (max < c)
//	{
//		max = c;
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//    int i, j, k, l, m;
//    char c = '*';
//    for (i = 1; i <= 5; i++)
//        printf("\n");
//    for (i = 1; i < 4; i++)
//    {
//        for (j = 1; j < 27 - i * 2; j++)
//            printf(" ");
//        for (k = 1; k <= i * 4 + 1; k++)
//            printf("%c", c);
//        for (l = 1; l <= 9 - 4 * (i - 1); l++)
//            printf(" ");
//        for (m = 1; m <= i * 4 + 1; m++)
//            printf("%c", c);
//        printf("\n");
//    }
//    for (i = 1; i < 4; i++)
//    {
//        for (j = 1; j < 20; j++)
//            printf(" ");
//        for (k = 1; k <= 29; k++)
//            printf("%c", c);
//        printf("\n");
//    }
//    for (i = 1; i < 8; i++)
//    {
//        for (j = 1; j < 20 + 2 * i; j++)
//            printf(" ");
//        for (k = 1; k <= 29 - 4 * i; k++)
//            printf("%c", c);
//        printf("\n");
//    }
//}

//int main()
//{
//	printf("*****\n");
//	printf("  *****\n");
//	printf("    *****\n");
//	printf("      *****\n");
//	printf("    *****\n");
//	printf("  *****\n");
//	printf("*****\n");
//
//	return 0;
//}

//int main()
//{
//	printf("************\n");
//	printf("Hello World!\n");
//	printf("************\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	//int sum = a + b;
//	printf("%d\n", a + b);
//	return 0;
//}

//int main()
//{
//	printf("//This is a C program.\n");
//	return 0;
//}

//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
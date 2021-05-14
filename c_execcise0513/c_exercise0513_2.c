#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int main()
{
	int i = 0;
	double sum1 = 0, sum2 = 0, sum3 = 0, sum = 0;
	for (i = 1; i <= 100; i++)
	{
		sum1 += i;
	}
	for (i = 1; i <= 50; i++)
	{
		sum2 += (double)i * i;
	}
	for (i = 1; i <= 10; i++)
	{
		sum3 += 1.0 / i;
	}
	sum = sum1 + sum2 + sum3;
	//printf("%.12e\n", sum);
	printf("%d", (int)sum);
	printf("\n%lf", sum);
	return 0;
}

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int n = 0;
//	double tmp = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		tmp *= i;
//		sum += tmp;
//	}
//	printf("sum = %22.15e\n", sum);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int i = 0;
//	int tmp = 0;
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	printf("sum = %d\n", sum);
//}

//int main()
//{
//	char ch = 0;
//	int count1 = 0;//统计英文字母
//	int count2 = 0;//统计空格
//	int count3 = 0;//统计数字
//	int count4 = 0;//统计其他字符
//	while ((ch = getchar()) != '\n')
//	{
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//			count1++;
//		else if (ch >= '0' && ch <= '9')
//			count3++;
//		else if (ch == ' ')
//			count2++;
//		else
//			count4++;
//	}
//	printf("字母个数：%d\n空格个数：%d\n数字个数：%d\n其他字符个数：%d\n", count1, count2, count3, count4);
//	return 0;
//}

//int main()
//{
//	int m, n;
//	int r = 0;
//	int a, b;
//	scanf("%d%d", &m, &n);
//	a = m;
//	b = n;
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("最大公约数：%d\n", n);
//	printf("最小公倍数：%d\n", a * b / n);
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) != EOF)
//	{
//		getchar();//读取换行符
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//		{
//			if ((ch >= 'W' && ch <= 'Z') || (ch >= 'w' && ch <= 'z'))
//			{
//				ch = ch - 26 + 4;
//			}
//			else
//			{
//				ch = ch + 4;
//			}
//		}
//		printf("%c\n", ch);
//	}
//	return 0;
//}

//int main()
//{
//	int f1 = 1;
//	int f2 = 1;
//	int f3 = 0;
//	int i = 0;
//	printf("%12d\n%12d\n", f1, f2);
//	for (i = 1; i <= 38; i++)
//	{
//		f3 = f1 + f2;
//		f1 = f2;
//		f2 = f3;
//		printf("%12d\n", f3);
//	}
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	double pi = 0;
//	double i = 1;
//	int flag = 1;
//	int count = 0;
//	while (fabs(1 / i)>1e-9)
//	{
//		pi += 1 / (i*flag);
//		flag = -flag;
//		i+=2;
//		count++;
//	}
//	printf("pi = %15.10lf\n", pi*4);
//	printf("count = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 5; j++)
//		{
//			printf("%5d", i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int sum = 0;
//	int count = 0;
//	int n = 0;
//	while (sum < 100000 && count < 1000)
//	{
//		printf("please enter amount:");
//		scanf("%d", &n);
//		sum += n;
//		count++;
//	}
//	printf("sum = %d,count = %d\n", sum, count);
//	printf("avg = %d\n", sum / count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	i = 1;
//	do
//	{
//		sum += i;
//		i++;
//	} while (i <= 100);
//	printf("sum = %d\n", sum);
//	return 0;
//}
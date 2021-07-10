#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int Fib(int n)
{
	if (n < 1)
		return -1;
	else if (n == 1 || n == 2)
		return 1;
	else
	{
		int f1 = 1;
		int f2 = 1;
		int fn = 0;
		int i = 1;
		for (i = 3; i <= n; i++)
		{
			fn = f1 + f2;
			f1 = f2;
			f2 = fn;
		}
		return fn;
	}
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}

//int main()
//{
//	double** arr[3][4];
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	if (a = 0)
//	{
//		printf("%d", a - 10);
//	}
//	else
//	{
//		printf("%d", a++);
//	}
//	return 0;
//}
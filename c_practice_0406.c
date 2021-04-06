#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int Add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
int main()
{
	int i = 0;
	for (i=1; i < 200; i++)
	{
		printf("%4d  ", i);
		if (i % 10 == 0)
			printf("\n");
	}

	for (i = 1; i < 200; i++)
	{
		printf("%4d  ", 10-i);
		if (i % 10 == 0)
			printf("\n");
	}
	return 0;
}
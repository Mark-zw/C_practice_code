#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int main()
{
	int sum = 0;
	int count = 0;
	int n = 0;
	while (sum < 100000 && count < 1000)
	{
		printf("please enter amount:");
		scanf("%d", &n);
		sum += n;
		count++;
	}
	printf("sum = %d,count = %d\n", sum, count);
	printf("avg = %d\n", sum / count);
	return 0;
}

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
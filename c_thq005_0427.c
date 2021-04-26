#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
typedef  void(*pfun_t)(int);
pfun_t signal(int, pfun_t);
int main()
{
	
	return 0;
}


//#include<math.h>
//int main()
//{
//	int sign = 1;
//	double pi = 0.0;
//	double n = 1.0;
//	double term = 1.0;
//	while (fabs(term) >= 1e-10)
//	{
//		pi = pi + term;
//		n = n + 2;
//		sign = -sign;
//		term = sign / n;
//	}
//	pi = pi * 4;
//	printf("pi = %10.8f\n", pi);
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
//			printf("%2d  ", i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int sum = 0;
//
//	//while (i <= 100)
//	//{
//	//	sum += i;
//	//	i++;
//	//}
//
//	do
//	{
//		sum += i;
//		i++;
//	} while (i <= 100);
//	printf("sum = %d\n", sum);
//}
#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<math.h>
int main()
{
	int num = 0;
	for (num = 100; num <= 200; num++)
	{
		int j = 0;
		for (j = 2; j <= sqrt(num); j++)
		{
			if (0 == num % j)
			{
				break;
			}
		}
		if (j > sqrt(num))//�����ж�
		{
			printf("%d ", num);
		}
	}
	return 0;
}

//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int m, n, temp = 0;
//	scanf("%d%d", &m, &n);//����������
//	if (m < n)//��������ǰһ�����Ⱥ�һ����С�����߽���
//	{
//		temp = m;
//		m = n;
//		n = temp;
//	}
//	while (m % n)
//	{
//		m = n;
//		n = m % n;
//	}
//	printf("���������%d\n", n);
//	return 0;
//}

//����һ
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (0 == (i % 3))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//������
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c,temp=0;
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
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i += 2)
//	{
//		printf("%d ", i);
//	}
	//for (i = 1; i <= 100; i++)
	//{
	//	if (1 == i % 2)
	//		printf("%d ", i);
	//}
//}

//int fun(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int x = 1;
//	int y = 2;
//	int z = fun(x, y);
//	printf("%d\n", z);
//	return 0;
//}
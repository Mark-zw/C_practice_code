#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>


//#include<math.h>
//double f(double x)
//{
//	return 2 * pow(x, 3) - 4 * pow(x, 2) + 3 * x - 6;
//}
//double f1(double x)
//{
//	return 6 * pow(x, 2) - 8 * x + 3;
//}
//int main()
//{
//	double x = 0;
//	scanf("%lf", &x);
//	do
//	{
//		x = x - f(x) / f1(x);
//	} while (fabs(f(x)) > 1e-5);
//	printf("%lf", x);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char i, j, k;//����A,B,C�ֱ��սi,j,k
//	for (i = 'X'; i <= 'Z'; i++)
//	{
//		for (j = 'X'; j <= 'Z'; j++)
//		{
//			for (k = 'X'; k <= 'Z'; k++)
//			{
//				if ((i != j) && (i != k) && (j != k))
//				{
//					if ((i != 'X') && (k != 'X') && (k != 'Z'))
//						printf("A��ս%c\nB��ս%c\nC��ս%c\n", i, j, k);
//				}
//			}
//		}
//	}
//}

//#include<stdio.h>
////��ӡ����ͼ��
//int main()
//{
//	int n = 0;//ȷ�������к�
//	while (scanf("%d", &n) != EOF)
//	{
//		//getchar();//��ȡ�ո��
//		//˼·��
//		//1���ȴ�ӡ�����ϰ벿��
//
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			//    1.�ȴ�ӡ�ո�
//			for (j = 0; j < n - 1 - i; j++)
//			{
//				printf(" ");
//			}
//			//    2.�ٴ�ӡ*  ֮����л���
//			for (j = 0; j < 2 * i + 1; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//
//		//2���ڴ�ӡ�����°벿��
//		for (i = 0; i < n - 1; i++)
//		{
//			//    1.�ȴ�ӡ�ո�
//			for (j = 0; j <= i; j++)
//			{
//				printf(" ");
//			}
//			//    2.�ٴ�ӡ*  ֮����л���	
//			for (j = 0; j < 2 * (n - 1 - i) - 1; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#include<math.h>
////��������ƽ������ֵ
//int main()
//{
//	double a = 0;
//	double x1 = 0;
//	double x2 = 0;
//	int i = 0;
//	//scanf("%lf", &a);
//	for (a = 1; a < 100; a++)
//	{
//		x1 = a / 2;
//		x2 = (x1 + a / x1) / 2;
//		do
//		{
//			x1 = x2;
//			x2 = (x1 + a / x1) / 2;
//		} while (fabs(x1 - x2) > 1e-5);
//		printf("%.0lf��ƽ�����ǣ�%lf\n", a,x1);
//		//a = a + 1;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 1;
//	int m = 0;
//	for (i = 0; i < 9; i++)
//	{
//		m = (n+1) * 2 ;
//		n = m;
//	}
//	printf("��һ�칲ժ��%d�����ӡ�", m);
//	return 0;
//}

////���������·���һ��߶�
//int main()
//{
//	double height = 100;
//	double rebound = 0;
//	double sum = 0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		rebound = height / 2;
//		sum = sum + height + rebound;//һ�����+��������
//		height = rebound;
//	}
//	sum = sum - rebound;
//	printf("sum = %lf\nrebound = %lf\n", sum, rebound);
//	return 0;
//}

////��ǰ20���������֮��
//int main()
//{
//	double m = 1.0;
//	double n = 2.0;
//	int i = 0;
//	int input = 0;
//	double k = 0;
//	double sum = 0;
//	scanf("%d", &input);
//	for (i = 0; i < input; i++)
//	{
//		k = n / m;
//		sum += k;
//		double tmp = n;
//		n = n + m;
//		m = tmp;
//	}
//	printf("sum = %16.10lf\n", sum);
//	return 0;
//}

////�ҳ�1000���ڵ�������ɲ���ָ����ʽ��ӡ
//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 1; i <= 100000; i++)
//	{
//		int sum = 0;
//		for (j = 1; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				sum += j;
//			}
//		}
//		if (sum == i)
//		{
//			printf("%d its factors are ", i);
//			for (j = 1; j < i; j++)
//			{
//			
//			   if (i % j == 0)
//			   {
//			      printf("%d", j);
//				  if (j < i / 2)
//				  {
//					  printf(",");
//				  }
//			   }
//
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
 
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1,sum = 0; i < n; i++)
//	{
//
//		if (n % i == 0)
//		{
//			sum += i;
//		}
//	}
//	if (sum == n)
//	{
//		printf("%d its factors are ", n);
//		for (i = 1, sum = 0; i < n; i++)
//		{
//
//			if (n % i == 0)
//			{
//				printf("%d", i);
// 			if (i < n / 2)
//				printf(",");
//			}
//		}
//		printf("\n");
//	}
//	else
//		printf("%d��������\n", n);
//	return 0;
//}

//#include<math.h>
////��1-9999999֮���������
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 9999999; i++)
//	{
//		//˼·��1.����i��λ�����������sum����жϣ�
//		//2.sum���и�������λ���η����
//		//	3.�ж�sum��i�Ƿ����
//		int k = 1;
//		int sum = 0;
//		int tmp = i;//��Ҫ��ѭ�����ڲ��ı�ѭ������i��ֵ
//		//1.����i��λ��
//		while (tmp /= 10)
//		{
//			k++;
//		}
//		//2.sum���и�������λ���η����
//		tmp = i;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, k);
//			tmp /= 10;
//		}
//		//3.�ж�sum��i�Ƿ����
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		int tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, 3);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//��3������10�����������������һ������
int main()
{
	int arr[] = { 1,11,33,55,13,44,56,63,67,92 };//����������10����
	int Max = arr[0];//�������ֵΪMax����a[0]������ʼֵ����Max
	int sz = sizeof(arr) / sizeof(arr[0]);//������arrԪ�صĸ����������������±�
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (Max < arr[i])
		{
			Max = arr[i];//���ǽ��ϴ�ֵ����Max
		}
	}
	printf("Max = %d", Max);
	return 0;
}

//��1�����1900-2000�������������ݣ�����������������֮һ�����������
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

//��8���󷽳�ʽax ^ 2 + bx + c = 0�ĸ����ֱ��ǣ�
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//	double d = 0.0;
//	double x1 = 0.0;
//	double x2 = 0.0;
//	printf("��������ⷽ��ʽ��ϵ��a,b,c��>>\n");
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
//		printf("������ʵ���⣡\n");
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = pow(a,2);
//	printf("b = %d\n", b);
//	return 0;
//}

////��7����������m��n�����Լ����
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
//	printf("����������������:>>\n");
//	scanf("%d%d", &m, &n);
//	//��շת�����
//	ret = G_com_div(m, n);//G_com_div�õ����������������Լ�������䷵��
//	printf("���Լ��Ϊ��%d\n",ret);
//	return 0;
//}

//��6����100~200֮������������
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
//		if (is_Prime(i) == 1)//is_Prime�����ж��������Ƿ�Ϊ����,�� ����1 ���Ƿ���0
//			printf("%d ",i);
//	}
//	return 0;
//}

//��5���ж�һ�����ܷ�ͬʱ��3��5������
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
//	printf("������һ��������:>>\n");
//	scanf("%d", &i);
//	ret = Judge(i);//Judge�����ж��������Ƿ���ͬʱ��3��5�������ܷ���1�����ܷ���-1��
//	if (ret == 1)
//		printf("%d����ͬʱ��3��5����\n",i);
//	else
//		printf("%d������ͬʱ��3��5����\n",i);
//	return 0;
//}

//��4����1+2+3+......+100��
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
//	sum = GetSum(i);//GetSum������ǰi��֮�Ͳ�����
//	printf("sum = %d\n", sum);
//	return 0;
//}

//��3����3����a,b,c,Ҫ�󰴴�С˳������������
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
//	MAX=GetMax(a, b, c);//GetMax�����Զ����������е����ֵ������
//	printf("MAX = %d", MAX);
//	return 0;
//}
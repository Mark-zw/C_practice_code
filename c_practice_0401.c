#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("hello world\n");
	return 0;
}
////写一个函数求两个整数的较大值
//int Get_MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;//定义变量max用来存储较大值
//	printf("Please input two intgers:>>\n");
//	scanf("%d%d", &a, &b);
//	max=Get_MAX(a, b);
//	printf("较大值为: %d\n",max);
//	return 0;
//}
//int g = 20;
//int g;
//int main()
//{
//	int line = 0;
//	while (line <= 100000)
//	{
//		printf("write a line %d\n", line);
//		line++;
//	}
//	if (line > 100000)
//	{
//		printf("好offer\n");
//	}
//	//int g = 20;
//	////int g = 30;
//
//	//printf("%d\n", g);
//	//printf("\a\328\test");
//	return 0;
//}

//int main()
//{
//	int weight = 80;//单位kg 
//	weight = 60;//对80不满意，重新赋值成60
//	double salary = 10000.0;
//	salary = 30000.0;//对salary只有10000.0不满意，变成30000.0
//	//赋值操作符也可以连续使用，比如
//	int a = 10;
//	int x = 0;
//	int y = 20;
//	a = x = y + 1;//赋值操作符是从右往左计算的
//
//	x = y + 1;
//	a = x;
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d", &a);
//	while (a)
//	{
//		count++;
//		a &= a - 1;
//		//a = a & (a - 1);
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d", &a);
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((a >> i) & 1))
//		/*if((1<<i)==(a&(1<<i)))*/  
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int count = 0;
//	scanf("%d", &a);
//	while (a)
//	{
//		if ((a % 2) == 1)
//			count++;
//		a = a / 2;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}
//不创建临时变量实现两个数的交换
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("before:a = %d,b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after:a = %d,b = %d", a, b);
//	return 0;
//}

//int main()
//{
//	//方法一：加减法
//	int a = 3;
//	int b = 5;
//	printf("before:a = %d,b = %d\n", a, b);
//	a = a + b;
//	b = a - b;//将a的值给b
//	a = a - b;//将b的值给a
//	printf("after:a = %d,b = %d", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int temp = 0;
//	printf("before:a = %d,b = %d\n", a, b);
//	temp = a;
//	a = b;
//	b = temp;
//	printf("after:a = %d,b = %d", a, b);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	int b = -3;
//	int q = a & b;
//	printf("q = %d\n",q);
//	return 0;
//}

//int main()
//{
//	int a = -3;        //00000000 00000000 00000000 00000011
//	int b = -5;        //00000000 00000000 00000000 00000101
//	int c1 = a & b;   //00000000 00000000 00000000 00000001  =1
//	int c2 = a | b;   //00000000 00000000 00000000 00000111  =7
//	int c3 = a ^ b;   //00000000 00000000 00000000 00000110  =6
//	printf("c1 = %d\n", c1);
//	printf("c2 = %d\n", c2);
//	printf("c3 = %d\n", c3);
//	return 0;
//}
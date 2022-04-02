#define _CRT_SECURE_NO_WARNINGS 1 
////输出This is a C program
//#include<stdio.h>
//int main()
//{
//	printf("This is a C program.\n");
//	return 0;
//}
//
////求两个整数之和
//#include<stdio.h>
//int main()
//{
//	int a, b, sum;
//	int ret = scanf("%d%d", &a, &b);//scanf返回参数的个数
//	sum = a + b;
//	printf("sum is %d\n", sum);
//	printf("%d\n", ret);
//	return 0;
//}

////求两个整数中的较大者
//#include<stdio.h>
//int main()
//{
//	int a, b, max;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	printf("the maximum between %d and %d is %d\n", a, b, max);
//	return 0;
//}

////求两个整数中的较大者 函数声明调用
//#include<stdio.h>
//int main()
//{
//	int max(int x, int y);
//	int a, b, c;
//	scanf("%d%d", &a, &b);
//	c = max(a, b);
//	printf("the maximum between %d and %d is %d\n", a, b, c);
//	return 0;
//}
//int max(int x, int y)
//{
//	int z;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}

//#include<stdio.h>
//int main()
//{
//	double mul = 1;
//	for (double i = 1; i <= 170; i++)
//	{
//		mul *= i;
//	}
//	printf("%f", mul);
//	return 0;
//}

////课后编程习题
////4.输出Hello World!
//#include<stdio.h>
//int main()
//{
//	printf("Hello World!\n");
//	return 0;
//}

////5.
//#include<stdio.h>
//int main()
//{
//	printf("*****\n");
//	printf("  *****\n");
//	printf("    *****\n");
//	printf("      *****\n");
//	return 0;
//}

////6.输出三个数中最大者
//#include<stdio.h>
//int main()
//{
//	int a, b, c, max;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		if (a > c)
//			max = a;
//		else 
//			max = c;
//	}
//	else
//	{
//		if (b > c)
//			max = b;
//		else
//			max = c;
//	}
//	printf("max: %d\n", max);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	void function1(int, int), function2(int, int);
	int a = 13, b = 12;
	char ch = getchar();
	switch (ch)
	{
	case 'a':
	case'A':
		function1(a, b);
		break;
	case'b':
	case'B':
		function2(a, b);
		break;
	default:
		printf("enter data error\n");
	}
	return 0;
}
void function1(int x, int y)
{
	printf("x+y = %d\n", x + y);
}
void function2(int x, int y)
{
	printf("x*y = %d\n", x * y);
}

//int main()
//{
//	char grade = 0;
//	scanf("%c", &grade);
//	printf("your score:");
//	switch(grade)
//	{
//		case 'A':
//			printf("85--100\n");
//			break;
//		case 'B':
//			printf("70--84\n");
//			break;
//		case 'C':
//			printf("60--69\n");
//			break;
//		case 'D':
//			printf("< 60\n");
//			break;
//		default:
//			printf("enter data error!\n");
//	}
//	return 0;
//}

//int main()
//{
//	int x, y;
//	scanf("%d", &x);
//	if (x < 0)
//		y = -1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = 1;
//	printf("%d\n", y);
//	return 0;
//}

//int main()
//{
//	char ch;
//	ch = getchar();
//	ch = ch >= 65 && ch <= 90 ? ch + 32 : ch;
//	//if (ch >= 65 && ch <= 90)
//	//{
//	//	ch = ch + 32;
//	//}
//	putchar(ch);
//	return 0;
//}

//int main()
//{
//	int a, b, c, temp = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a > c)
//	{
//		temp = c;
//		a = c;
//		c = temp;
//	}
//	if (b > c)
//	{
//		temp = c;
//		b = c;
//		c = temp;
//	}
//	printf("从小到大依次输出：%d  %d  %d \n", a, b, c);
//	return 0;
//}

//int main()
//{
//	double x, y,temp;
//	scanf("%lf%lf", &x, &y);
//	printf("交换前：x = %lf,y = %lf\n", x, y);
//	temp = x;
//	x = y;
//	y = temp;
//	
//	printf("交换后：x = %lf,y = %lf\n", x, y);
//
//	//printf("x+y = %lf\n", x + y);
//
//	return 0;
//}

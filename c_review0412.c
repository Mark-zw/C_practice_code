#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
static int add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 10, b = 20;
	int sum = add(a, b);
	printf("%d", sum);
}

//int main()
//{
//	int include = 3;
//	printf("%d", include);
//	return 0;
//}
//int main()
//{
//	int a = 1, b = 2, c = 3, d;
//	d = (a + b, b++, c = b + a);
//	printf("d = %d,c = %d\n", d, c);
//	return 0;
//}
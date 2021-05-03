#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d,%d,%d", &a, &b, &c);
	int max(int, int, int);
	printf("%d\n", max(a, b, c));
	return 0;
}
int max(int x, int y, int z)
{
	int m = 0;
	m = (x > y ? x : y);
	return (m > z ? m : z);
}
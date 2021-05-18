#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int main()
{
	int i = 0;
	if (1 || i++)
	{
		;
	}
	printf("%d", i);
	return 0;
}
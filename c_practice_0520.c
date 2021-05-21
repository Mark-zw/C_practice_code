#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int main()
{
	char ch[4] = { 'A','*',' ' };
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%c ", ch[i]);
	}
	return 0;
}




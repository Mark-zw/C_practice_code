#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[15] = "12345\0xxxxxxx";
	char arr2[] = "abcd";
	size_t count = 0;
	scanf("%d", &count);
	strncat(arr1, arr2, count);
	printf("%s", arr1);
	return 0;
}

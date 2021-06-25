#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
#include<assert.h>
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	if (*str1 < *str2)
		return -1;
	else
		return 1;
}

int main()
{
	char* p = "abcdef";
	char* q = "abcdef";
	int ret = my_strcmp(p, q);
	if (ret > 0)
	{
		printf("p > q\n");
	}
	else if (ret < 0)
	{
		printf("p < q\n");
	}
	else
	{
		printf("p == q\n");
	}
}

//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* dest_start = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return dest_start;
//}
//int main()
//{
//	char arr[20] = "hello ";
//	char arr2[] = "world";
//
//	//my_strcat(arr, arr2);//"hello"传递的是首元素的地址
//	printf("%s\n", my_strcat(arr, arr2));
//	return 0;
//}

//size_t my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int len1 = strlen(arr);
//	int len2 = my_strlen(arr);
//	printf("len1 = %d\nlen2 = %d\n", len1, len2);
//	return 0;
//}
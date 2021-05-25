#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//方法一
//char* my_strncat(char* dest, char* src, size_t count)
//{
//	char* start = dest;
//	//dest找到\0的位置
//	while (*dest!='\0')
//	{
//		dest++;
//	}
//	while (count)
//	{
//		//将src中的字符追加给dest
//		*dest = *src;
//		dest++;
//		src++;
//		//如果src以及指向\0的位置，提前结束循环
//		if (*src == '\0')
//		{
//			break;
//		}
//		count--;
//	}
//	*dest = '\0';//字符个数追加完毕后，再单独追加'\0'
//	return start;
//}

//方法二
char* my_strncat(char* dest, char* src, size_t count)
{
	assert(dest != NULL && src != NULL);
	char* start = dest;
	while (*dest++)
		;
	dest--;
	while (count--)
		if ((*dest++ = *src++) == '\0')
			return start;
	*dest = '\0';
	return start;
}
int main()
{
	char arr1[15] = "12345\0xxxxxxx";
	char arr2[] = "abcd";
	size_t count = 0;
	scanf("%d", &count);
	my_strncat(arr1, arr2,count);
	printf("%s", arr1);
	return 0;
}

//#include<stdio.h>
//#include<assert.h>
////模拟实现strncpy
////方法一
////char* my_strncpy(char* dest, char* src, size_t n)
////{
////	char* dest_start = dest;
////	while ((n > 0) && (*src != '\0'))
////	{
////		*dest = *src;
////		dest++;
////		src++;
////		n--;
////	}
////	while (n > 0)
////	{
////		*dest = '\0';
////		dest++;
////		n--;
////	}
////	return dest_start;
////}
//
////方法二
//char* my_strncpy(char* dest, char* src, size_t count)//count比n更有实际意义
//{
//	assert(dest != NULL);//引用断言
//	assert(src != NULL);
//	
//	char* start = dest;
//	while (count && (*dest++ = *src++) != '\0')
//	{
//		count--;
//	}
//	if (count)
//	{
//		while (count--)
//		{
//			*dest++ = '\0';
//		}
//	}
//	return start;
//}
//
//int main()
//{
//	char arr1[10] = "abcdefg";
//	char arr2[] = "1234";
//	size_t len = 0;
//	scanf("%d", &len);
//	my_strncpy(arr1, arr2, len);
//	printf("%s", arr1);
//	return 0;
//}

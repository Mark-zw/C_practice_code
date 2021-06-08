#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<assert.h>
#include<string.h>

int main()
{

	return 0;
}

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* dest_start = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		//从前向后拷贝
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//从后向前拷贝
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return dest_start;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//
//	my_memmove(arr1+2, arr1, 20);
//	return 0;
//}

//void* my_memcpy(void* dest, const char* src, size_t num)
//{
//	void* dest_start = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		//*(char*)dest = *(char*)src;
//		//dest = (char*)dest + 1;//++(char*)dest
//		//src = (char*)src + 1;//++(char*)src
//		*((char*)dest)++ = *((char*)src)++;
//	}
//	return dest_start;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//
//	my_memcpy(arr2, arr1, 20);
//	return 0;
//}

////5.模拟实现strstr
//#include<stdio.h>
//#include<assert.h>
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* cur = (char*)str1;
//	char* p1 = NULL;
//	char* p2 = NULL;
//	if (!*str2)
//		return str1;//str2为空字符串的情况
//	while (*cur)
//	{
//		p1 = cur;
//		p2 = str2;
//		while ((*p1 == *p2)&& *p1 && *p2)//*p1、*p2不为\0，且*p1 == *p2
//		{
//			p1++;
//			p2++;
//		}
//		if (!*p2)
//			return cur; //找到了的情况
//		cur++;
//	}
//	return NULL;//找不到的情况
//}
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bcd";
//	printf("%s\n", my_strstr(arr1, arr2));
//	return 0;
//}

////4.模拟实现strcat
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
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
//
//int main()
//{
//	char arr1[20] = "abcd";
//	char arr2[] = "1234";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

////3.模拟实现strcmp
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 && *str2 && (*str1 == *str2))
//	{
//		str1++;
//		str2++;
//	}
//	if ((*str1 == *str2) && (*str1 == 0))
//	{
//		return 0;
//	}
//	else if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "abcdg";
//	int ret = my_strcmp(arr1,arr2);
//	if (ret > 0)
//	{
//		printf("arr1 > arr2\n");
//	}
//	else if (ret == 0)
//	{
//		printf("arrr1 == arr2\n");
//	}
//	else
//	{
//		printf("arr1 < arr2\n");
//	}
//	return 0;
//}

//2.模拟实现strcpy
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* dest_start = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return dest_start;
//}
//int main()
//{
//	char arr1[20] = "abcd";
//	char arr2[] = "123abcdef";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

////1.模拟实现strlen
//#include<stdio.h>
//
////方法一：计数器
//size_t my_strlen_1(const char* str)
//{
//	size_t count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
////方法二：递归法
//size_t my_strlen_2(const char* str)
//{
//	if (*str)
//		return 1 + my_strlen_2(str + 1);
//	return 0;
//}
//
////方法三：指针-指针
//size_t my_strlen_3(const char* str)
//{
//	const char* str_start = str;
//	while (*str++)
//	{
//		;
//	}
//	return str - str_start - 1;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int len_1 = my_strlen_1(arr);
//	int len_2 = my_strlen_2(arr);
//	int len_3 = my_strlen_3(arr);
//	printf("%d\n", len_1);
//	printf("%d\n", len_2);
//	printf("%d\n", len_3);
//	return 0;
//}



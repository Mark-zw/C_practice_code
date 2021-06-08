#define _CRT_SECURE_NO_WARNINGS 1 
//5.ģ��ʵ��strstr
#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	char* cur = (char*)str1;
	char* p1 = NULL;
	char* p2 = NULL;
	if (!*str2)
		return str1;//str2Ϊ���ַ��������
	while (*cur)
	{
		p1 = cur;
		p2 = str2;
		while ((*p1 == *p2)&& *p1 && *p2)//*p1��*p2��Ϊ\0����*p1 == *p2
		{
			p1++;
			p2++;
		}
		if (!*p2)
			return cur; //�ҵ��˵����
		cur++;
	}
	return NULL;//�Ҳ��������
}
int main()
{
	char arr1[] = "abbbcdef";
	char arr2[] = "bcd";
	printf("%s\n", my_strstr(arr1, arr2));
	return 0;
}

////4.ģ��ʵ��strcat
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

////3.ģ��ʵ��strcmp
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

//2.ģ��ʵ��strcpy
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

////1.ģ��ʵ��strlen
//#include<stdio.h>
//
////����һ��������
//size_t my_strlen_1(const char* str)
//{
//	size_t count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
////���������ݹ鷨
//size_t my_strlen_2(const char* str)
//{
//	if (*str)
//		return 1 + my_strlen_2(str + 1);
//	return 0;
//}
//
////��������ָ��-ָ��
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
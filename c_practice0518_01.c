#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//#include<assert.h>
//int my_strcmp(const char* p1,const char* p2)
//{
//	assert(p1 && p2);
//	while (*p1 == *p2)
//	{
//		if (*p1 == '\0')
//		{
//			return 0;
//		}
//		p1++;
//		p2++;
//	}
//
//	//方法一：vs实现的方式
//	//if (*p1 > *p2)
//	//{
//	//	return 1;
//	//}
//	//else
//	//{
//	//	return -1;
//	//}
//
//	//方法二：linux下gcc实现方式
//	return *p1 - *p2;
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwt";
//	if (my_strcmp(p1, p2) > 0)
//	{
//		printf("%s > %s\n", p1, p2);
//	}
//	else if (my_strcmp(p1, p2) == 0)
//	{
//		printf("%s = %s\n", p1, p2);
//	}
//	else
//	{
//		printf("%s < %s\n", p1, p2);
//	}
//	return 0;
//}

//#include<assert.h>
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* dest_start = dest;
//	//1.找到目的空间中的'\0'
//	while (*dest != '\0')//跳过不是'\0'的字符
//	{
//		dest++;
//	}
//	//2.追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return dest_start;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);//模拟实现strcat
//	printf("%s", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxx";
//	//arr1空间需要足够大来接收追加过来的内容
//	//否则会造成越界访问
//	char arr2[] = "world";
//	//将字符串arr2内容追加给arr1
//	strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* dest_start = dest;
//
//	//拷贝src指向字符串的内容到dest指向的空间，包括'\0'
//	//方法一：常规思路版
//	//while (*src != '\0')
//	//{
//	//	*dest = *src;
//	//	dest++;
//	//	src++;
//	//}
//	//*dest = *src;
//	
//	//方法二：代码精简版
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return dest_start;
//}
//int main()
//{
//	char arr1[] = "abcdefghik";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);//模拟实现strcpy函数
//	printf("%s", arr1);
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char arr1[] = "abcdefghik";
//	char arr2[] = "hello";
//	//将字符串arr2拷贝给arr1
//	strcpy(arr1, arr2);
//	//用调试窗口观察arr1变化
//	return 0;
//}

//#include<assert.h>
////1.计数器实现求字符串长度函数
//int my_strlen1(const char* str)//整个过程不改变指针指向内容，加上const
//{
//	assert(str != NULL);//加上断言，防止接收空指针
//	int count = 0;
//	while (*str != '\0')//也可以直接用while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////2.递归实现求字符串长度，不用创建临时变量
//int my_strlen2(const char* str)
//{
//	assert(str != NULL);
//	if (*str != '\0')//也可以直接用if(*str)
//	{
//		return 1 + strlen(str + 1);//不能直接使用str++，可以使用++str,建议直接用str+1
//	}
//	else
//		return 0;
//}
////3.指针-指针得到中间元素的个数，实现求字符串长度
//int my_strlen3(const char* str)
//{
//	assert(str != NULL);
//	const char* tmp = str;//创建临时指针变量保存str起始值
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - tmp;
//}
//int main()
//{
//	char arr[] = "abcdefgh";
//	int ret1 = my_strlen1(arr);//1.计数器方法
//	int ret2 = my_strlen2(arr);//2.递归方法
//	int ret3 = my_strlen3(arr);//3.指针 - 指针方法
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//	printf("%d\n", ret3);
//
//	return 0;
//}
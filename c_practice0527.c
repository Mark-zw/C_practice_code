#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <ctype.h>
int main()
{
	int i = 0;
	char str[] = "Test string. \n";
	char c;
	while (str[i])
	{
		c = str[i];
		if (isupper(c))
			c = tolower(c);
		putchar(c);
		i++;
	}
	return 0;
}


//#include<stdio.h>
//#include<errno.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	//当前路径下是没有test.txt文件的，所以应该会打开文件失败
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("Open file success!\n");
//	}
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	//192.168.31.121  网络ip地址
//	//192 168 31 121  ---strtok  .
//	//student_zhang@whu.edu 邮箱地址
//	//student_zhang whu edu --- @ .
//	char arr[] = "student_zhang@whu.edu";
//	char* p = "@.";
//	char buf[100] = { 0 };
//	char* ret = 0;//用于接收分割后标记的位置
//	//分割字符串之前先进行临时拷贝
//	strcpy(buf, arr);
//	//分割buf中的字符串
//
//	//ret = strtok(buf, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//一次性打印
//	for (ret = strtok(buf, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	char* cur = (char*)str1;
//	char* p1 = NULL;
//	char* p2 = NULL;
//	if (*str2 == '\0')
//		return (char*)str1;
//	while (*cur != '\0')
//	{
//		p1 = cur;
//		p2 = str2;
//		while ((*p1 == *p2) && (*p1 != '\0') && (*p2 != '\0'))
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//		{
//			return cur;//找到字串的情况
//		}
//		cur++;
//	}
//	return NULL;//找不到字符的情况
//}

//int main()
//{
//	char arr1[] = "abbbcdefbcd";
//	char arr2[] = "bcd";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("Can not find!\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
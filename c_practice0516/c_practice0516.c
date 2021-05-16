#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
////模拟实现库函数strcpy
//char* my_strcpy(char* des, const char* src)
//{
//	assert(des != NULL);
//	assert(src != NULL);
//	char* des0 = des;//将目的地的字符串的起始地址保留
//	while ((*des++ = *src++) != '\0')
//	{
//		;
//	}
//	return des0;//返回拷贝之后目的地起始地址
//}
//
//int main()
//{
//	char arr1[] = "xxxxxxxxxxxx";
//	char arr2[] = "Good job!";
//	//my_strcpy(arr1, arr2);
//	//printf("%s", arr1);
//	printf("%s", my_strcpy(arr1, arr2));
//	return 0;
//}


//#include<assert.h>
////模拟实现库函数strlen
//size_t my_strlen(const char* p)
//{
//	const char* p0 = p;//保留指针最初的地址
//	assert(p != NULL);//断言，防止将空指针传进来
//	while (*p++ != '\0')//先判断*p是否为\0，然后自增（如果为\0,直接跳出循环，该次不会自增）
//	{
//		;
//	}
//	return (p-p0-1);//返回字符的长度
//}
//int main()
//{
//	//char arr[] = "abcd";
//	char arr[] = "I am a student";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* p)
//{
//	assert(p != NULL);
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	//printf("%c",'\0');
//	return 0;
//}
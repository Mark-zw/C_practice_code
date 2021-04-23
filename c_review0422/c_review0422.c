#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//
//#include<stdio.h>
//#include<string.h>
////求字符串长度
//int my_strlen(char* pr)
//{
//	int count = 0;
//	while (*pr != '\0')
//	{
//		count++;
//		pr++;
//	}
//	return count;
//}

//int my_strlen(char* pr)
//{
//	if (*pr != '\0')
//		return 1 + my_strlen(pr + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr1[] = "bit";
//	//int len = strlen(arr1);//求字符串长度
//	int len = my_strlen(arr1);
//	//arr1是数组，数组传参，传过去的不是整个数组，而是首元素的地址
//	printf("%d\n", len);
//	return 0;
//}
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	print(num);//打印1 2 3 4
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	//      1   2  3 4  
//	//当（）里面的数字大于9的时候就拆分，小于9，为个位数的时候停止拆分，进行打印
//	return 0;
//}

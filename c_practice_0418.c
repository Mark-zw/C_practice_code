#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
////7.计算斐波那契数
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}

////6.编写一个函数实现n的k次方，使用递归实现。
//double Fun(int n, int k)
//{
//	if (k >= 1)
//	{
//		return n * Fun(n, k - 1);
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return (1.0 / n) * Fun(n, k + 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	double ret = 0;
//	scanf("%d%d", &n, &k);
//	ret = Fun(n, k);
//	printf("ret = %lf\n", ret);
//	return 0;
//}

////5.计算一个数的每位之和（递归实现)
//int sum_num(int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + sum_num(n / 10);//递归实现每位数字求和
//	}
//	else
//		return n;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;//用来接收计算后的结果
//	scanf("%d", &n);
//	ret = sum_num(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}

////4.编写一个函数 reverse_string(char * string)（递归实现)
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//
//void reverse_string(char* string)
//{
//	int len = my_strlen(string);//求字符串的长度
//	if (len <= 1)
//	{
//		return ;//如果字符串长度为1，则不反转
//	}
//	else
//	{
//		char temp = *string;//定义临时变量存储指针指向的字符
//		*string = *(string + len - 1);//将最后一个字符赋值给指针指向的字符
//		*(string + len - 1) = '\0';//将最后一个字符赋值为\0（字符串结束标志）
//		reverse_string(string + 1);//递归反转下一个字符
//		*(string + len - 1) = temp;//将第一个字符赋值给最后一个
//	}
//
//}
//
//int main()
//{
//	char string[] = "abcdefgh";
//	printf("反转前：%s\n", string);
//	reverse_string(string);
//	printf("反转后：%s\n", string);
//	return 0;
//}


//#include<string.h>
////3.递归和非递归分别实现strlen
//int my_strlen1(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen1(str + 1);
//	}
//	else
//	    return 0;
//}
//int my_strlen2(char* str)
//{
//	int count = 0;
//	while (*str != 0)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "Hello World";
//	printf("%d\n", strlen(arr));//调用strlen库函数方式
//	printf("%d\n", my_strlen1(arr));//递归方式实现
//	printf("%d\n", my_strlen2(arr));//非递归方式实现
//	return 0;
//}

////2.递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
////int Fac1(int n)
////{
////	if (n > 1)
////	{
////		return n * Fac1(n - 1);
////	}
////	return 1;
////}
//int Fac2(int n)
//{
//	int i = 0;
//	int fac2 = 1;
//	for (i = 1; i <= n; i++)
//	{
//		fac2 *= i;
//	}
//	return fac2;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;//用于接收阶乘函数返回值
//	scanf("%d", &n);
//	//ret = Fac1(n);//递归方式实现
//	ret = Fac2(n);//非递归方式实现
//	printf("%d!=%d\n", n, ret);
//}

////1.递归方式实现打印一个整数的每一位
//void print_num(int n)
//{
//	if (n > 9)
//	{
//		print_num(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;//定义变量n用来接收整数
//	scanf("%d", &n);
//	print_num(n);//调用自定义函数实现打印该整数的每一位
//	return 0;
//}

//#include<string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(++str);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", my_strlen(arr));
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
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}

//int main()
//{
//	printf("haha\n");
//	main();
//	return 0;
//}

//int main()
//{
//	int c = 0x11223344;
//	int a = 3;
//	int b = -1;
//	return 0;
//}

//int main()
//{
//    char ch = 0;
//    while ((scanf("%c", &ch)) != EOF)
//    {
//        getchar();
//        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' ||
//            ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' ||
//            ch == 'o' || ch == 'u')
//        {
//            printf("Vowel\n");
//        }
//        else
//            printf("Consonant\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int IQ = 0;
//    while (scanf("%d", &IQ) != EOF)
//    {
//        if (IQ >= 140)
//            printf("Genius");
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int num1 = 0;//统计A出现的次数
//    int num2 = 0;//统计B出现的次数
//    int i = 0;
//    char arr[20] = { 0 };//用来存储输入的字符
//    scanf("%s", arr);
//    while (arr[i] != '0')
//    {
//        if (arr[i] == 'A')
//        {
//            num1++;
//        }
//        else if (arr[i] == 'B')
//        {
//            num2++;
//        }
//        i++;
//    }
//    if (num1 > num2)
//        printf("A");
//    else if (num1 < num2)
//        printf("B");
//    else
//        printf("E");
//    return 0;
//}
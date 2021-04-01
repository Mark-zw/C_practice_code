#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int main()
{
	int number = 0;
	float score_c = 0.0;
	float score_m = 0.0;
	float score_e = 0.0;
	scanf("%d%f%f%f",&number,&score_c,&score_m,&score_e);
	printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.\n", number, score_c, score_m, score_e);
	return 0;
}
//#include<stdio.h>
//struct Stu {
//    char arr[10];
//    double score_c;
//    double score_m;
//    double score_e;
//};
//int main()
//{
//    struct Stu s = { "17140216",80.845,90.55,100.00 };
//    printf("The each subject of No. %s is %.2lf,%.2lf,%.2lf\n", s.arr, (double)s.score_c, s.score_m, s.score_e);
//        return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    i = printf("Hello world!");
//    printf("\n%d\n", i);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("\n%d\n", printf("Hello world!"));
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 0XABCDEF;
//    printf("%15d", a);
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int i = 1234;
//    printf("%#o %#X", i, i);
//    return 0;
//}
//练习4∶求第n个斐波那契数。（不考虑溢出)
//int count = 0;
//int Fib1(int x)//递归实现
//{
//	if (x == 3)
//		count++;
//	if (x <= 2)
//		return 1;
//	else
//		return Fib1(x - 1) + Fib1(x - 2);
//}
//int Fib2(int x)//函数实现
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (x <= 2)
//		return 1;
//	while (x > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//		count++;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib1(n);//求第n个斐波那契数
//	//ret = Fib2(n);//循环实现
//	printf("%d\n",ret);
//	printf("count = %d\n", count);
//	return 0;
//}

//int Fun1(int x)//循环实现
//{
//	int i = 0;
//	int y = 1;
//	for (i = 1; i <= x; i++)
//	{
//		y = y * i;
//	}
//	return y;
//}
//int Fun2(int x)//递归实现
//{
//	if (x > 1)
//		return x * Fun2(x - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("请输入一个数:>>\n");
//	scanf("%d", &n);
//	//ret = Fun1(n);//循环的方式
//	ret = Fun2(n);//递归的方式
//	printf("%d的阶乘为：%d\n", n, ret);
//	return 0;
//}

//求字符串长度
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
////把大事化小
////my_strlen("bit")
////1+my_strlen("it")
////1+1+my_strlen("t")
////1+1+1+my_strlen("\0")
////1+1+1+0    = 3
//int main()
//{
//	char arr1[] = "bit";
//	//int len = strlen(arr1);//求字符串长度
//	int len = my_strlen(arr1);//arr1是数组，数组传参，传过去的不是整个数组，而是首元素的地址
//	printf("%d\n", len);
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
//	return 0;
//}

//int main()
//{
//	printf("hello world\n");
//	main();
//	return 0;
//}
//void swap1(int x, int y)
//{
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//}
//swap2(int* pa, int* pb)
//{
//	int temp = *pa;
//	*pa = *pb;
//	*pb = temp;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a = %d,b = %d\n",a,b);
//	//swap1(a, b);
//	swap2(&a,&b);
//	printf("a = %d,b = %d\n",a,b);
//	return 0;
//}

//int GetMax(int x, int y)
//{
//	if (x < y)
//		return y;
//	else
//		return x;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d%d", &a, &b);
//	max = GetMax(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s",arr);
//	return 0;
//}
//int Add(int a, int b)
//{
//	int z = 0;
//	z = a + b;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("please input two intgers:>>\n");
//	scanf("%d%d", &a, &b);
//	sum = Add(a, b);
//	printf("sum = %d", sum);
//	return 0;
//}
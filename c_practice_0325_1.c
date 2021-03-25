#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include"Add.h"
//求斐波那契数列
//int count = 0;
//int Fib1(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int Fib2(n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib2(n);
//	printf("ret = %d\n", ret);
//	//printf("count = %d\n", count);
//	return 0;
//}


//求字符串长度
//my_strlen(char* str)
//{
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
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}

//void print(int n)//1234
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//}

//int main()
//{
//	printf("hallo world\n");
//	main();//递归调用
//	return 0;
//}

//int Add(int x, int y);//函数声明
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a,b);//函数调用
//	printf("%d\n", sum);
//	return 0;
//}
//int Add(int x, int y)//函数定义
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//void new_line()
//{
//	printf("haha\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}


////4.写一个函数，每调用一次这个函数，就会将num的值增加1
//void Number_plus(int* num)
//{
//	*num+=1;//不能用*num++，因为++优先级高于* 会先执行++ 再执行*
//}
//int main()
//{
//	int num = 0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		Number_plus(&num);
//		printf("%d ", num);
//	}
//	return 0;
//}

////3.写一个函数，实现一个整型有序数组的二分查找
//int binary_search(int k, int arr[],int sz)//数组如何传递参数?//形参arr[]实际上是一个指针 
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//		return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//不能在自定义函数中进行，数组不会进行拷贝，只是传递首地址
//	ret = binary_search(k, arr,sz);//arr传递的数组首元素的地址
//	if (ret == -1)
//		printf("查找不到！\n");
//	else
//		printf("找到了，下标为：%d\n", ret);
//	return 0;
//}

//2.写一个函数判断一年是不是闰年
//is_Leap(int a)
//{
//	if ((a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_Leap(year) == 1)
//			printf("%d  ",year);
//	}
//	return 0;
//}


//is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (!(x % j))
//			return 0;
//	}
//	return 1;
//}
// 
//int main()
//{
//	int i = 0;
//	for (i = 2; i<200; i++)//判断2-200之间的素数
//	{
//		if ((is_prime(i) == 1))
//			printf("%d  ", i);
//	}
//	return 0;
//}

//练习1.写一个函数可以判断一个数是不是素数
//void Judge_prime(int x)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (!(x % 2))
//			break;
//	}
//	if (i > sqrt(x))
//		printf("%d是素数\n", x);
//	else
//		printf("%d不是素数\n", x);
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个正整数:>>\n");
//	scanf("%d", &n);
//	Judge_prime(n);
//	return 0;
//}


//当实参传给形参的时候
// 形参其实是实参的一份临时拷贝
// 对形参的修改是不会改变实参的
//2.交换函数
//void Swap1(int x, int y)//有问题，值交换不过去 x y有独立的空间
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}
//void Swap2(int* pi, int* pj)//正确，通过指针间接操控主函数中的i，j进行值互换
//{
//	int temp = 0;
//	temp = *pi;
//	*pi = *pj;
//	*pj = temp;
//}
//int main()
//{
//	int i = 100;
//	int j = 200;
//	printf("i = %d,j = %d\n", i, j);
//    //Swap1(i, j);
//	Swap2(&i, &j);
//	printf("i = %d,j = %d\n", i, j);
//	return 0;
//}

//函数 1.加法函数
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum=Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//在屏幕上面打印9*9的乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%d*%d = %-2d  ", i, j, j * i);
//		printf("\n");
//		Sleep(1000);
//	}
//	return 0;
//}

//求最大值
//int main()
//{
//	int arr[] = { 1,3,5,2,6,22,21,53,11,25 };//考虑将最大值存到a[0]
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (max< arr[i])
//			max = arr[i];
//	}
//	printf("最大值：%d\n", max);
//	return 0;
//}


////求分数的和
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double sum = 0;
//	for(i=1;i<=100;i++)
//	{
//		sum = sum+(1.0/i)*flag;
//		flag=-flag;
//	}
//	printf("sum = %lf\n",sum);
//	return 0;
//}
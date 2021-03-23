#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
//6.编写程序数一下1到100的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 10) == 9)
//			count++;
//		if ((i / 10) == 9)
//			count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}


//5.写一个代码：打印100 - 200之间的素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i < 200; i++)
//	{
//		//试除法 从2到sqrt(i)试除
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i < 200; i++)
//	{
//		//试除法 从2到i-1试除
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//4.打印1000年到2000年之间的闰年
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//			printf("%d ", year);
//	}
//	return 0;
//}

//3.给定两个数，求这两个数的最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	printf("请输入两个正整数求它们的最大公约数：>>\n");
//	scanf("%d%d", &m, &n);
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("最大公约数是：%d\n", n);
//	return 0;
//}

//2.写一个代码打印1-100之间所有3的倍数的数字
//方法二
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//	printf("1-100之间3的个数为：%d\n", i);
//	return 0;
//}
// 方法一
//int main()
//{
//	int i = 0;
//	int count = 0;//计数
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 3) == 0)
//			printf("%d  ", i);
//		count++;
//	}
//	printf("1-100之间3的倍数的个数为 %d\n", count);
//	return 0;
//}


////1、写代码将三个数按从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("please input three numbers:>>\n");
//	scanf("%d%d%d", &a,&b,&c);
//	//算法分析  将最大数放到a，次大值给b，最小值给c
//	if (a < b)//如果a小于b，交换a，b两者的值
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)//如果a小于c,交换a,c两者的值
//	{
//		int temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)//如果b小于c，交换b，c两者的值
//	{
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d  %d  %d\n", a, b, c);//不管输入的三个数的大小，均按照a，b，c的顺序打印
//	return 0;
//}

//int main()
//{
//	char password[20];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("Please input your password:>>\n");
//		scanf("%s", password);
//		/*if (password == "123456")*///不能直接用==来比较两个字符串是否相等
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("password is right,good luck to you!");
//			break;
//		}
//		else
//			printf("password is wrong\n");
//	}
//	if (i == 3)
//		printf("you idiot,put the wrong password three times,don't have another chance!");
//	return 0;
//}

//welcome to c_code!!!!!!
//#######################
//w#####################!
//we###################!!
//wel#################!!!
//.......
//welcome to c_code!!!!!!
//int main()
//{
//	char arr1[] = "welcome to c_code!!!!!!";
//	char arr2[] = "#######################";
//	int left = 0;
//	/*int right = sizeof(arr1) / sizeof(arr2) - 1;*///这种是错误的，arr1最后一个字符是字符串结束标志\0
//	/*int right = sizeof(arr1) / sizeof(arr2) - 2;*///-2是正确的，但是我们不推荐这种方式，容易出错
//	int right = strlen(arr1) - 1;//strlen计算字符串长度是不会将\0计算进去
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//    return 0;
//}

//二分查找法查找特定数字
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到了\n");
//	return 0;
//}

//普通低效遍历法查找特定数字
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标为%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int s = 1;
//	int sum = 0;
//	//printf("请输入一个数来计算其阶乘:>>\n");
//	//scanf("%d", &n);
//	for (i= 1; i <= 3; i++)
//	{
//			s = s * i;
//		sum = sum + s;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//
//	int sum = 0;
//	//printf("请输入一个数来计算其阶乘:>>\n");
//	//scanf("%d", &n);
//	for (n = 1; n <= 3; n++)
//	{
//		int s = 1;
//		for (i = 1; i <= n; i++)
//		{
//			s = s * i;
//		}
//		sum = sum + s;
//	}
//	printf("前n项阶乘之和为：%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int s = 1;
//	printf("请输入一个数来计算其阶乘:>>\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n;i++)
//	{
//		s = s * i;
//	}
//	printf("阶乘为：%d\n", s);
//	return 0;
//}
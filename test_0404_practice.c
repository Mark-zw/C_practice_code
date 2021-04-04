#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//10


////9.乘法口诀表输入一个数n,打印n*n的乘法口诀表
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

//8.判断素数
//is_Prime(int x)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_Prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

////7.使用指针打印数组内容
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

////6.交换两个变量，不能创建临时变量
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a = %d,b = %d \n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：a = %d,b = %d \n", a, b);
//	return 0;
//}

////5.打印二进制的奇数位和偶数位
//void print(int m)
//{
//	int i = 0;
//	printf("奇数位：\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：\n");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}


//4.统计二进制中1的个数
//int Count_bit_one(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count++;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int count = 0;
//	scanf("%d%d", &a, &b);
//	c = a^b;
//	count = Count_bit_one(c);
//	printf("相同个数：%d\n", 32 - count);
//	printf("不同个数：%d\n",count);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &a);
//	count = Count_bit_one(a);
//
//	//for (i = 0;i < 32;i++)
//	//{
//	//	if ((a & (1 << i)) == (1 << i))  //((a>>i)&1)==1
//	//	{
//	//		count++;
//	//	}
//	//}
//	printf("count = %d\n", count);
//}


//3.交换数组
//void print(int arr1[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//}
//void Swap(int arrA[], int arrB[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int temp = arrA[i];
//		arrA[i] = arrB[i];
//		arrB[i] = temp;
//	}
//}
//int main()
//{
//	int arrA[] = { 1,3,5,7,9 };
//	int arrB[] = { 2,4,6,8,10 };
//	int sz = sizeof(arrA) / sizeof(arrA[0]);
//	printf("交换前：\n");
//	print(arrA,sz);
//	print(arrB,sz);
//	Swap(arrA, arrB, sz);//交换数组内容
//	printf("交换后：\n");
//	print(arrA, sz);
//	print(arrB, sz);
//	return 0;
//}
//

////2.整型数组操作
////void init(int* p1, int sz)//数组初始化
////{
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		*p1 = 0;
////		p1++;
////	}
////}
////void print(int* p2, int sz)//数组打印
////{
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		printf("%d ", *p2);
////		p2++;
////	}
////	printf("\n");
////}
////void reverse(int* p3, int sz)
////{
////	int i = 0;
////	for (i = 0; i < sz/2; i++)
////	{
////		int temp = *(p3+i);
////		*(p3 + i) = *(p3 +( sz - 1 - i));
////		*(p3 + (sz - 1 - i)) = temp;
////	}
////}
//void init(int arr1[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr1[i] = 0;
//	}
//}
//void print(int arr1[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr2[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left < right)
//	{
//		int temp = arr2[left];
//		arr2[left] = arr2[right];
//		arr2[right] = temp;
//		left++;
//		right--;
//	}
//	//int i = 0;
//	//for (i = 0; i < sz/2; i++)
//	//{
//	//	int temp = arr2[i];
//	//	arr2[i] = arr2[sz - 1 - i];
//	//	arr2[sz - 1 - i] = temp;
//	//}
//}
//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	init(arr1,sz1);
//	print(arr1,sz1);
//
//	print(arr2, sz2);
//	reverse(arr2,sz2);
//	print(arr2, sz2);
//
//	return 0;
//}

//1.冒泡排序
//int main()
//{
//	int arr[] = { 1,3,2,7,4,5,10,9,8 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 0; j < sz - i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				count++;
//			}
//		}
//		if (count == 0)
//			break;
//	}
//	printf("i = %d\n", i);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
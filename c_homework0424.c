#define _CRT_SECURE_NO_WARNINGS 1 
//3、将数组A中的内容和数组B中的内容进行交换。（数组一样大）
#include<stdio.h>
void print(int arr[], int sz)//打印数组
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void swap_arr(int arr1[], int arr2[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}
int main()
{
	int arr1[] = { 1,1,2,3,5,8,1,3 };
	int arr2[] = { 3,1,4,1,5,9,2,6 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	printf("交换前：\n");
	printf("arr1：");
	print(arr1, sz);
	printf("arr2：");
	print(arr2, sz);
	swap_arr(arr1, arr2, sz);//两个数组元素交换
	printf("交换后：\n");
	printf("arr1：");
	print(arr1, sz);
	printf("arr2：");
	print(arr2, sz);
	return 0;
}

////2、创建一个整型数组，完成对数组的操作
////实现函数init() 初始化数组为全0
////实现print()  打印数组的每个元素
////实现reverse()  函数完成数组元素的逆置。
////要求：自己设计以上函数的参数，返回值。
//#include<stdio.h>
//void init(int arr[], int sz)//初始化数组
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)//打印数组
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)//逆置数组
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	init(arr, sz);
//	print(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	reverse(arr,sz);
//	printf("逆置后：");
//	print(arr, sz);
//	return 0;
//}

////1、实现一个对整型数组的冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int flag = 0;//若数组已经有序，则不继续冒泡
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1,3,4,5,7,9,10,8,6,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("排序前：");
//	print_arr(arr,sz);
//	bubble_sort(arr, sz);
//	printf("排序后：");
//	print_arr(arr,sz);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b==2)+(a==3))==1 && 
//							((b==2) + (e==4))==1 && 
//							((c==1) + (d==2))==1 && 
//							((c==5) + (d==3))==1&&
//							((e==4) + (a==1))==1)
//						{
//							if ((a * b * c * d * e) == 120)
//							{
//								printf("a = %d,b = %d,c = %d,d = %d,e = %d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	
//	for (i = 0; i < sz - 1; i++)//确定冒泡排序的趟数
//	{
//		int flag = 1;//用于判断比较是否继续
//		for (j = 0; j < sz - 1 - i; j++)//确定每一趟两两比较的次数
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//printf("排序前：");
//	//print(arr, sz);
//	////冒泡排序，进行升序排列
//	//bubble_sort(arr,sz);
//	//printf("排序后：");
//	//print(arr,sz);
//	return 0;
//}



#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
////调整奇数偶数顺序
////要求：输入一个整数数组，实现一个函数，
////来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
////所有偶数位于数组的后半部分。
//void print(int arr[], int sz)//打印数组
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void adjust(int arr[], int sz)//调整奇数偶数顺序
//{
//	//思路：从数组的两端寻找，左边找偶数，右边找奇数
//	//将找到的数位置进行交换
//	int left = 0;//左边起始下标
//	int right = sz - 1;//右边起始下标
//
//	while (left < right)
//	{
//		while (arr[left] % 2 == 1 && left++< right)//左边跳过奇数
//		{
//			;
//		}
//		while (arr[right] % 2 == 0 && right-- > left)//右边跳过偶数
//		{
//			;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//		//left++;
//		//right--;
//	}
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("调整前：");
//	print(arr, sz);
//	adjust(arr, sz);
//	printf("调整后：");
//	print(arr, sz);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}




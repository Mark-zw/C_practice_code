#define _CRT_SECURE_NO_WARNINGS 1 
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);
//#include<stdio.h>
//#define ROW 3
//#define COL 3

//int Young_tableau(int arr[ROW][COL], int* pr, int* pc, int k)
//{
//
//	int i = 0;
//	int j = *pc - 1;
//	////方法一：利用杨氏矩阵的特点，运用右上角的元素进行查找
//	while ((i <= *pr - 1) && (j >= 0))
//	{
//		if (arr[i][j] < k)
//		{
//			i++;
//		}
//		else if (arr[i][j] > k)
//		{
//			j--;
//		}
//		else
//		{
//			break;//如果相等结束循环
//		}
//	}
//	if ((i <= *pr - 1) && (j >= 0))
//	{
//		*pr = i;
//		*pc = j;
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}

//方法二：利用杨氏矩阵的特点，运用左下角的元素进行查找
//int Young_tableau(int arr[ROW][COL], int* pr, int* pc, int k)
//{
//	int i = *pr - 1;
//	int j = 0;
//	while ((i >= 0) && (j <= *pc - 1))
//	{
//		if (arr[i][j] < k)
//		{
//			j++;
//		}
//		else if (arr[i][j] > k)
//		{
//			i--;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if ((i >= 0) && (j <= *pc - 1))
//	{
//		*pr = i;
//		*pc = j;
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int k = 0;//需要被查找的数字
//	int arr[ROW][COL] = { 1,2,3,4,5,6,7,8,9 };//杨氏矩阵
//	int row = ROW;
//	int col = COL;
//	int ret = 0;
//	printf("请输入要查找的数字：>>");
//	scanf("%d", &k);
//	ret = Young_tableau(arr, &row, &col, k);//&row,&col可以将下标带回来
//	//用来接收函数的返回结构  0 --- 没找到  1---代表查找到了
//	if (ret)
//	{
//		printf("找到了!\n行下标为：%d，列下标为：%d\n", row, col);
//	}
//	else
//	{
//		printf("查找不到！\n");
//	}
//	return 0;
//}
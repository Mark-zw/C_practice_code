#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i = 0;
//	int* p = &arr[0][0];//将二维数组首元素地址取出来放到指针p中
//	for (i = 0; i < 12; i++)
//	{
//		printf("%3d", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("a[%d][%d] = %p\n",i,j,&arr[i][j]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	//二维数组创建
//	//int arr1[3][4];
//	//char arr2[3][4];
//	//double arr3[4][5];
//
//	//初始化---创建的同时给赋值
//	//int arr1[3][4] = { 1,2,3,4,5,6};//不完全初始化
//	int arr1[][4] = { {1,2},{5,6},{9,10} };
//	return 0;
//}
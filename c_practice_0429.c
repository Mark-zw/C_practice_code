#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
////²ÂÐ×ÊÖ
//int main()
//{
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//	return 0;
//}

//#define ROW 10
//#define COL 10
////Ñî»ÔÈý½Ç
////     1
////    1 1
////   1 2 1
////  1 3 3 1
//// 1 4 6 4 1
////1 5 10 10 5 1
///*--------------*/
////1
////1 1
////1 2 1
////1 3 3 1
////1 4 6 4 1
////1 5 10 10 5 1
///*--------------*/
//void print(int arr[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < row - 1-i; j++)
//		{
//			printf("   ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%6d", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void init_arr(int arr[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			else if (j == i)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[ROW][COL] = { 0 };
//	//print(arr, ROW, COL);
//	init_arr(arr, ROW, COL);
//	print(arr, ROW, COL);
//
//	return 0;
//}

//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a; 
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d\n%d\n", a + b, c);
//	return 0;
//}
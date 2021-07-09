#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
void Func(char* str)
{
	while (*str)//\0的ASCII码就是0，这里表示*st!='\0'
	{
		if (*str == ' ')
		{
			*str = '%98';
		}
		str++;
	}
}
int main()
{
	char arr[] = "abc defgx yz";
	void Func(arr);
	printf("%s\n", arr);
	return 0;
}

//#include<stdio.h>
//int main()
//{
//	//int str[7] = {'\0'};
//	//str = "string";
//	/*int a = 10;
//	int b = a += a *= a -= a / 3;
//	printf("%d", b);*/
//	int i = 0;
//	while (i < 10)
//	{
//		if (i < 1)
//			continue;
//		if (i == 5)
//			break;
//		i++;
//	}
//	return 0;
//}

//#include<stdio.h>
//#define ROW 4
//#define COL 4
//void Init_arr(int arr[ROW][COL], int row, int col, int k)
//{
//	//1、初始化数组，为了方便后面的测试，这里直接完全初始化数组
//	arr[ROW][COL] = { 1,2,3,4,2,3,4,5,3,4,5,6,4,5,6,7 };
//}

//int Search_num(int arr[ROW][COL], int* prow, int* pcol, int k)
//{
//	//选左上角的坐标作为参考
//	int row = 0;
//	int col = *pcol - 1;
//	while ((row <= *prow - 1) && (col >= 0))
//	{
//		if (k < arr[row][col])
//		{
//			col--;
//		}
//		else if (k > arr[row][col])
//		{
//			row++;
//		}
//		else
//		{
//			*prow = row;
//			*pcol = col;
//			return 1;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	//int arr[ROW][COL]={ 1,2,3,4,2,3,4,5,3,4,5,6,4,5,6,7 };
//	int arr[ROW][COL] = { 1,2,8,9,2,4,9,12,4,7,10,13,6,8,11,15 };
//	int row = ROW;
//	int col = COL;
//	int k = 0;
//	int ret = 0;
//	scanf("%d", &k);
//	//Init_arr(arr, ROW, COL, k);//初始化数组和待查询数字
//	ret = Search_num(arr, &row, &col, k);//查找数字，成功就返回1，同时通过row，col待会下标，否则返回-1。
//	if (ret == 1)
//	{
//		printf("找到了，下标为[%d][%d]\n", row, col);
//	}
//	else
//	{
//		printf("查找不到！");
//	}
//	return 0;
//}
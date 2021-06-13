#define _CRT_SECURE_NO_WARNINGS 1 
//编写程序，将一个2×3的二维数组行、列互换，存入另一个3×2的二维数组中。
//（说明：2×3二维数组的数值可以初始化赋值，也可以通过键盘输入方式实现）

#include<stdio.h>
int main()
{
	int arr1[2][3] = { 1,1,2,3,5,8 };
	int arr2[3][2] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			arr2[i][j] = arr1[j][i];
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
}


//有一个已经排好序的数组a[11] = { 1,5,6,7,13,22,27,37,38,45 }。
//编程实现，输入一个数，要求按原来的排序规律将它插入数组中，并输出插入后的数组。

//#include<stdio.h>
//void NewSort(int a[11], int n)
//{
//	int j = 0;
//	for (j = 0; j < 11; j++)
//	{
//		if (a[j] > n)
//		{
//			int k;
//			for (k = 11 - 2; k >= j; k--)
//			{
//				a[k + 1] = a[k];
//			}
//			a[j] = n;
//			break;
//		}
//	}
//}
//int main()
//{
//	int a[11] = { 1,5,6,7,13,22,27,37,38,45 };
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	NewSort(a, n);
//	for (i = 0; i < 11; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//1. 有一分段函数，y=f(x)，当x<5时，y=x-9；
//当x大于等于5且小于15时，y=5x-3;
//当x大于等于15时，y=6x+9;
//任意输入一个x的值，根据情况输出y的值。
//#include<stdio.h>;
//int main()
//{
//	double x, y;
//	scanf("%lf", &x);
//	if (x < 5)
//	{
//		y = x - 9;
//	}
//	else if (x >= 5 && x < 15)
//	{
//		y = 5 * x - 3;
//	}
//	else
//	{
//		y = 6 * x + 9;
//	}
//	printf("%lf", y);
//}
//编程实现递归方法求5!
//#include<stdio.h>
//int fun(int n)
//{
//	if (n <= 1)
//		return 1;
//	return n * fun(n - 1);
//}
//int main()
//{
//	int n = 5;
//	int ret = fun(n);
//	printf("%d", ret);
//	return 0;
//}

//编程建立一个三个结点的链表，存放三个学生的数据，并输出第一个学生的数据信息。
//假定学生数据结构中只有学号、姓名、成绩三项。可编写一个建立链表的函数creat()。
//（可自行定义结构体类型）

//#include<stdio.h>
//typedef struct Stu
//{
//	char _name[20];
//	int _number[15];
//	float _score;
//}Stu;
//
//typedef struct LinkList
//{
//	Stu _data;
//	LinkList* next;
//}LinkList;
//
//LinkList* creat()
//{
//	LinkList* ptm = (LinkList*)malloc(sizeof(LinkList) * 3);
//	if (ptm == NULL)
//	{
//		printf("Malloc failed!\n");
//		return NULL;
//	}
//	else
//	{
//		LinkList* pLink = ptm;
//		pLink->_data = { "zhangsan", {1,1,2,3,5,8,1,3},97.5 };
//	}
//
//}
//int main()
//{
//	LinkList* p = creat();
//	return 0;
//}
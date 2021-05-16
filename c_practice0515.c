#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>


//void Print(char* str)
//{
//	printf("%s", str);
//}
//int main()
//{
//	void (*p)(char*) = Print;
//	(*p)("abcdef");
//	return 0;
//}

//int main()
//{
//	int arr[5];
//	//arr是一个数组，数组有5个元素，每个元素类型是int
//	//arr类型是  int [5]  --- 去掉变量名，剩下的就是变量的类型
//	int* parr1[10];
//	//parr1是一个数组，数组有10个元素，每个元素类型是int*
//	//parr1是指针数组,类型是 int* [10]
//	int(*parr2)[10];
//	//parr2是一个指针，指针指向一个数组，数组有10个元素，每个元素的类型是int
//	//parr2是数组指针,类型是 int(*)[10]
//	int(*parr3[10])[5];
//	//parr3是一个数组，数组有10个元素，每个元素都是一个指针
//	//指针指向一个数组，数组有5个元素，每个元素类型是int
//	//parr3是一个指向数组指针的数组，本质上还是数组
//	//parr3类型是 int(*[10])[5]
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//		//方式一：通过指针找到与首元素偏移i个元素的地址，
//		//再对齐解引用操作，找到这个元素
//		printf("%d ", *(arr + i));
//		//方式二：既然可以将arr赋值给p，说明arr与p等价
//		//那么就可以直接用arr替代p进行相应的解引用操作
//		printf("%d ", arr[i]);
//		//方式三：通过数组名+[下标]访问数组元素
//		//即arr+[下标i]访问下标为i的元素，也就是第i+1个元素
//		printf("%d ", p[i]);
//		//方式四：既然arr与p等价，
//		//那么也可以直接用p+[下标]的方式访问数组的元素
//
//		//上述四种方式实际结果完全相同，实际上也可以互相转换使用
//	}
//	return 0;
//}

//void print1(int arr[3][4], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print(int(*p)[4], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			//printf("%d ", p[i][j]);
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{3,4,5,6},{5,6,7,8} };
//	print1(arr, 3, 4);
//	print(arr, 3, 4);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", *(p + i));
//		printf("%d ", p[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*p + i));
//	}
//	return 0;
//}
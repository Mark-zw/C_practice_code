#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };//指针数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *arr[i]);
//	}
//	//int* pa = &a;
//	//int* pb = &b;
//	//int* pc = &c;
//	//这里只有三个变量，我们创建了三个指针分别存放它们的地址
//	//假如有10个变量，我们要一口气创建10个指针来存放它们的地址吗？
//
//	//整型数组---存放整型
//	//字符数组---存放字符
//	//指针数组---存放指针
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa 一级指针
//	int** ppa = &pa;//ppa 二级指针 ......后面还有 三级指针、四级指针....n级指针
//	//*ppa = pa;
//	//**ppa = a;
//	printf("%d\n", **ppa);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		//printf("&arr[%d] = %p  <===> p+%d = %p\n", i, &arr[i],i, p + i);
//		printf("%d  ", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;//指向首地址
//	char* end = str;//指向尾地址 \0
//	while (*end != '\0')
//	{
//		*end++;
//	}
//	return end - start;//end - start 就是中间元素的个数
//}
//int main()
//{
//	char arr[] = "hello c";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	char ch[5] = {0};
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//printf("%d", &arr[9] - &arr[0]);
//	//printf("%d", &arr[0] - &arr[9]);
//	//用一个int*类型的指针 - char*类型的指针，其结果未知
//	//通常我们说的指针 - 指针，都是指内存在同一块空间，比如说同一个数组中的空间
//	//printf("%d", &arr[9] - &ch[0]);//error
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[sz-1];
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d  ", *p);
//		//p = p + 1;
//		p-=2;
//	}
//	return 0;
//}




//// c_practice_0404.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
////
//
//#include <iostream>
//
//int main()
//{
//    std::cout << "Hello World!\n";
//}
//
//// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
//// 调试程序: F5 或调试 >“开始调试”菜单
//
//// 入门使用技巧: 
////   1. 使用解决方案资源管理器窗口添加/管理文件
////   2. 使用团队资源管理器窗口连接到源代码管理
////   3. 使用输出窗口查看生成输出和其他消息
////   4. 使用错误列表窗口查看错误
////   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
////   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

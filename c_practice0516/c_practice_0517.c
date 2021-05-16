#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int arr[10] = { 0 };//数组
	int(*p)[10] = &arr;//数组指针
	char* arr1[5] = { 0 };//字符数组
	char* (*p1)[5] = &arr1;//字符数组指针
	int(*p2)(int, int) = Add;//&Add;//函数指针
	int(*p3[4])(int, int) = { 0 };//函数指针数组
	//去掉变量名p3和数组[4]剩下的就是数组的类型 int(*)(int,int)
	int(*(*p4)[4])(int, int) = &p3;//指向函数指针数组的指针
	//p4是一个数组指针，指针指向的数组有4个元素
	//每个元素的类型都是函数指针，函数指针类型是int(*)(int,int)
	return 0;
}
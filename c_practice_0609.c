#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
struct S
{
	int data[1000];
	int num;
};
struct S s = { {1, 2, 3, 4}, 1000 };
//结构体传参
void print1(struct S s)
{
	printf("%d \n", s.num);
}
// 结构体地址传参
void print2(struct S* ps)
{
	printf("%d \n", ps->num);
}
int main()
{
	print1(s);//传结构体
	print2(&s);//传结构体地址
	return 0;
}

#pragma pack(8)//设置默认对齐数为8
//struct s1
//{
//	char c1; 
//	int i; 
//	char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//
//#pragma pack(1)//设置默认对齐数为1
//struct s2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//int main()
//{
//	printf("%d\n", sizeof(struct s1));
//	printf("%d\n", sizeof(struct s2));
//	return 0;
//}


//#include<stdio.h>
//struct s3
//{
//	double d;
//	char c;
//	int i;
//};
//struct s4
//{
//	char c1;
//	struct s3 s3;
//	double d;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct s4));
//	return 0;
//}

//struct s1
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct s1));
//	return 0;
//}

//struct Point
//{
//	int x;
//	int y;
//}p1;//声明结构体类型的同时定义变量p1
//
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10,{4,5},NULL };//结构体嵌套初始化
//
//struct Node n2 = { 20,{1,2},NULL };//结构体嵌套初始化
//
//struct Stu//类型声明
//{
//	char name[20];//姓名
//	int age;//年龄
//};
//struct Stu s = { "Student_zhang",20 };//初始化


//
//struct Point p2;//定义结构体变量p2
//
//struct Point p3 = { 1,1 };//初始化：定义变量的同时给变量赋值

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;

////代码2
//struct Node
//{
//	int data;//数据域
//	struct Node* next;//指针域
//};


//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}* p;
//
//int main()
//{
//	p = &x;
//	return 0;
//}
//struct Student
//{
//	char name[20];//姓名
//	char id[20];//学号
//	int age;//年龄
//	char sex[5];//性别
//};//分号不能丢弃

//struct tag
//{
//	member_list;
//}variable_list;

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "abcdefg";
//	memset(arr, '*', 4);
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//	int arr1[4] = { 1,2,3,5 };
//	int arr2[4] = { 1,2,3,4 };
//	int ret = memcmp(arr1, arr2, sizeof(arr1));
//	if (ret > 0)
//	{
//		printf("arr1 > arr2");
//	}
//	else if (ret == 0)
//	{
//		printf("arr1 == arr2");
//	}
//	else
//	{
//		printf("arr1 < arr2");
//	}
//	return 0;
//}

//void* my_memmove(void* dest, void* src, size_t num)
//{
//	assert(dest && src);
//	void* dest_start = dest;
//	if (dest < src)
//	{
//		//从前向后
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//从后向前
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return dest_start;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr1 + 2, arr1, 5 * sizeof(int));
//	return 0;
//}

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* dest_start = dest;//保持目的地起始位置
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return dest_start;
//}



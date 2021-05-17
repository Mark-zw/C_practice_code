#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int cmp_int(const void* elem1, const void* elem2)
//{
//
//	return (*(int*)elem1 - *(int*)elem2);
//}
//void Swap(char* e1, char* e2, int width)
//{
//	int i = 0;
//	//逐个字节交换
//	for (i = 0; i < width; i++)
//	{
//		//方法一：
//		//char tmp = *(e1 + i);
//		//*(e1 + i) = *(e2 + i);
//		//*(e2 + i) = tmp;
//
//		//方法二：
//		char tmp = *e1;
//		*e1 = *e2;
//		*e2 = tmp;
//		e1++;
//		e2++;
//	}
//}
//
//void Bubble_sort(void* base, int num, int width, int (*cmp)( void* e1 ,  void* e2))
//{
//	int i = 0;//size_t  就是 unsigned int 无符号整型 的类型重定义
//	//确定排序的趟数
//	for (i = 0; i < num - 1; i++)
//	{
//		int j = 0;
//		//确定每趟排序的对数
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			//比较大小
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//元素位置交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//			
//		}
//	}
//}
//
////void qsort(void* base,//待排序目标数组的起始位置
////	       size_t num,//数组的元素个数
////	       size_t width,//每个元素占用的字节数
////	       int(__cdecl* compare)(const void* elem1, const void* elem2)//函数指针，排序所使用的比较函数
////   //简化：int(* cmp)(const void* elem1, const void* elem2) 
////   //函数指针，指针指向的参数有两个，参数类型都是const void*,函数返回类型是int
////   //不同类型的数据比较的方法是不一样的，所以需要将比较方法写成函数传递给qsort
////           );
//
//void test4()
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	Bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_Stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int cmp_Stu_by_name(const void* e1, const void* e2)
//{
//	//字符串比较需要用到字符串比较库函数strcmp
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test3()
//{
//	struct Stu s[] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	int i = 0;
//	qsort(s, sz, sizeof(s[0]), cmp_Stu_by_age);
//	printf("按年龄排序：\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s,%d\n", s[i].name, s[i].age);
//	}
//	Bubble_sort(s, sz, sizeof(s[0]), cmp_Stu_by_name);
//	printf("按名字排序：\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s,%d\n", s[i].name, s[i].age);
//	}
//}
//int main()
//{
//	test3();//调用模拟排序函数排序struct Stu类型数据并打印
//	test4();//调用模拟排序函数排序int类型数据并打印
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_Stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int cmp_Stu_by_name(const void* e1, const void* e2)
//{
//	//字符串比较需要用到字符串比较库函数strcmp
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void test3()
//{
//	struct Stu s[] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	int i = 0;
//	qsort(s, sz, sizeof(s[0]), cmp_Stu_by_age);
//	printf("按年龄排序：\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s,%d\n", s[i].name, s[i].age);
//	}
//	qsort(s, sz, sizeof(s[0]), cmp_Stu_by_name);
//	printf("按名字排序：\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s,%d\n", s[i].name, s[i].age);
//	}
//}
//int main()
//{
//	test3();//排序结构体数组并打印
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int cmp_float(const void* e1, const void* e2)
//{
//	////方法一：判断大小，返回整数
//	//if (*(float*)e1 == *(float*)e2)
//	//{
//	//	return 0;
//	//}
//	//else if (*(float*)e1 - *(float*)e2 > 0)
//	//{
//	//	return 1;
//	//}
//	//else
//	//{
//	//	return -1;
//	//}
//
//	//方法二：强制类型转换成int类型
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//void test2()
//{
//	float arr2[] = { 4.0, 5.0, 1.0, 2.0, 3.0, 9.0 };
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	int i = 0;
//	qsort(arr2, sz, sizeof(arr2[0]), cmp_float);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%lf ", arr2[i]);
//	}
//}
//int main()
//{
//	test2();//排序浮点型数组并打印
//	return 0;
//}

////为了调用qsort，需要将比较函数传给qsort
////按照qsort函数参数的类型，写出需要使用的比较函数
//int cmp_int(const void* elem1, const void* elem2)
//{
//
//	return *(int*)elem1 - *(int*)elem2;
//}
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	test1();//排序整型数组并打印
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	void* p = &a;
//	*p = 0;
//	p++;
//	return 0;
//}

//void qsort(void* base,//待排序目标数组的起始位置
//	       size_t num,//数组的元素个数
//	       size_t width,//每个元素占用的字节数
//	       int(__cdecl* compare)(const void* elem1, const void* elem2)//函数指针，排序所使用的比较函数
//   //简化：int(* cmp)(const void* elem1, const void* elem2) 
//   //函数指针，指针指向的参数有两个，参数类型都是const void*,函数返回类型是int
//   //不同类型的数据比较的方法是不一样的，所以需要将比较方法写成函数传递给qsort
//           );

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };//数组
//	int(*p)[10] = &arr;//数组指针
//	char* arr1[5] = { 0 };//字符数组
//	char* (*p1)[5] = &arr1;//字符数组指针
//	int(*p2)(int, int) = Add;//&Add;//函数指针
//	int(*p3[4])(int, int) = { 0 };//函数指针数组
//	//去掉变量名p3和数组[4]剩下的就是数组的类型 int(*)(int,int)
//	int(*(*p4)[4])(int, int) = &p3;//指向函数指针数组的指针
//	//p4是一个数组指针，指针指向的数组有4个元素
//	//每个元素的类型都是函数指针，函数指针类型是int(*)(int,int)
//	return 0;
//}
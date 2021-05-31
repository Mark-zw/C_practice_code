#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
int cmp_int(const void* elem1, const void* elem2)
{

	return (*(int*)elem1 - *(int*)elem2);
}
void Swap(char* e1, char* e2, int width)
{
	int i = 0;
	//逐个字节交换
	for (i = 0; i < width; i++)
	{
		//方法一：
		//char tmp = *(e1 + i);
		//*(e1 + i) = *(e2 + i);
		//*(e2 + i) = tmp;

		//方法二：
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}

void Bubble_sort(void* base, int num, int width, int (*cmp)(void* e1, void* e2))
{
	int i = 0;//size_t就是unsigned int无符号整型的类型重定义，这里可以直接用int类型
	//确定排序的趟数
	for (i = 0; i < num - 1; i++)
	{
		int j = 0;
		//确定每趟排序的对数
		for (j = 0; j < num - 1 - i; j++)
		{
			//比较大小
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//元素位置交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}

		}
	}
}

//void qsort(void* base,//待排序目标数组的起始位置
//	       size_t num,//数组的元素个数
//	       size_t width,//每个元素占用的字节数
//	       int(__cdecl* compare)(const void* elem1, const void* elem2)//函数指针，
//排序所使用的比较函数
//   //简化：int(* cmp)(const void* elem1, const void* elem2) 
//   //函数指针，指针指向的参数有两个，参数类型都是const void*,函数返回类型是int
//   //不同类型的数据比较的方法是不一样的，所以需要将比较方法写成函数传递给qsort
//           );

void test4()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	Bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

struct Stu
{
	char name[20];
	int age;
};
int cmp_Stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_Stu_by_name(const void* e1, const void* e2)
{
	//字符串比较需要用到字符串比较库函数strcmp
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test3()
{
	struct Stu s[] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	int i = 0;
	qsort(s, sz, sizeof(s[0]), cmp_Stu_by_age);
	printf("按年龄排序：\n");
	for (i = 0; i < sz; i++)
	{
		printf("%s,%d\n", s[i].name, s[i].age);
	}
	Bubble_sort(s, sz, sizeof(s[0]), cmp_Stu_by_name);
	printf("按名字排序：\n");
	for (i = 0; i < sz; i++)
	{
		printf("%s,%d\n", s[i].name, s[i].age);
	}
}
int main()
{
	test3();//调用模拟排序函数排序struct Stu类型数据并打印
	test4();//调用模拟排序函数排序int类型数据并打印
	return 0;
}


//int main()
//{
//	//一维数组
//	int a[] = { 1,2,3,4 };
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(a + 0));
//	//printf("%d\n", sizeof(*a));
//	//printf("%d\n", sizeof(a + 1));
//	//printf("%d\n", sizeof(a[1]));
//	//printf("%d\n", sizeof(&a));
//	printf("%d\n", sizeof(*&a));
//	//printf("%d\n", sizeof(&a + 1));
//	//printf("%d\n", sizeof(&a[0]));
//	//printf("%d\n", sizeof(&a[0] + 1));
//	return 0;
//}
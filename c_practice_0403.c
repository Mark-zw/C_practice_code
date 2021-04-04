#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int main()
{
    char arr[] = {73,32,99,97,110,32,100,111,32,105,116,33 };
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < sz; i++)
    {
        printf("%c\n", arr[i]);
    }
    return 0;
}

//#include<stdio.h>
//int* test()
//{
//	int a = 10;
//	return &a;
//}
////1.a 创建的空间在函数结束的时候返回给系统了，不属于当前程序的内容
//int main()
//{
//	int* p = test();
//	//2.这时候通过*p 去访问一个返还系统的空间，该空间有可能已经存放其它内容了
//	//3.所以p是一个野指针
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		//当指针指向的范围超出数组arr的范围时，就越界访问了，此时p就是野指针
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int a;//局部变量不初始化，默认是随机值
//	int* p;//局部的指针变量不初始化，默认也会给随机值
//	*p = 20;//这时候对指针进行解引用操作，实际上并不知道更改的内存是在哪里
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = arr;
//	char* pc = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(pc+ i) = i + 1;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	return 0;
//}

//int main()
//{
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));
//	//printf("%d\n", sizeof(int*));
//	//printf("%d\n", sizeof(double*));
//	int a = 0x11223344;
//	//int* pa = &a;
//    char* pc = &a;
//	*pc = 0;
//
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//	return 0;
//}

////实例2
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//    return 0;
//}

//// 实例1
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600; 
//	int c = 0xb6000000; 
//	if (a == 0xb6)
//		printf("a"); 
//	if (b == 0xb600)
//		printf("b"); 
//	if (c == 0xb6000000)
//		printf("c"); 
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000000 00000000 00000000 00000011  整数3
//	//00000011  ->a   a是char类型，只有一个字节，这时候就会发生截断
//	//截断的规则：挑最小最低位的字节内容
//	char b = 127;
//	//00000000 00000000 00000000 01111111  整数127
//	//01111111  ->b
//    //a+b  a和b如何相加 按照变量数据类型的符号位来提升的
//	//00000011 ->00000000 00000000 00000000 00000011
//	//01111111 ->00000000 00000000 00000000 01111111
//	//           00000000 00000000 00000000 10000010
//	char c = a + b;//这时候a，b被提升为普通整型
//	//10000010 ->c
//    //后面我们要以%d的形式打印，需要进行整型提升：按照变量数据类型的符号位来提升的 
//	//11111111 11111111 11111111 10000010  ---补码
//	//11111111 11111111 11111111 10000001  ---反码
//	//10000000 00000000 00000000 01111110  ---原码 -126
//	printf("%d\n", c);
//	printf("%c\n", c);
//	return 0;
//}

////1.现实中为了描述复杂的对象，构建结构体类型
////2.比如学生，有姓名，年龄，学号等信息
////创建一个结构体类型
//struct Stu  //3.struct Stu是一个结构体类型，表示学生类型
//	        //类型是用来创建变量的
//{
//	char name[20];//姓名
//	int age;//年龄
//	char id[20];//学号
//};
//int main()
//{
//	int a = 10;
//	//使用struct Stu这个类型创建了一个学生对象s1，并初始化
//	struct Stu s1 = { "张三",20,"20210403" };
//	struct Stu* ps = &s1;
//	//结构体指针->成员名
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//
//	//printf("%s\n", (*ps).name);
//	//printf("%d\n", (*ps).age);
//	//printf("%s\n", (*ps).id);
//
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	//结构体变量.成员名  .操作符的操作数一个是结构体变量，另一个是成员名
//	return 0;
//}

////2.这个地方的()不是函数调用操作符，是函数定义的语法规则
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//1.调用函数的时候使用的() 就是函数调用操作符
//	int max = get_max(a, b);
//	//3.这里的函数调用操作符()的操作数为 函数名get_max，函数参数a，函数参数b  总共三个操作数
//	//4.对于函数调用操作符()而言，其操作数至少要有一个（函数名），可以有多个
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int a[10] = { 0 };//1.定义一个数组
//	//2.如果我们想要访问第5个数组元素，并给其赋值
//	a[4] = 10;//3.用数组变量名+[]+下标索引数字
//	printf("%d\n", a[4]);
//	return 0;
//}
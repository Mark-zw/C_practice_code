#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = { 0 };
//	char* t = arr1;
//	char* s = arr2;
//	while (*s++ = *t++)
//	{
//		;
//	}
//	s = arr2;
//	while (*s)
//	{
//		printf("%c", *s++);
//	}
//	return 0;
//}

//#include<stdio.h>
////喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
//int main()
//{
//	int money = 0;//钱
//	int total = 0;//总瓶数
//	int empty = 0;//空瓶
//	scanf("%d", &money);
//	total = money;
//	empty = total;
//	while (empty / 2)
//	{
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;//用来存放菱形上半部分的行数
//	while ((scanf("%d", &n)) != EOF)
//	{
//		getchar();//将多余的空格读走
//		//菱形打印思路
//		
//		//先打印上半部分三角形
//		int i = 0;//控制打印行数
//		int j = 0;//控制一行内部打印
//		for (i = 0; i < n; i++)
//		{
//			//1.先打印左边的空格
//			for (j = 0; j < n - 1 - i; j++)
//			{
//				printf(" ");
//			}
//			//2.再打印右边的 *
//			for (j = 0; j < 2 * i + 1; j++)
//			{
//				printf("*");
//			}
//			printf("\n");//一行内容打印完后进行换行
//		}
//
//		//再打印下半部分三角形
//		for (i = 0; i < n - 1; i++)
//		{
//			//1.先打印左边的空格
//			for (j = 0; j <= i; j++)
//			{
//				printf(" ");
//			}
//			//2.再打印右边的 *
//			for (j = 0; j < 2 * (n-i-1) - 1; j++)
//			{
//				printf("*");
//			}
//			printf("\n");//一行内容打印完后进行换行
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\n')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse(char* str)
//{
//	int len = my_strlen(str);
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		int tmp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}
//void print(char* str)
//{
//	while (*str != '\n')
//	{
//		printf("%c", *str);
//		str++;
//	}
//}
//int main()
//{
//	int i = 0;
//	char str[100] = { 0 };
//	while ((str[i] = getchar()) != '\n')
//	{
//		i++;
//	}
//	reverse(str);
//	print(str);
//	return 0;
//}

//#include<stdio.h>
//int fun()
//{
//   static int count = 1;
//   return ++count;
//}
//int main()
// {
//   int answer;
//   answer = fun(-fun() * fun());
//   printf("%d\n",answer);//输出多少?
//   return 0;
//  }

//#include <stdio.h>
//int main()
// {
//     int i = 1;
//     int ret = (++i) +(++i) +(++i);
//     printf("%d\n", ret);
//     printf("%d\n",i);
//     return 0;
// }

//#include<stdio.h>
////1.现实中为了描述复杂的对象，构建结构体类型
////2.比如学生，有姓名，年龄，学号等信息
////创建一个结构体类型
//struct Stu  //3.struct Stu是一个结构体类型，表示学生类型
//			//类型是用来创建变量的
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

//#include<stdio.h>
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

//#include<stdio.h>
//int main()
//{
//	int a[10] = { 0 };//1.定义一个数组
//	//2.如果我们想要访问第5个数组元素，并给其赋值
//	a[4] = 10;//3.用数组变量名+[]+下标索引数字
//	//4.[ ] 对应的两个操作数一个是变量名a  另外一个就是下标/索引值 4
//	printf("%d\n", a[4]);
//	return 0;
//}

//#include<stdio.h>
////求1-100以内偶数、奇数、3的倍数、5的倍数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//if (i % 2 == 0)//偶数
//		//{
//		//	printf("%d ", i);
//		//}
//		//if (i % 2 == 1)
//		//	printf("%d ", i);
//		//if (i % 3 == 0)
//		//	printf("%d ", i);
//		if (i % 5 == 0)
//			printf("%d ", i);
//	}
//}

////求限定范围一个数的倍数
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int s = 0;
//	scanf("%d", &n);
//	while (s < 100)
//	{
//		printf("%d ", s = i * n);
//		i++;
//	}
//	return 0;
//}

////求一个数所有的因数
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		if (n % i == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


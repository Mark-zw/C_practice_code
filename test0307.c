#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char ch = 'a';
	char* pc = &ch;
	printf("%c \n",ch);
	printf("%p \n",pc);
	printf("%p \n",&ch);
	printf("------------\n");
	*pc = 'b';
	printf("%c \n",ch);
	printf("%p \n",pc);
	printf("%p \n",&ch);
	printf("%d\n",sizeof(pc));
	return 0;
}

//int main()
//{
//	int a = 10;//int 类型的变量  4个字节的长度
//	int* p = &a;  //取地址
//	//有一种变量是用来存放地址的-指针变量
//	//*p  找到指针p所对应的变量   * 表示解引用操作符
//	/*printf("变量a的地址为 %p\n",&a);
//	printf("变量a的地址为 %p\n",p);*/
//	printf("a = %d\n",a);
//	printf("a = %d\n",*p);
//	*p = 20;
//	printf("------------\n");
//	printf("a = %d\n",a);
//	printf("a = %d\n",*p);
//	return 0;
//}

//int main()
//{
//	extern int g_val;
//	printf("g_val = %d\n",g_val);
//	return 0;
//}

//1、static修饰局部变量，局部变量的生命周期变长
//2、static修饰全局变量，改变了变量的作用域，
//让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就没法再使用了
//3、static修饰函数，也是改变了函数的作用域-不准确
//static修饰函数，改变了函数的链接属性，从外部链接属性变为了内部链接属性
//未被static修饰函数，具有外部链接属性，


//
//extern  int add(int,int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = add(a,b);
//	printf("sum = %d\n",sum);
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a = %d\n",a);
//}
//int main()
//{
//	int i = 0;
//	while(i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int add(int x,int y)
//	{
//		int z = 0;
//		z = x+y;
//		return z;
//	}
// 
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4];//[]-下标引用操作符
//
//	int a = 100;
//	int b = 20;
//
//	int sum = add(a,b);//()-函数调用操作符
//	
//	int max = 0;
//	max = (a > b ? a : b);//exp1 ? exp2 : exp3  三目操作符/条件操作符  
//	//exp表示表达式  若exp1条件成立  整体表达式 （exp1 ? exp2 : exp3）的值为 exp2； 若不成立 值为 exp3
//	printf("max = %d\n",max);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	//int c = a && b;//逻辑与
//	//int c = a & b;//按位与
//	int c = a || b;
//	printf("c = %d\n",c);
//	return 0;
//}

//int main()
//{
//	int a = /*(int)*/3.14;
//	printf("%d  ",a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	/*int b = a++;*///后置++ 先使用，再++  先将a的值赋给b，然后a再++
//	//int b = ++a;// 前置++ 先++，再使用 a先++，然后将a的值赋给b
//	//int b = a--;//后置--
//	int b = --a;// 前置--
//	printf("a = %d,b = %d\n",a,b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = ~a;// ~按（二进制）位取反
//	// a:00000000 00000000 00000000 00000000   最高位为0 表示正数
//	// b:11111111 11111111 11111111 11111111   最高位为1 表示负数
//	// 原码、反码、补码   负数在内存中存储的时候，存的是二进制的补码
//	printf("%d\n",b);
//	return 0;
//}
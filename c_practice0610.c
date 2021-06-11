#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
union u1
{
	char ch[5];
	int i;
};
union u2
{
	short s[7];
	int i;
};
int main()
{
	printf("%d\n", sizeof(union u1));
	printf("%d\n", sizeof(union u2));
	return 0;
}

//#include<stdio.h>
////联合类型的声明
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%d\n", sizeof(u.c));
//	printf("%d\n", sizeof(u.i));
//	
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}

////struct A
////{
////	int _a : 2;
////	int _b : 5;
////	int _c : 10;
////	int _d : 30;
////};
//#include<stdio.h>
//#include<stdlib.h>
//enum Day//星期
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	sun
//};
//enum sex//性别
//{
//	MALE,
//	FEMALE, 
//	SECRET
//};
//enum color//颜色--三原色 rgb
//{
//	RED=1,
//	GREEN=2,
//	BLUE=3
//};
//
//enum color//颜色
//{
//	RED = 1, GREEN = 2, BLUE = 4
//};
//
//enum color//颜色
//{
//	RED = 1,
//	GREEN = 2, 
//	BLUE = 4
//};
//enum color c1r = GREEN;//只能拿枚举常量给枚举变量赋值，才不会出现类型的差异。
//clr = 5 ;// ok ? ?
////枚举常量和常量值是有区别的，将常量直接赋值给枚举常量类型，编译器会报错或警告


//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}
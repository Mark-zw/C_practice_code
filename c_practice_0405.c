#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	//创建一个struct T 类型的结构体变量
//	//初始化的时候，成员如果是结构体，需要用{ }括起来。
//	struct T t= { "hello",{100,'w',"hello world",3.14},NULL };//指针不知道赋什么值的时候，可以赋NULL
//	struct T* pt = &t;
//	printf("%s\n", pt->ch);
//	printf("%s\n", pt->s.arr);
//	printf("%lf\n", pt->s.d);
//	printf("%p\n", pt->pc);
//
//	//printf("%s\n", t.ch);
//	//printf("%s\n", t.s.arr);//先用t.s 找到结构体类型成员 再用 .去访问结构体成员里面的成员 t.s.arr
//	//printf("%lf\n", t.s.d);
//	//printf("%p\n", t.pc);
//	return 0;
//}


//描述一个学生---一些数据
//名字、年龄、电话、性别
//struct---结构体关键字  Stu---结构体标签  struct Stu---结构体类型
typedef struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
//s1,s2,s3;//s1,s2,s3 是三个全局的结构体变量
void Print1(Stu s)
{
	printf("name:  %s\n", s.name);
	printf("age:   %d\n", s.age);
	printf("tele:  %s\n", s.tele);
	printf("sex:   %s\n", s.sex);
}
void Print2(Stu* ps)
{
	printf("name:  %s\n", ps->name);
	printf("age:   %d\n", ps->age);
	printf("tele:  %s\n", ps->tele);
	printf("sex:   %s\n", ps->sex);
}
int main()
{
	//struct Stu s;//创建结构体变量，局部结构体变量
	Stu s = {"张同学",20,"11011912011","保密"};
	Print1(s);
	Print2(&s);
	return 0;
}
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
//	//����һ��struct T ���͵Ľṹ�����
//	//��ʼ����ʱ�򣬳�Ա����ǽṹ�壬��Ҫ��{ }��������
//	struct T t= { "hello",{100,'w',"hello world",3.14},NULL };//ָ�벻֪����ʲôֵ��ʱ�򣬿��Ը�NULL
//	struct T* pt = &t;
//	printf("%s\n", pt->ch);
//	printf("%s\n", pt->s.arr);
//	printf("%lf\n", pt->s.d);
//	printf("%p\n", pt->pc);
//
//	//printf("%s\n", t.ch);
//	//printf("%s\n", t.s.arr);//����t.s �ҵ��ṹ�����ͳ�Ա ���� .ȥ���ʽṹ���Ա����ĳ�Ա t.s.arr
//	//printf("%lf\n", t.s.d);
//	//printf("%p\n", t.pc);
//	return 0;
//}


//����һ��ѧ��---һЩ����
//���֡����䡢�绰���Ա�
//struct---�ṹ��ؼ���  Stu---�ṹ���ǩ  struct Stu---�ṹ������
typedef struct Stu
{
	//��Ա����
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
//s1,s2,s3;//s1,s2,s3 ������ȫ�ֵĽṹ�����
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
	//struct Stu s;//�����ṹ��������ֲ��ṹ�����
	Stu s = {"��ͬѧ",20,"11011912011","����"};
	Print1(s);
	Print2(&s);
	return 0;
}
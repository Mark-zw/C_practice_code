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
////�������͵�����
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
//enum Day//����
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	sun
//};
//enum sex//�Ա�
//{
//	MALE,
//	FEMALE, 
//	SECRET
//};
//enum color//��ɫ--��ԭɫ rgb
//{
//	RED=1,
//	GREEN=2,
//	BLUE=3
//};
//
//enum color//��ɫ
//{
//	RED = 1, GREEN = 2, BLUE = 4
//};
//
//enum color//��ɫ
//{
//	RED = 1,
//	GREEN = 2, 
//	BLUE = 4
//};
//enum color c1r = GREEN;//ֻ����ö�ٳ�����ö�ٱ�����ֵ���Ų���������͵Ĳ��졣
//clr = 5 ;// ok ? ?
////ö�ٳ����ͳ���ֵ��������ģ�������ֱ�Ӹ�ֵ��ö�ٳ������ͣ��������ᱨ��򾯸�


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
#include<stdio.h>
#include"add1.h"
int main()
{
	int a = -16;//00000000 00000000 00000000 00010000
	int b = a << -1;// _0000000 00000000 00000000 00001000
	//_ λ�������ַ�ʽ��� 1.�������ƣ��������λ 2.�߼����ƣ�ֱ�Ӳ�0
	//ע�������洢���Ƕ����Ʋ��� ���������һ  �����Ĳ���=����+1 
	printf("%d\n",b);
	return 0;
}
//int Add1(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add1(a, b);
//	printf("%d", sum);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}

//int main()
//{
//	//printf("%d\n", strlen("abc"));
//	printf("%d", printf("%d", printf("%d"), 43));
//	return 0;
//}

//void new_line()
//{
//	printf("Hello man\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//		new_line();
//}
//int main()
//{
//	three_line();
//	return 0;
//}
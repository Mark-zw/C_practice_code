#include<stdio.h>
#include"add1.h"
int main()
{
	int a = -16;//00000000 00000000 00000000 00010000
	int b = a << -1;// _0000000 00000000 00000000 00001000
	//_ 位置有两种方式填充 1.算术右移：补充符号位 2.逻辑右移：直接补0
	//注意计算机存储的是二进制补码 正数三码合一  负数的补码=反码+1 
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
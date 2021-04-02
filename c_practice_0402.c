#include<stdio.h>


//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 5;
//	int c = a && b;
//	printf("%d\n", c);
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//int main()
//{
//	int a =(int) 3.14;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);//前置++,先++，后打印
//	//printf("%d\n", a++);//后置++,先打印，后++
//	//printf("%d\n", --a);//前置--,先--，后打印
//	printf("%d\n", a--);////后置--,先打印，后--
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int i = 11;
//	//00000000 00000000 00000000 00001011 让倒数第三位变成1，其余不变
//	//00000000 00000000 00000000 00000100  按位或  就能得到
//	//1 << 2 1左移2位得到 00000000 00000000 00000000 00000100
//
//	//int j = i | 4;
//	int j = i | (1 << 2);
//	printf("%d\n", j);
//	//将j变成原来的i  只需要按位与操作
//	//00000000 00000000 00000000 00001111
//	//11111111 11111111 11111111 11111011
//	//00000000 00000000 00000000 00001011
////而  11111111 11111111 11111111 11111011 可以由按位取反得到
////    00000000 00000000 00000000 00000100  这个数又可以通过1左移2位得到
//	j = j & (~(1 << 2));
//	printf("%d\n", j);
//	//int a = 0;
//	//printf("%d\n", ~a);
//	return 0;
//}
//int main()
//{
//	short i = 0;
//	int j = 10;
//	printf("%d\n", sizeof(i = j + 5));//sizeof计算所占空间的大小
//	//不管这里的j是什么类型  j+5的结果都是放到变量 i当中  而i又是short类型
//	//sizeof(i=j+5)等于 sizeof(i)等于sizeof(short)等于2
//	printf("%d\n", i);
//	//sizeof里面放的表达式并不会真实进行运算，只是一个摆设
//	//也就是说 i=j+5 这一步操作并未真实执行，所以i还是原来的值：0
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	char b = 'A';
//	int arr[20] = {0};
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof ( int));
//
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [20]));
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	printf("%d\n", a += 1);
//	printf("%d\n", a -= 1);
//	printf("%d\n", a *= 2);
//	printf("%d\n", a /= 2);
//	printf("%d\n", a %= 2);
//	printf("%d\n", a <<= 1);
//	printf("%d\n", a >>= 1);
//	printf("%d\n", a &= -1);
//	printf("%d\n", a |= 1);
//	printf("%d\n", a ^= 1);
//	return 0;
//}
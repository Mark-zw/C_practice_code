#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//1.编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
int main()
{
	int n = 0;
	int m = 0;
	int count = 0;
	int i = 0;
	int tmp = 0;
	scanf("%d%d", &n, &m);
	tmp = n ^ m;
	for (i = 0; i < 32; i++)
	{
		if ((1 & (tmp >> i)) == 1)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}


//int main()
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));
//	printf("%d\n", s);
//	//int a = -1 ^ -1;
//	//printf("%d\n",a);
//	////int a = 4 % -5;
//	////printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 1; i <= 2019; i++)
//    {
//        int num = i;
//        do
//        {
//            if (num % 10 == 9)
//                count++;
//        } while (num /= 10);
//    }
//    printf("%d", count);
//    return 0;
//}
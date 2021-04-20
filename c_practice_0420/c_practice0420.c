#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//*
// *
//  *
//   *

//    *
//  **
//***
//  **
//    *

//  *
// * *
//* * *
// * *
//  *
//int main()
//{
//    int line = 0;
//    int i = 0;
//    while (scanf("%d", &line) != EOF)
//    {
//        getchar();
//        for (i = 0; i < line + 1; i++)//上半部分
//        {
//            int j = 0;
//            for (j = 0; j < line + 1 - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (i = 0; i < line; i++)//下半部分
//        {
//            int j = 0;
//            for (j = 0; j < i + 2; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//    return 0;
//}


//* * * * *
// * * * *
//  * * *
//   * *
//    *

//   * 
//  * *
// * * *
//* * * *
//int main()
//{
//    int line = 0;
//    int i = 0;
//    while ((scanf("%d", &line)) != EOF)
//    {
//        getchar();
//        for (i = 0; i < line; i++)
//        {
//            int j = 0;
//            for (j = 0; j < line - 1 - i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//    *
//   ***
//  *****
// *******
//*********
// *******
//  *****
//   ***
//    *
//int main()
//{
//    int line = 0;
//	int i = 0;
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)//打印菱形上半部分
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)//先打印空格 
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i - 1; j++)//然后打印*
//		{
//			printf("*");
//		}
//		printf("\n");//打印换行
//	}
//	for (i = 0; i < line - 1; i++)//打印菱形下半部分
//	{
//		int j = 0;
//		for (j = 0; j < i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < (line - 1 - i) * 2 - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int sum = 0;
//		//判断i是否为自幂数
//		int count = 1;
//		int temp = i;
//		//1.计算i的位数
//		while (temp/=10)
//		{
//			count++;
//		}
//		//2.获得i的每一位，计算每一位的n次方和
//		temp = i;
//		while (temp)
//		{
//			sum += pow(temp % 10, count);
//			temp /= 10;
//		}
//		//3.比较并打印
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(pa+i));
//		//pa++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int j = 2;
//	int k = 0;
//	i--&& j++&& k++;
//	//从左往右依次计算，虽然不返回实际的运算结果
//	//1-- = 0  ，2++ =3，0++=1 
//	printf("%d %d %d", i, j, k);
//}

//int main()
//{
//	float f = 5.5f;//不加f，默认存储double类型
//	//5.5
//	//101.1
//	//1.011*2^2
//	//float类型 首位bit存符号，0表示正式，1表示负数  中间8位存指数位(+127)
//	//后面23位存有效位 (-1)^0*1.011*2^2
//	//0 10000001 011 0000000000 0000000000
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//40 b0 00 00  F10调试查看内存监视 
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 9;
//	//00000000 00000000 00000000 00001001
//	float* pFloat = (float*)&n;
//	//*pFloat---是以浮点数的视角去访问n的四个字节，就会认为n的4个字节中放的是浮点数
//	// 0 00000000 00000000 00000000 0001001
//	// (-1)^0*2^(-126)*0.00000000 00000000 0001001  无穷小的数字
//	//0.000000 打印结果小数点及其后六位（精度）
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//
//	*pFloat = 9.0;
//	//*pFloat是以浮点数的视角观察n的4个字节的
//	//以浮点数的形式存储9.0
//	//1001.0    (-1)^0*1.001*2^3    3+127 = 130 --- 10000010
//	// 0 10000010 001 0000000000 0000000000
//	//01000001 00010000 00000000 00000000  以整型视角看待这个数，得到的结果就是：
//	//1,091,567,616
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}
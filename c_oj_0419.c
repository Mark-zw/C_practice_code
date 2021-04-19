#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int check_sys(int a)
{
	char* p =(char*) &a;
	return *p;
}
int main()
{
	//写一个代码，判断当前机器采用大端还是小端
	int a = 1;
	// 0x 00 00 00 01  ---16进制显示
	// 低    高   小端
	//    01 00 00 00
	// 高     低  大端
	//    00 00 00 01 
	//int ret = check_sys(a);
	char* p = (char*)&a;
	if (*p == 1)
		printf("小端字节序\n");
	else
		printf("大端字节序\n");

	return 0;
}

//int main()
//{
//	int c = 0x11223344;
//	int b = -1;
//	//10000000 00000000 00000000 00000001 - 原码
//	//11111111 11111111 11111111 11111110 - 反码
//	//11111111 11111111 11111111 11111111 - 补码
//	// 
//	//10000000 00000000 00000000 00000000 - 取反
//	//10000000 00000000 00000000 00000001 -  +1
//	//
//	//11111111 11111111 11111111 11111110 -  -1
//	//10000000 00000000 00000000 00000001 - 取反
//	//   
//	//ff ff ff ff - 十六进制显示形式
//	int a = 3;
//	//00000000 00000000 00000000 00000011 - 原码、反码、补码
//	//0000 0000 0000 0000 0000 0000 0000 0000 0000 0011
//	//0     0     0    0    0     0    0    0   0    3
//	// 00 00 00 03 
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while ((scanf("%d", &n)) != EOF)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n - i - 1; j++)
//            {
//                printf("  ");
//            }
//            for (j = 0; j < i + 1; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    int i = 0;
//    while ((scanf("%d", &n)) != EOF)
//    {
//        for (i = 0; i < n; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//int main()
//{
//    int year = 0;
//    int month = 0;
//    int count = 0;
//    while ((scanf("%d %d", &year, &month)) != EOF)
//    {
//        count = 0;
//            getchar();//读取多余的\n
//        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)//闰年判断
//        {
//            count++;//闰年2月份多一天
//        }
//        switch (month)
//        {
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12:
//            printf("%d\n", 31);
//            break;
//        case 4:
//        case 6:
//        case 9:
//        case 11:
//            printf("%d\n", 30);
//            break;
//        case 2:
//            printf("%d\n", 28 + count);
//            break;
//        default:
//            break;
//        }
//    }
//    return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int check_sys(int a)
{
	char* p =(char*) &a;
	return *p;
}
int main()
{
	//дһ�����룬�жϵ�ǰ�������ô�˻���С��
	int a = 1;
	// 0x 00 00 00 01  ---16������ʾ
	// ��    ��   С��
	//    01 00 00 00
	// ��     ��  ���
	//    00 00 00 01 
	//int ret = check_sys(a);
	char* p = (char*)&a;
	if (*p == 1)
		printf("С���ֽ���\n");
	else
		printf("����ֽ���\n");

	return 0;
}

//int main()
//{
//	int c = 0x11223344;
//	int b = -1;
//	//10000000 00000000 00000000 00000001 - ԭ��
//	//11111111 11111111 11111111 11111110 - ����
//	//11111111 11111111 11111111 11111111 - ����
//	// 
//	//10000000 00000000 00000000 00000000 - ȡ��
//	//10000000 00000000 00000000 00000001 -  +1
//	//
//	//11111111 11111111 11111111 11111110 -  -1
//	//10000000 00000000 00000000 00000001 - ȡ��
//	//   
//	//ff ff ff ff - ʮ��������ʾ��ʽ
//	int a = 3;
//	//00000000 00000000 00000000 00000011 - ԭ�롢���롢����
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
//            getchar();//��ȡ�����\n
//        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)//�����ж�
//        {
//            count++;//����2�·ݶ�һ��
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
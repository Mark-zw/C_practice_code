#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
int main() 
{
    int n = 0;
    scanf("%d", &n);

    //���������鲢�����ʼ��
    int a[40] = { 0 };
    for (int i = 0; i < n; ++i) 
    {
        scanf("%d", &a[i]);
    }

    int m = 0, index = 0;
    //��ѭ���������ɸѡ��ÿ��ɸѡ����ǰ������ֵ
    for (int i = 0; i < 5; ++i) 
    {
        //��ѭ�����������е���ֵ����������ȵ�ǰ�������ֵ�򱣴�����
        for (int j = 0; j < n; ++j) 
        {
            if (a[j] > m) 
            {
                m = a[j];
                index = j;
            }
        }
        //����������㣬��ֹ��������Ȼ�������ǰ���ֵ
        a[index] = 0;
        printf("%d ", m);
        m = 0;
    }
    return 0;
}

//#include<stdio.h>
//int main()
//{
//    int line = 0;
//    int i = 0;
//    while (scanf("%d", &line) != EOF)
//    {
//        printf("* ");
//        printf("\n");
//        for (i = 0; i < line - 2; i++)
//        {
//            int j = 0;
//            printf("* ");
//            for (j = 0; j < 2 * i; j++)
//            {
//                printf(" ");
//            }
//            printf("* ");
//            printf("\n");
//        }
//        for (i = 0; i < line; i++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int line = 0;
//    int i = 0;
//    while (scanf("%d", &line) != EOF)
//    {
//        int j = 0;
//        for (j = 0; j < line; j++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//        for (i = 0; i < line - 2; i++)
//        {
//            int j = 0;
//            printf("* ");
//            for (j = 0; j < (line-2)*2; j++)
//            {
//                printf(" ");
//            }
//            printf("* \n");
//        }
//        for (j = 0; j < line; j++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//*   *
// * *
//  *
// * *
//*   *

//#include<stdio.h>
//int main()
//{
//    int line = 0;
//    int i = 0;
//    while (scanf("%d", &line) != EOF)
//    {
//        for (i = 0; i < line / 2; i++)
//        {
//            int j = 0;
//            for (j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            printf("*");
//            for (j = 0; j < line - 2 * (i + 1); j++)
//            {
//                printf(" ");
//            }
//            printf("*");
//            for (j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            printf("\n");
//        }
//        for (i = 0; i < line % 2; i++)
//        {
//            int j = 0;
//            for (j = 0; j < line / 2; j++)
//            {
//                printf(" ");
//            }
//            printf("*");
//            for (j = 0; j < line / 2; j++)
//            {
//                printf(" ");
//            }
//            printf("\n");
//        }
//        for (i = 0; i < line / 2; i++)
//        {
//            int j = 0;
//            for (j = 0; j < line / 2 - i - 1; j++)
//            {
//                printf(" ");
//            }
//            printf("*");
//            for (j = 0; j < 2 * i + line % 2; j++)
//            {
//                printf(" ");
//            }
//            printf("*");
//            for (j = 0; j < line / 2 - i - 1; j++)
//            {
//                printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int line = 0;
//    int i = 0;
//    while (scanf("%d", &line) != EOF)
//    {
//        for (i = 0; i < line; i++)
//        {
//            for (j = 0; j < line - 1 - i; j++)
//            {
//                printf(" ");
//            }
//            printf("*");
//            for (j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            printf("\n");
//        }
//        int j = 0;
//
//    }
//    return 0;
//}
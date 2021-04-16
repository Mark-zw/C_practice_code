#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int i = 0;
    for (i = 10000; i < 99999; i++)
    {
        if (i == ((i / 10000) * (i % 10000) + (i / 1000) * (i % 1000) + (i / 100) * (i % 100) + (i / 10) * (i % 10)))
        {
            printf("%d ", i);
        }
    }
    return 0;
}

//void swap(int* p1, int* p2)
//{
//	if ((*p1) < (*p2))
//	{
//		int temp = *p1;
//		*p1 = *p2;
//		*p2 = temp;
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	swap(&a, &b);
//	swap(&a, &c);
//	swap(&b, &c);
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//    int n = 0;
//    int ret = 0;
//    scanf("%d", &n);
//    //ret = 2 << (n-1);
//    ret = 1 << n;
//    printf("%d", ret);
//    return 0;
//}
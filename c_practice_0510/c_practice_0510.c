#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include<stdio.h>
int main()
{
	void swap(int* p1, int* p2);
	int a, b;
	int* pointer_1, * pointer_2;
	printf("piease enter a and b:");
	scanf("%d,%d", &a, &b);
	pointer_1 = &a;
	pointer_2 = &b;
	if (a < b) swap(pointer_1, pointer_2);
	printf("max=%d,min=%d\n", a, b);
	return 0;
}
void swap(int* p1, int* p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

//printN打印1-N的数字
//void printN(int n)//循环实现
//{
//	int i = 0;
//	for (i = 0; i <= n; i++)
//	{
//		printf("%d ", i);
//	}
//}
//void printN(int n)//递归实现
//{
//	if (n)
//	{
//		printN(n - 1);
//	}
//	printf("%d ", n);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printN(n);
//	return 0;
//}

//#include <stdio.h>
//
//#define MAXN 10
//typedef float ElementType;
//
//ElementType Max(ElementType S[], int N);
//
//int main()
//{
//    ElementType S[MAXN];
//    int N, i;
//
//    scanf("%d", &N);
//    for (i = 0; i < N; i++)
//        scanf("%f", &S[i]);
//    printf("%.2f\n", Max(S, N));
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//ElementType Max(ElementType S[], int N)
//{
//    int i = 0;
//    ElementType max = 0;
//    max = S[0];
//    for (i = 1; i < N; i++)
//    {
//        if (S[i]- S[i - 1] > 0)
//        {
//            max = S[i];
//        }
//    }
//    return max;
//}


//#define MAXN 10
//typedef float ElementType;
//
//ElementType Average(ElementType S[], int N);
//
//int main()
//{
//    ElementType S[MAXN];
//    int N, i;
//
//    scanf("%d", &N);
//    for (i = 0; i < N; i++)
//        scanf("%f", &S[i]);
//    printf("%.2f\n", Average(S, N));
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//ElementType Average(ElementType S[], int N)
//{
//    int i = 0;
//    ElementType avg = 0.0;
//    ElementType sum = 0.0;
//    for (i = 0; i < N; i++)
//    {
//        sum += S[i];
//    }
//    avg = sum / N;
//    return avg;
//}

//#include<stdio.h>
//#include<math.h>
//#define MAXN 10
//double f(int n, double a[], double x);
//int main()
//{
//    int n, i;
//    double a[MAXN], x;
//
//    scanf("%d %lf", &n, &x);
//    for (i = 0; i <= n; i++)
//        scanf("%lf", &a[i]);
//    printf("%.1f\n", f(n, a, x));
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//double f(int n, double a[], double x)
//{
//    int i = 0;
//    double sum = 0;
//    for (i = 0; i <= n; i++)
//    {    
//        sum += a[i] * pow(x, i);
//    }
//    return sum;
//}
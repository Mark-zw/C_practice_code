#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Max(ElementType S[], int N);

int main()
{
    ElementType S[MAXN];
    int N, i;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%f", &S[i]);
    printf("%.2f\n", Max(S, N));

    return 0;
}

/* 你的代码将被嵌在这里 */
ElementType Max(ElementType S[], int N)
{
    int i = 0;
    ElementType max = 0;
    max = S[0];
    for (i = 1; i < N; i++)
    {
        if (S[i]- S[i - 1] > 0)
        {
            max = S[i];
        }
    }
    return max;
}


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
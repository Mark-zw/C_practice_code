#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	double i = 0,j = 0,k = 0;
	int p = 1;
	int n = 0;
	printf("请输入一个正奇数用来求其前几项分数式之和：>>\n");
	scanf("%d",&n);
	for(i = 1.0;i<=n;i+=2)
	{
		j = (1/i)*p;
		k = k+j;
		p = -p;
	}
    printf("sum = %lf\n",k);
	return 0;
}


//int main()
//{
//	double i = 0,j = 0,k = 0;
//	int n = 0;
//	printf("请输入一个正奇数用来求其前几项分数式之和：>>\n");
//	scanf("%d",&n);
//	for(i = 1.0;i<=n;i+=2)
//	{
//		j = (1/i);
//		k = k+j;
//	}
//    printf("sum = %lf\n",k);
//	return 0;
//}

//int main()
//{
//	double i = 0,j = 0,k = 0;
//	int p = 1;
//	int n = 0;
//	printf("请输入一个正整数用来求其前几项分数式之和：>>\n");
//	scanf("%d",&n);
//	for(i = 1.0;i<=n;i++)
//	{
//		j = (1/i)*p;
//		k = k+j;
//		p = -p;
//	}
//    printf("sum = %lf\n",k);
//	return 0;
//}


//int main()
//{
//	double i = 0,j = 0,k = 0;
//	int n = 0;
//	printf("请输入一个正整数用来求其前几项分数式之和：>>\n");
//	scanf("%d",&n);
//	for(i = 1.0;i<=n;i++)
//	{
//		j = (1/i);
//		k = k+j;
//	}
//    printf("sum = %lf\n",k);
//	return 0;
//}

//int main()
//{
//	double i = 0,j = 0,k = 0;
//	int p = 1;
//	for(i = 1.0;i<=100;i++)
//	{
//		j = (1/i)*p;
//		k = k+j;
//		p = -p;
//	}
//	printf("sum = %lf\n",k);
//	return 0;
//}

//int main()
//{
//	double i = 0,j = 0,k = 0;
//	for(i = 1.0;i<=100;i++)
//	{
//		j = 1/i;
//		k = k+j;
//	}
//	printf("sum = %lf\n",k);
//	return 0;
//}
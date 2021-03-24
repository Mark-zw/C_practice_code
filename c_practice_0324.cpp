#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<math.h>
//练习1.写一个函数可以判断一个数是不是素数
void Judnt_prime(int x)
{
	int i = 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (!(x % 2))
			break;
	}
	if (i > sqrt(x))
		printf("%d是素数\n",x);
	else
		printf("%d不是素数\n",x);
}
int main()
{
	int n = 0;
	printf("请输入一个正整数:>>\n");
	scanf("%d", &n);
	Judnt_prime(n);
	return 0;
}


//当实参传给形参的时候
// 形参其实是实参的一份临时拷贝
// 对形参的修改是不会改变实参的
//2.交换函数
//void Swap1(int x, int y)//有问题，值交换不过去 x y有独立的空间
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}
//void Swap2(int* pi, int* pj)//正确，通过指针间接操控主函数中的i，j进行值互换
//{
//	int temp = 0;
//	temp = *pi;
//	*pi = *pj;
//	*pj = temp;
//}
//int main()
//{
//	int i = 100;
//	int j = 200;
//	printf("i = %d,j = %d\n", i, j);
//    //Swap1(i, j);
//	Swap2(&i, &j);
//	printf("i = %d,j = %d\n", i, j);
//	return 0;
//}

//函数 1.加法函数
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum=Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//在屏幕上面打印9*9的乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("%d*%d = %-2d  ", i, j, j * i);
//		printf("\n");
//		Sleep(1000);
//	}
//	return 0;
//}

//求最大值
//int main()
//{
//	int arr[] = { 1,3,5,2,6,22,21,53,11,25 };//考虑将最大值存到a[0]
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (max< arr[i])
//			max = arr[i];
//	}
//	printf("最大值：%d\n", max);
//	return 0;
//}


////求分数的和
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double sum = 0;
//	for(i=1;i<=100;i++)
//	{
//		sum = sum+(1.0/i)*flag;
//		flag=-flag;
//	}
//	printf("sum = %lf\n",sum);
//	return 0;
//}
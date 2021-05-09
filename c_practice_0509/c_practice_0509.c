#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//#include<math.h>
////3.求出0～100000之间的所有“水仙花数”并输出。
////“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//int Narciss_Number(int i)//判断是否为水仙花数，是-1 否-0
//{
//	//1.判断n位数
//	int tmp = i;
//	int count = 1;
//	int sum = 0;
//	while (tmp /= 10)
//	{
//		count++;
//	}
//	tmp = i;
//	//2.判断各位数字n次方之和是否等于该数本身
//	while (tmp)
//	{
//		sum += pow(tmp % 10, count);
//		tmp /= 10;
//	}
//	if (sum == i)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		ret = Narciss_Number(i);
//		if (ret == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////2.求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
////例如：2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int i = 0;
//	int m = 0;
//	int Sn = 0;
//	scanf("%d%d", &n,&k);
//	for (i = 0; i < k; i++)
//	{
//		m = m * 10 + n;
//		Sn += m;
//	}
//	printf("Sn = %d\n", Sn);
//	return 0;
//}


////1.写一个函数打印arr数组的内容，不使用数组下标，使用指针。
////arr是一个整形一维数组。
//void print_arr(int* pa, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr,sz);
//	return 0;
//}

#include<stdio.h>
//不创建临时变量实现两个数的交换
int main()
{
	int a = 3;
	int b = 5;
	printf("before swap:a = %d,b = %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("after swap:a = %d,b = %d", a, b);
	return 0;
}

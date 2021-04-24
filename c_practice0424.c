#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//调整奇数位于偶数前面
void my_move(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;
	while (left < right)
	{
		while ((left < sz) && (arr[left] % 2 != 0))
		{
			left++;
		}
		while ((right > 0) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}	
	}
}
void my_print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_print(arr, sz);//打印数组元素
	my_move(arr,sz);//函数实现奇数调整到偶数前面
	my_print(arr, sz);//打印数组元素
	return 0;
}

//int main()
//{
//	int money = 0;//购买汽水的钱
//	int total = 0;//总空瓶数
//	int empty = 0;//新增空瓶数
//	scanf("%d", &money);//输入money值
//	if (money == 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = money * 2 - 1;
//	}
//
//	/*total += money;
//	empty = total;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}*/
//	printf("total = %d\n", total);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//调整奇数偶数顺序，奇数位于偶数前面
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	//int arr[] = { 1,3,5,7,9 };
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("before revision: ");
//	print(arr, sz);
//	move(arr,sz);
//	printf("after revision: ");
//	print(arr,sz);
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	if (0 == money)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = 2 * money - 1;
//	}
//
//	//total = money;
//	//empty = total;
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	printf("total = %d\n", total);
//	return 0;
//}


//打印菱形
//int main()
//{
//	int i = 0;
//	//int n = 7;
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		getchar();
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n - 1 - i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < 2 * i + 1; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		for (i = 0; i < n - 1; i++)
//		{
//			for (j = 0; j < i + 1; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < 2 * (n - 1 - i) - 1; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}	
//	return 0;
//}


//#include<math.h>
////判断某一个数是否为自幂数
////1.计算这个数各个位数及n位数  除以10，商不为0，进一
////2.计算这个数每一位的n次方之和 sum
////3.比较i == sum
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//i = 123
//		//1.要知道i是n位数---位数
//		//一般判断一个数是多少位的时候，我们会想要进制，10进制的数，除以10不等于0则位数+1，起始基数为1
//		int n = 1;//用来保存i的位数
//		int tmp = i;//用tmp代替i，保证循环内部循环变量不变。
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.计算i的各个位数的n次幂之和sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.比较i == sum 得出结论
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	int Sn = 0;
//	scanf("%d%d", &a,&n);
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		Sn += ret;
//	}
//	printf("Sn = %d\n", Sn);
//	return 0;
//}

//#include<string.h>
//#include<stdio.h>
//void reverse(char* arr)
//{
//	int len = strlen(arr);
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void print(char* arr)
//{
//	int len = strlen(arr);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	//char arr[] = "abcdef";
//	char arr[256];
//	scanf("%s", arr);
//	printf("before reverse:");
//	print(arr);
//	reverse(arr);
//	printf("after reverse:");
//	print(arr);
//	return 0;
//}
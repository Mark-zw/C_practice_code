#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//��������ż��˳������λ��ż��ǰ��
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


//��ӡ����
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
////�ж�ĳһ�����Ƿ�Ϊ������
////1.�������������λ����nλ��  ����10���̲�Ϊ0����һ
////2.���������ÿһλ��n�η�֮�� sum
////3.�Ƚ�i == sum
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//i = 123
//		//1.Ҫ֪��i��nλ��---λ��
//		//һ���ж�һ�����Ƕ���λ��ʱ�����ǻ���Ҫ���ƣ�10���Ƶ���������10������0��λ��+1����ʼ����Ϊ1
//		int n = 1;//��������i��λ��
//		int tmp = i;//��tmp����i����֤ѭ���ڲ�ѭ���������䡣
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.����i�ĸ���λ����n����֮��sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.�Ƚ�i == sum �ó�����
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
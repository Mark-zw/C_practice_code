#define _CRT_SECURE_NO_WARNINGS 1 

////����һ�������ȽϷ�
//#include<stdio.h>
//int main()
//{
//	int arr[50] = { 0 };
//	int num = 0;
//	int i = 0;
//	int insert_num = 0;
//	int flag = 0;
//	scanf("%d", &num);
//	for (i = 0; i < num; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &insert_num);
//	for (i = 0; i < num; i++)
//	{
//		if (arr[i] > insert_num)
//		{
//			int j = 0;
//			for (j = num ; j > i; j--)
//			{
//				arr[j] = arr[j - 1];
//			}
//			arr[j] = insert_num;
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		arr[num] = insert_num;
//	}
//	for (i = 0; i < num + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////�����������ֲ��ҷ�
//#include<stdio.h>
//int main()
//{
//	int arr[50] = { 0 };
//	int num = 0;
//	int i = 0;
//	int insert_num = 0;
//	int flag = 0;
//	int left = 0;
//	int right = 0;
//	scanf("%d", &num);
//	for (i = 0; i < num; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	right = num - 1;
//	scanf("%d", &insert_num);
//	while (left < right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < insert_num)
//		{
//			left = mid;
//		}
//		else
//		{
//			right = mid;
//		}
//		if ((arr[mid] < insert_num) && (arr[mid + 1] > insert_num))
//		{
//			int j = 0;
//			for (j = num; j > mid + 1; j--)
//			{
//				arr[j] = arr[j - 1];
//			}
//			arr[j] = insert_num;
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		arr[num] = insert_num;
//	}
//	for (i = 0; i < num + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////�������������ȽϷ�
//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	int sum = 0;
//	int min = 0;//�������ֵ
//	int max = 0;//������ֵ
//	double avg = 0;
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &input);
//		if (i == 0)
//		{
//			min = max = input;
//			sum += input;
//		}
//		else
//		{
//			if (input < min)
//			{
//				min = input;
//			}
//			if (input > max)
//			{
//				max = input;
//			}
//			sum += input;
//		}
//	}
//	avg = (sum - min - max) / 5.0;
//	printf("%.2lf", avg);
//}

////����һ������
//#include<stdio.h>
//#define N  7
//int main()
//{
//	int arr[N] = { 0 };
//	int i = 0;
//	int sum = 0;
//	double avg = 0;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//�������С�����������
//	for (i = 0; i < N - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < N - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 1; i < 6; i++)
//	{
//		sum += arr[i];
//	}
//	avg = sum / 5.0;
//	printf("%.2lf", avg);
//	return 0;
//}

////���������Խ��ߴ�ӡ��
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		//��i == j �� i + j == n -1ʱ��ӡ*,�����ӡ�ո�
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if ((i == j) || ((i + j) == n - 1))
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");//����
//		}
//	}
//	return 0;
//}

////����һ������ɨ�跨
//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	while (scanf("%d", &line) != EOF)
//	{
//		//getchar();
//		//1.�ȴ�ӡ�ϰ벿��
//		int i = 0;
//		for (i = 0; i < line / 2; i++)
//		{
//			//(1)�ȴ�ӡ�ո�
//			int j = 0;
//			for (j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//			//(2)�ٴ�ӡ*
//			printf("*");
//			//(3)�ٴ�ӡ�ո�
//			for (j = 0; j < line - 2 - 2 * i; j++)
//			{
//				printf(" ");
//			}
//			//(4)��ӡ*
//			printf("*");
//			//(5)��ӡ�ո�
//			for (j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//			//(6)��ӡ����
//			printf("\n");
//		}
//		//2.���lineΪ����������ӡһ��
//		if (line % 2 == 1)
//		{
//			//(1)�ȴ�ӡ�ո�
//			for (i = 0; i < line / 2; i++)
//			{
//				printf(" ");
//			}
//			//(2)��ӡ*
//			printf("*");
//			//(3)��ӡ�ո�
//			for (i = 0; i < line / 2; i++)
//			{
//				printf(" ");
//			}
//			//(4)��ӡ����
//			printf("\n");
//		}
//		//3.�ٴ�ӡ�°벿��
//		for (i = 0; i < line / 2; i++)
//		{
//			int j = 0;
//			//(1)�ȴ�ӡ�ո�
//			for (j = 0; j < line / 2 - 1 - i; j++)
//			{
//				printf(" ");
//			}
//			//(2)��ӡ*
//			printf("*");
//			//(3)��ӡ�ո�
//			for (j = 0; j < line % 2 + 2 * i; j++)
//			{
//				printf(" ");
//			}
//			//(4)��ӡ*
//			printf("*");
//			//(5)��ӡ�ո�
//			for (j = 0; j < line / 2 - 1 - i; j++)
//			{
//				printf(" ");
//			}
//			//(6)��ӡ����
//			printf("\n");
//		}
//	}
//	return 0;
//}
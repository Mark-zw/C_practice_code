#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

//6.��д������һ���������������в��Ҿ����ĳ����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int input = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	printf("������Ҫ���ҵ����֣�>>\n");
//	scanf("%d", &input);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (input > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (input < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("���Ҳ�����Ӧ������\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
////5.����ϿεĲ�������Ϸ
//void menu()
//{
//	printf("*********************\n");
//	printf("*****   1.play  *****\n");
//	printf("*****   0.exit  *****\n");
//	printf("*********************\n");
//}
//void game()
//{
//	int guess = 0;//�����������ģ��µģ�����
//	int ret = 0;//��������һ�������
//	ret = rand() % 100 + 100;//����100-200֮��������
//	printf("������֣�>>\n");
//	scanf("%d", &guess);
//	while (1)
//	{
//		if (guess > ret)
//		{
//			printf("�´���,�����²£�>>\n");
//			scanf("%d", &guess);
//		}
//		else if (guess < ret)
//		{
//			printf("��С��,�����²£�>>\n");
//			scanf("%d", &guess);
//		}
//		else
//		{
//			printf("��������¶��ˣ�congratulations��\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned)time(NULL));
//	int input = 0;
//	do
//	{ 
//	 menu();
//	 printf("��ѡ���Ƿ�����Ϸ��>>\n");
//	 scanf("%d", &input);
//	 switch (input)
//	 {
//	 case 1:
//		 game();
//		 break;
//	 case 0:
//		 printf("�˳���Ϸ\n");
//		 break;
//	 default:
//		 printf("ѡ�����\n");
//	 }
//	} 	while (input);
//	return 0;
//}

//4.����Ļ�����9*9�˷��ھ���
//����һ  ����˷��ھ���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %2d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//������  ����˷��ھ���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 9; i > 0; i--)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %2d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////3.��10 �����������ֵ
//int main()
//{
//	int arr[10] = { 2,3,4,8,7,1,10,9,6,5 };
//	int i = 0;
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

////2������1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ����ӡ�����
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;//�������Ʒ���ǰ���������
//	for (i = 1.0; i <= 100; i++)
//	{
//		sum += (1.0/ i) * flag;
//		flag = -flag;
//	}
//	printf("sum = %lf\n", sum);
//	return 0;
//}

//1����д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;//����ͳ�Ƴ���9�ĸ���
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//��¼��λ��Ϊ9�ĸ���
//		{
//			count++;
//		}
//		if (i / 10 == 9)//��¼ʮλ��Ϊ9�ĸ���
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}
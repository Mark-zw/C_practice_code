#define _CRT_SECURE_NO_WARNINGS 1 
//��д���򣬽�һ��2��3�Ķ�ά�����С��л�����������һ��3��2�Ķ�ά�����С�
//��˵����2��3��ά�������ֵ���Գ�ʼ����ֵ��Ҳ����ͨ���������뷽ʽʵ�֣�

#include<stdio.h>
int main()
{
	int arr1[2][3] = { 1,1,2,3,5,8 };
	int arr2[3][2] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			arr2[i][j] = arr1[j][i];
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
}


//��һ���Ѿ��ź��������a[11] = { 1,5,6,7,13,22,27,37,38,45 }��
//���ʵ�֣�����һ������Ҫ��ԭ����������ɽ������������У���������������顣

//#include<stdio.h>
//void NewSort(int a[11], int n)
//{
//	int j = 0;
//	for (j = 0; j < 11; j++)
//	{
//		if (a[j] > n)
//		{
//			int k;
//			for (k = 11 - 2; k >= j; k--)
//			{
//				a[k + 1] = a[k];
//			}
//			a[j] = n;
//			break;
//		}
//	}
//}
//int main()
//{
//	int a[11] = { 1,5,6,7,13,22,27,37,38,45 };
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	NewSort(a, n);
//	for (i = 0; i < 11; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//1. ��һ�ֶκ�����y=f(x)����x<5ʱ��y=x-9��
//��x���ڵ���5��С��15ʱ��y=5x-3;
//��x���ڵ���15ʱ��y=6x+9;
//��������һ��x��ֵ������������y��ֵ��
//#include<stdio.h>;
//int main()
//{
//	double x, y;
//	scanf("%lf", &x);
//	if (x < 5)
//	{
//		y = x - 9;
//	}
//	else if (x >= 5 && x < 15)
//	{
//		y = 5 * x - 3;
//	}
//	else
//	{
//		y = 6 * x + 9;
//	}
//	printf("%lf", y);
//}
//���ʵ�ֵݹ鷽����5!
//#include<stdio.h>
//int fun(int n)
//{
//	if (n <= 1)
//		return 1;
//	return n * fun(n - 1);
//}
//int main()
//{
//	int n = 5;
//	int ret = fun(n);
//	printf("%d", ret);
//	return 0;
//}

//��̽���һ���������������������ѧ�������ݣ��������һ��ѧ����������Ϣ��
//�ٶ�ѧ�����ݽṹ��ֻ��ѧ�š��������ɼ�����ɱ�дһ����������ĺ���creat()��
//�������ж���ṹ�����ͣ�

//#include<stdio.h>
//typedef struct Stu
//{
//	char _name[20];
//	int _number[15];
//	float _score;
//}Stu;
//
//typedef struct LinkList
//{
//	Stu _data;
//	LinkList* next;
//}LinkList;
//
//LinkList* creat()
//{
//	LinkList* ptm = (LinkList*)malloc(sizeof(LinkList) * 3);
//	if (ptm == NULL)
//	{
//		printf("Malloc failed!\n");
//		return NULL;
//	}
//	else
//	{
//		LinkList* pLink = ptm;
//		pLink->_data = { "zhangsan", {1,1,2,3,5,8,1,3},97.5 };
//	}
//
//}
//int main()
//{
//	LinkList* p = creat();
//	return 0;
//}
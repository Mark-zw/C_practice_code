#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<math.h>
//��ϰ1.дһ�����������ж�һ�����ǲ�������
void Judnt_prime(int x)
{
	int i = 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (!(x % 2))
			break;
	}
	if (i > sqrt(x))
		printf("%d������\n",x);
	else
		printf("%d��������\n",x);
}
int main()
{
	int n = 0;
	printf("������һ��������:>>\n");
	scanf("%d", &n);
	Judnt_prime(n);
	return 0;
}


//��ʵ�δ����βε�ʱ��
// �β���ʵ��ʵ�ε�һ����ʱ����
// ���βε��޸��ǲ���ı�ʵ�ε�
//2.��������
//void Swap1(int x, int y)//�����⣬ֵ��������ȥ x y�ж����Ŀռ�
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}
//void Swap2(int* pi, int* pj)//��ȷ��ͨ��ָ���Ӳٿ��������е�i��j����ֵ����
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

//���� 1.�ӷ�����
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

//����Ļ�����ӡ9*9�ĳ˷��ھ���
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

//�����ֵ
//int main()
//{
//	int arr[] = { 1,3,5,2,6,22,21,53,11,25 };//���ǽ����ֵ�浽a[0]
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (max< arr[i])
//			max = arr[i];
//	}
//	printf("���ֵ��%d\n", max);
//	return 0;
//}


////������ĺ�
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
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
static int a = 2021;



//��������һ��>3�������� ->i������һ����2��ʼ�ı��� int j=2,��j��2������i-1 
//�����ڼ� ��i%j,�������������Ϊ0����� ����i�����������������iΪ����  
// ����һ������z�����洢 ���������ĸ���  ��z = 0 ���� ����Ϊ���� 
// 2.�ж���������Ĵ���3���������Ƿ�Ϊ����
//int main()
//{
//	int i = 0;
//	int j = 2;
//	int z = 0;
//	printf("please input a integer bigger than 3\n");
//	scanf("%d",&i);
//	while(j<i)
//	{
//		if(i%j == 0)
//		{
//			z = z+1;
//		}
//		j++;
//	}
//	if(z == 0)
//	{
//		printf("%d is a prime number.\n",i);
//	}
//	else
//	{
//		printf("%d is not a prime number.\n",i);
//	}
//	return 0;
//}

//int main()
//{
//    int sign = 1;
//    double sum = 1;
//    double term = 1;
//    double deno = 2;
//    while(deno <= 100)
//    {
//        sign = (-1) *sign;
//        term = sign*(1/deno);// �������� denoΪ���� (1/deno) Ϊ��  ���Խ����ʽ1  ��deno��int���͸�Ϊ double����   �ɹ�
//        sum = sum + term;
//        deno++;
//    }
//    printf("sum = %lf \n",sum);
//	printf("deno = %lf \n",deno);
//    return 0;
//}
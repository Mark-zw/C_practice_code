#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//1.���϶�ת��Ϊ���϶�
//int main()
//{
//	double x = 0;//�洢���϶�
//	double y = 0;//�洢���϶�
//	printf("�����뻪�϶�:>>\n");
//	scanf("%lf", &x);
//	y = (x - 32) / 1.8;
//	printf("ת�������϶�Ϊ��%lf\n",y);
//	return 0;
//}
// 
//2.��������Ϣ ��1000Ԫ,���һ�ꡣ��3�ַ�����ѡ:
//(1)����,������Ϊrl;(2)һ���ڶ���,������Ϊr2;(3)�����ΰ��궨��,������Ϊr3��
//��ֱ�����һ���3�ַ������õ��ı�Ϣ�͡�r1=0.0036   r2=0.0225  r3=0.0198 
int main()
{
	double i = 1000;//����
	double r1 = 0.0036;
	double r2 = 0.225;
	double r3 = 0.0198;
	double p1 = i * (1 + r1);
	double p2 = i * (1 + r2);
	double p3 = i * (1 + r3 / 2) * (1 + r3 / 2);
	printf("p1 = %lf,p2 = %lf,p3 = %lf\n", p1, p2, p3);
	return 0;
}
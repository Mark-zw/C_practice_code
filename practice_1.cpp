//#include<stdio.h>
// int main()
//{
	//1.����"This is a C program"
	/*printf("// /* This is a C program.\n");*/

	//2.����������֮��
	/*int a = 0;
	int b = 0;
	int c = 0;
	int sum = 0;
	printf("��������������\n");
	scanf("%d%d%d",&a,&b,&c);
	sum = a+b+c;
	printf("%d+%d+%d = %d\n",a,b,c,sum);*/

	//3.�����������еĽϴ���
	//way1:���������������洢�ϴ�ֵ
	/*int a = 1;
	int b = 2;
	int max = 0;
	if(a>b)
		max = a;
	else
		max = b;
	printf("%d��%d֮��ϴ���Ϊ��%d\n",a,b,max);*/

	//way2:��������������
	/*int a = 1;
	int b = 2;
	if(a>b)
		printf("%d��%d֮��ϴ���Ϊ��%d\n",a,b,a);
	else
		printf("%d��%d֮��ϴ���Ϊ��%d\n",a,b,b);*/

	//way3:�Ƚ������������������ֵ��С������ϴ�ֵ����Сֵ
	/*int a = 0;
	int b = 0;
	printf("��������������\n");
	scanf("%d%d",&a,&b);
	if(a>b)
		printf("�ϴ�ֵΪ��%d\n",a);
	else
		printf("�ϴ�ֵΪ��%d\n",b);*/

	//way4
	/*int max(int x,int y);
	int a,b,c;
	scanf("%d%d",&a,&b);
	c = max(a,b);
	printf("max = %d\n",c);*/

	//4.��� "Hello World!"
	/*printf("Hello World!\n");*/

	//5.����ض�ͼ��
	/*printf("*****\n");
	printf("  *****\n");
	printf("    *****\n");
	printf("      *****\n");*/

	//6.����a,b,c����ֵ������������ֵ
	//way1
//	int a,b,c;
//	int max = 0;
//	printf("��������������ֵ\n");
//	scanf("%d%d%d",&a,&b,&c);
//	if(a>b)
//		max = a;
//	else
//		max = b;
//	if(max>c)
//		printf("���ֵΪ��%d\n",max);
//	else
//	{
//		max = c;
//		printf("���ֵΪ��%d\n",max);
//	}
//	return 0;
//}
 //int max(int x,int y)
 //{
	// int z;
	// if(x>y)
	//	 z = x;
	// else
	//	 z = y;
	// return z;
 //}
   //way2
#include<stdio.h>
int main()
{
	int a,b,c;
	int max = 0;//max���ڴ洢���ֵ����ȻҲ���Խ����ֵ�浽����a��
	printf("please input three integers\n");
	scanf("%d%d%d",&a,&b,&c);
	max = a;
	if(max<b)
		max = b;
	if(max<c)
		max = c;
	printf("max is %d\n",max);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//1.��1*2*3*4*5 
	//way 1  ������ֵ
	/*int s = 1*2*3*4*5;
	printf("%d\n",s);*/

	//way 2  ����+ѭ�����
	/*int p,i;
	p = 1;
	i = 2;
	while(i<=6)
	{
		p = p*i;
		i++;
	}
	printf("1*2*3*4*5*6 = %d\n",p);*/

	//way3  ��ʽ1*3*5*7*9
	/*int p = 1;
	int i = 3;
	while(i<=9)
	{
		p = p*i;
		i = i+2;
	}
	printf("1*3*5*7*9 = %d\n",p);*/

	//����������������ֵĽ׳�
	/*int p = 1;
	int i = 2;
	int k = 0;
	printf("please input any integer(bigger than 2 and smaller than 17) to get it's factoria\n");
	scanf("%d",&k);
	while(i<=k)
	{
		p = p*i;
		i++;
	}
	printf("the factoria of %d is %d\n",k,p);*/


	return 0;
}
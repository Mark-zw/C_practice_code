#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char ch = 'a';
	char* pc = &ch;
	printf("%c \n",ch);
	printf("%p \n",pc);
	printf("%p \n",&ch);
	printf("------------\n");
	*pc = 'b';
	printf("%c \n",ch);
	printf("%p \n",pc);
	printf("%p \n",&ch);
	printf("%d\n",sizeof(pc));
	return 0;
}

//int main()
//{
//	int a = 10;//int ���͵ı���  4���ֽڵĳ���
//	int* p = &a;  //ȡ��ַ
//	//��һ�ֱ�����������ŵ�ַ��-ָ�����
//	//*p  �ҵ�ָ��p����Ӧ�ı���   * ��ʾ�����ò�����
//	/*printf("����a�ĵ�ַΪ %p\n",&a);
//	printf("����a�ĵ�ַΪ %p\n",p);*/
//	printf("a = %d\n",a);
//	printf("a = %d\n",*p);
//	*p = 20;
//	printf("------------\n");
//	printf("a = %d\n",a);
//	printf("a = %d\n",*p);
//	return 0;
//}

//int main()
//{
//	extern int g_val;
//	printf("g_val = %d\n",g_val);
//	return 0;
//}

//1��static���ξֲ��������ֲ��������������ڱ䳤
//2��static����ȫ�ֱ������ı��˱�����������
//�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ���û����ʹ����
//3��static���κ�����Ҳ�Ǹı��˺�����������-��׼ȷ
//static���κ������ı��˺������������ԣ����ⲿ�������Ա�Ϊ���ڲ���������
//δ��static���κ����������ⲿ�������ԣ�


//
//extern  int add(int,int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = add(a,b);
//	printf("sum = %d\n",sum);
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a = %d\n",a);
//}
//int main()
//{
//	int i = 0;
//	while(i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int add(int x,int y)
//	{
//		int z = 0;
//		z = x+y;
//		return z;
//	}
// 
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4];//[]-�±����ò�����
//
//	int a = 100;
//	int b = 20;
//
//	int sum = add(a,b);//()-�������ò�����
//	
//	int max = 0;
//	max = (a > b ? a : b);//exp1 ? exp2 : exp3  ��Ŀ������/����������  
//	//exp��ʾ���ʽ  ��exp1��������  ������ʽ ��exp1 ? exp2 : exp3����ֵΪ exp2�� �������� ֵΪ exp3
//	printf("max = %d\n",max);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	//int c = a && b;//�߼���
//	//int c = a & b;//��λ��
//	int c = a || b;
//	printf("c = %d\n",c);
//	return 0;
//}

//int main()
//{
//	int a = /*(int)*/3.14;
//	printf("%d  ",a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	/*int b = a++;*///����++ ��ʹ�ã���++  �Ƚ�a��ֵ����b��Ȼ��a��++
//	//int b = ++a;// ǰ��++ ��++����ʹ�� a��++��Ȼ��a��ֵ����b
//	//int b = a--;//����--
//	int b = --a;// ǰ��--
//	printf("a = %d,b = %d\n",a,b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = ~a;// ~���������ƣ�λȡ��
//	// a:00000000 00000000 00000000 00000000   ���λΪ0 ��ʾ����
//	// b:11111111 11111111 11111111 11111111   ���λΪ1 ��ʾ����
//	// ԭ�롢���롢����   �������ڴ��д洢��ʱ�򣬴���Ƕ����ƵĲ���
//	printf("%d\n",b);
//	return 0;
//}
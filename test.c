#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	/*int input=0;
	printf("�������\n");
	printf("��Ҫ�ú�ѧϰ��?(��1/��0)>:");
	scanf("%d",&input);
	if(input == 1)
		printf("��offer\n");
	else
		printf("������\n");*/
	int line=0;
	printf("�������\n");
	while(line<20000)
	{
	   printf("��һ�д���:%d\n",line);
	   line++;
	}
	if(line>=20000)
	   printf("��ϲ����Եõ�һ����offer\n");
	return 0;
}
//int main()
//{
//	extern int g_val;
//	printf("%d\n",g_val);
//	return 0;
//
//}


//int main()
//{
//	{
//	int num=2;
//	printf("%d\n",num);
//	}
//	
//	
//	return 0;
//}
//int main()
//{
//	////����2�����ĺ�
//	//int num1=0;
//	//int num2=0;
//	//int sum=0;
//	////��������-ʹ�����뺯��scanf
//	//scanf("%d%d",&num1,&num2);//&ȡ��ַ����
//	//
//	//sum=num1+num2;
//	//printf("sum= %d\n",sum);
//
//	/*printf("(are you ok??)\n");*/
//	/*printf("%c\n",'\'');*/
//	/*printf("%s\n","\"");*/
//	/*printf("%d\n",strlen("c:\test\32\test.c"));*///������Ϊ13��������\t Ϊһ��ת���ַ� ����Ϊ1��\32Ҳ��һ��ת���ַ�  ����Ϊ1 ����Ϊ13
//	//\32---32��2��8�������֣�32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ��Ӧ���ַ�  --->10����Ϊ26 --->��ΪASCII��ֵ������ַ�
//	//ͨ����ѯASCII�������֪��26��Ӧ���ַ�Ϊ->
//	//ͨ����ӡ\32������֤
//	//printf("%c\n",'\?');//��� ?
//	//printf("%c\n",'\'');//��� '
//	//printf("%c\n",'\"');//��� "
//	//printf("%c\n",'\a');//��� �������� ����
//	//printf("%c\n",'\b');//�˸��
//	//printf("%c\n",'\f');//��ֽ��
//	//printf("%c\n",'\n');//���з�
//	//printf("%c\n",'\r');//�س���
//	//printf("%c\n",'\t');//ˮƽ�Ʊ��
//	//printf("%c\n",'\v');//��ֱ�Ʊ��
//	//printf("%c\n",'\200');//���8���� 134������ַ�
//	//printf("%c\n",'\xcb');//���16����cb������ַ�
//	return 0;
//}
//int num2=20;//ȫ�ֱ����������ڴ����main()����ı���
//int a=100;
//int main()
//{
//	int a=10;//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ��������ͬʱ���ײ������
//	//���ֲ�������ȫ�ֱ�����ͬʱ���ֲ���������
//	int num1=10;//�ֲ������������ڴ����main()����ı���
//	printf("%d\n",a);
//
//	////����23 
//	//short age = 23;//���ڴ�����2���ֽڵĿռ�=16bit ���洢����age
//	//float weight=80.5f;
//	return 0;
//
//}

//int main()
//{
//	//char ch='A';//����һ���ַ��������洢'A'
//	//int age=20;
//	//float f=8.16;
//	//printf("%f\n",f);//%f---��ӡ����С��  ����f
//	//printf("%d\n",age);//%d--- ��ӡ����ʮ���� ����age
//	//printf("%c\n",ch);//%c---��ӡ�ַ�����ch�洢��'A'
//
//	printf("һ���ַ�char�ĳ���Ϊ��");
//	printf("%d\n",sizeof(char));
//	printf("һ��������short�ĳ���Ϊ��");
//	printf("%d\n",sizeof(short));
//	printf("һ������int�ĳ���Ϊ��");
//	printf("%d\n",sizeof(int));
//	printf("һ��������long�ĳ���Ϊ��");
//	printf("%d\n",sizeof(long));
//	printf("һ����������long long�ĳ���Ϊ��");
//	printf("%d\n",sizeof(long long));
//	printf("һ���ַ�����������float�ĳ���Ϊ��");
//	printf("%d\n",sizeof(float));
//	printf("һ���ַ�˫������double�ĳ���Ϊ��");
//	printf("%d\n",sizeof(double));
//	return 0;
//}
//%d---��ӡ����
//%c---��ӡ�ַ�
//%f---��ӡ��������\С��
//%p---�Ե�ַ��ʽ��ӡ
//%x---��ӡ16����
//%o---......

//#include<stdio.h>
//int main( )
//{
//	printf("hallo wrold once again\n");
//	return 0;
//}



////����һ����stdio.h���ļ�
////std-��׼  standard input output  ��׼�����������
//#include<stdio.h>
//// int �����͵���˼
//// mainǰ���int��ʾmain�������÷���һ������ֵ
//int main( )//������-�������  main�������ҽ���һ��  ��F10 �ֲ�ִ��
//{
// printf("hi zhangwu\n");
// //���� print function ---printf-��ӡ����   �⺯�� -c���Ա����ṩ������ʹ�õĺ���   ���˵Ķ���---���к� 
// //#include 
// printf("hi zhangwu\n");
// printf("hi zhangwu\n");
// printf("hi zhangwu\n");
// printf("hi zhangwu\n");
// printf("hi zhangwu\n");
// printf("hi zhangwu\n");
// return 0;//���� 0-����
//}

//#include <stdio.h>
// 
///*��������ȫ�ֱ���*/
//int x=1;
//int y=2;
//int addtwonum();
//int main(void)
//{
//    int result;
//    result = addtwonum();
//    printf("result Ϊ: %d\n",result);
//    return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//extern int a;
//int main()
//{
//	printf("%d\n",a);
//	return 0;
//}

//void test()
//{
//	static int i = 0;//static ���ξֲ��������ı������������������
//	i++;
//	printf("%d\n",i);
//}
//
//int main()
//{
//	int i = 0;
//	for(i = 0;i<10;i++)
//	{
//		test();
//	}
//	return 0;
//}

//int main()
//{
//	char ch[8] = "zhangwu";
//	int i = 0;
//	while(i<7)
//	{
//		printf("%c\n",ch[i]);
//		i++;
//	}
//	printf("������֪��ʲô�������˰ɣ�\n");
//	return 0;
//}


//int main()
//{
//	int coding_line = 0;
//	printf("joining in bit\n");
//	while(coding_line<=20000)
//	{
//		printf("�һ�ú��ô���\n");
//		coding_line++;
//	}
//	if(coding_line>20000)
//	{
//		printf("ӭȢ�׸���\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("���ú�ѧϰ������1����ᣬ����0������\n");
//	scanf("%d",&a);
//	if(a == 1)
//	{
//		printf("������ڣ������һ����offer\n");
//	}
//	else
//	{
//		printf("��������Σ���˯���ž�����-�Ҿ͸о�������˼��������ȥѧϰ\n");
//	}
//	return 0;
//}

//int main()
//{
//	/*printf("D:\\QiYiCat\\Learning materail\n");*/
//	/*printf("c:\code\test.c\n");*/
//	/*printf("\123\n");
//	printf("\x23\n");*/
//	printf("%d\n",strlen("abcdef"));
//	printf("%d\n",strlen("c:\test\328\test.c"));
//	return 0;
//}

//int main()
//{
//	char a[] = "zhangwu";
//	char b[] = {'z','h','a','n','g','w','u'};
//	char c[] = {'z','h','a','n','g','w','u','\0'};
//	printf("%s\n",a);
//	printf("%s\n",b);
//	printf("%s\n",c);
//	//printf("the length of a is:%d\n",sizeof(a));
//	//printf("the length of b is:%d\n",sizeof(b));
//	//printf("the length of c is:%d\n",sizeof(c));
//	//printf("the length of a is:%d\n",sizeof("abcde"));
//	printf("�ַ���a �ĳ���Ϊ��%d\n",strlen(a));
//	printf("�ַ���b �ĳ���Ϊ��%d\n",strlen(b));
//	printf("�ַ���c �ĳ���Ϊ��%d\n",strlen(c));
//	return 0;
//}


//#define max 100
//enum grade {
// frist,
// second,
// third,
//};
//
//int main()
//{
//	/*const int b = 2;*/
//	/*b = 55;*///���� ���ܸ�������b��ֵ
//	/*printf("%d\n",3);*/
//	enum grade g = {second};
//	printf("%s\n",g);
//	return 0;
//}


int add(int x,int y)
{
	return x+y;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("please input two integer\n");
	scanf("%d%d",&num1,&num2);

	/*num1 = num1 + num2;*/
	/*printf("sum of two integer is:%d\n",num1);*/

	/*sum = num1 + num2;*/
	sum = add(num1,num2);
	printf("%d + %d = %d\n",num1,num2,sum);
	return 0;
}

//int glv = 1;
//int main()
//{
//	{
//	int glv = 2;
//	
//	}
//	printf("glv = %d\n",glv);
//	return 0;
//}

//int main()
//{
//	char a = 'a';
//	printf("%c\n",a);
//	return 0;
//}

//int main()
//{
//	char ch;
//	short st;
//	int a;
//	long lg;
//	long long llg;
//	float f;
//	double db;
//	printf("The size of ch is : %d\n",sizeof(ch));
//	printf("The size of st is : %d\n",sizeof(st));
//	printf("The size of a is : %d\n",sizeof(a));
//	printf("The size of lg is : %d\n",sizeof(lg));
//	printf("The size of llg is : %d\n",sizeof(llg));
//	printf("The size of f is : %d\n",sizeof(f));
//	printf("The size of db is : %d\n",sizeof(db));
//
//	/*printf("The size of char is : %d\n",sizeof(char));
//	printf("The size of short is : %d\n",sizeof(short));
//	printf("The size of int is : %d\n",sizeof(int));
//	printf("The size of long is : %d\n",sizeof(long));
//	printf("The size of long long is : %d\n",sizeof(long long));
//	printf("The size of float is : %d\n",sizeof(float));
//	printf("The size of double is : %d\n",sizeof(double));*/
//	return 0;
//}

//int main()
//{
//	printf("hallo bit\n");
//	printf("practice make perfects!\n");
//	printf("reveiw 1\n");
//	return 0;
//}
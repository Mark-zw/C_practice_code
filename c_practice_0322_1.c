#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
////����һ���ṹ������
//struct Book
//{
//	char name[20];
//	int price;
//};
//int main()
//{
//	//�½�һ���ṹ��Book���͵ı���
//	struct Book b1 = { "c���Գ������",15 };
//	struct Book* pb=&b1;
//	printf("������%s\n", b1.name);
//	printf("�۸�%d\n", b1.price);
//	strcpy(b1.name, "c++");
//	printf("�����޸ĺ�%s", b1.name);
//	//printf("������%s\n", (*pb).name);
//	//printf("�۸�%d\n", (*pb).price);//. �ṹ�����.��Ա
//	//printf("������%s\n", pb->name);// ->  �ṹ��ָ��->��Ա
//	//printf("�۸�%d\n", pb->price);
//	//b1.price = 20;
//	//printf("�޸�֮��ļ۸�Ϊ��%d\n", b1.price);
//	//pb->price = 25;
//	//printf("�ڶ����޸�֮��ļ۸�Ϊ��%d\n", b1.price);
//	//(*pb).price = 30;
//	//printf("�������޸�֮��ļ۸�Ϊ��%d\n", b1.price);
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n",sizeof(char *));
//	printf("%d\n", sizeof(int *));
//	printf("%d\n", sizeof(float *));
//	printf("%d\n", sizeof(double *));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p=&a;//���ڴ�ŵ�ַ�ı�������ָ��
//	printf("%p\n",&a);
//	printf("%p\n", p);
//	*p = 20;
//	printf("a = %d\n", a);
//	return 0;
//}

//#define MAX 100
//#define ADD(x,y)  ((x)+(y))
//int main()
//{
//	int sum = ADD(2, 3);
//	printf("sum = %d\n", sum);
//	sum = 10 * ADD(2, 3);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", Add(2, 3));
//	return 0;
//}

//int main()
//{
//	extern int gal;
//	printf("gal = %d\n",gal);
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//void test()
//{
//	int a = 1;
//	a++;
//	printf("a = %d\n",a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int a = 2;
//	double b = 4.11;
//	int c = 97;
//	printf("!a = %d\n",!a);
//	printf("-a = %d\n", -a);
//	printf("+a = %d\n",+a);
//	printf("&a = %d\n",&a);
//	printf("sizeof(a) = %d\n", sizeof(a));
//	printf("~a = %d\n", ~a);
//	printf("++a = %d\n", ++a);
//	printf("a++ = %d\n", a++);
//	printf("--a = %d\n", --a);
//	printf("a-- = %d\n", a--);
//	printf("*(&a)= %d\n", *(&a));
//	printf("(int)b = %d\n", (int)b);
//	printf("(char)a = %c\n", (char)c);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	printf("a = 3--->%d\n", a = 3);
//	printf("a += 3--->%d\n", a += 3);
//	printf("a -= 3--->%d\n", a -= 3);
//	printf("a *= 3--->%d\n", a *= 3);
//	printf("a /= 3--->%d\n", a /= 3);
//	printf("a &= 3--->%d\n", a &= 3);
//	printf("a ^= 3--->%d\n", a ^= 3);
//	printf("a |= 3--->%d\n", a |= 3);
//	printf("a = 9--->%d\n", a = 9);
//	printf("a >>= 3--->%d\n", a >>= 3);
//	printf("a <<= 3--->%d\n", a <<= 3);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a&b = %d\n", a & b);
//	printf("a|b = %d\n", a | b);
//	printf("a^b = %d\n", a ^ b);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = 0;
//	int c = 0;
//	b = a << 2;//a�����ֵ�������
//	c = a >> 2;
//	printf("a<<2 = %d\n", b);
//	printf("a>>2 = %d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = 5;
//	int c = b % a;
//	printf("a+b = %d\n", a + b);
//	printf("b-a = %d\n", b - a);
//	printf("a*b = %d\n", a * b);
//	printf("b/a = %d\n", b / a);
//	printf("b%%a = %d\n",c);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 30;
//	int sum = 0;
//	int num1 = 100;
//	int num2 = 200;
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while (line <= 100000)
//	{
//		printf("��һ�д���\n");
//		line++;
//	}
//	if (line > 100000)
//		printf("����Եõ�һ����offer\n");
//	return 0;
//}

////ѡ����䣬�������������ָ�����ѡ��ѡ��ͬ��������·Ҳ��������ͬ
//int main()
//{
//	int a;
//	printf("���ú�ѧϰ����𣿣�(1:�� 0:����)>>\n");
//	scanf("%d", &a);
//	if (a == 1)
//		printf("��offer\n");
//	else
//		printf("loser\n");
//	return 0;
//}

//int main()
//{
//	printf("c:\\code\\test,c\n");
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	int a1 = 0;
//	int a2 = 0;
//	a1 = sizeof(arr1) / sizeof(arr1[0]);
//	a2 = sizeof(arr2) / sizeof(arr2[0]);
//	printf("%s\n",arr1);
//	printf("%s\n", arr2);
//	printf("a1 = %d\n", a1);
//	printf("a2 = %d\n", a2);
//	printf("Length of arr1 :%d\n", strlen(arr1));
//	printf("Length of arr2 :%d\n", strlen(arr2));//û�н�����־�����ֵ
//	return 0;
//}

//enum Sex
//{
//	male,
//	female,
//	secert
//};
//int main()
//{
//	enum Sex s = male;
//	printf("%d\n",male);
//	printf("%d\n", female);
//	printf("%d\n", secert);
//	return 0;
//}
//#define Max 10
//int main()
//{
//	//const int n = 10;
//	int arr[Max] = {0};
//	printf("%d\n",Max);
//	return 0;
//}

//int main()
//{
//	const int num = 0;
//	printf("%d\n",num);
//	num = 4;
//	printf("%d\n", num);
//	return 0;
//}

//
//int main()
//{
//	char arr[5] = { 0 };
//	scanf("%s",arr);
//	printf("%s \n",arr);
//	return 0;
//}

//int main()
//{
//	extern int gla;
//	printf("%d ", gla);
//	return 0;
//}

//int main()
//{
//	//�����������ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//��������---ʹ��scanf����
//	scanf("%d%d",&num1,&num2);
//	sum = num1 + num2;
//	printf("sum = %d\n",sum);
//	return 0;
//}

//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//	}
//	return 0;
//}

//int a = 100;
//int main()
//{
//	//int a = 10;//�ֲ�������ȫ�ֱ���������ͬʱ���ֲ���������
//	printf("%d\n",a);
//	return 0;
//}

//int num1 = 20;//ȫ�ֱ����������ڴ���飨{}��֮��ı���
//int main()
//{
//	int num2 = 10;//�ֲ������������ڴ���飨{}��֮�ڵı���
//	return 0;
//}

//int main()
//{
//	int ch = 97;
//	printf("ch = %c",ch);
//	return 0;
//}

//int main()
//{
//	char ch;
//	int a;
//	short b;
//	long c;
//	long long d;
//	float f;
//	double lf;
//	printf("Length of char:%d\n",sizeof(char));
//	printf("Length of int:%d\n", sizeof(int));
//	printf("Length of short:%d\n", sizeof(short));
//	printf("Length of long:%d\n", sizeof(long));
//	printf("Length of long long:%d\n", sizeof(long long));
//	printf("Length of float:%d\n", sizeof(float));
//	printf("Length of double:%d\n", sizeof(double));
//	printf("Length of &char:%d\n", sizeof(&ch));
//	printf("Length of &int:%d\n", sizeof(&a));
//	printf("Length of &short:%d\n", sizeof(&b));
//	printf("Length of &long:%d\n", sizeof(&c));
//	printf("Length of &long long:%d\n", sizeof(&d));
//	printf("Length of &float:%d\n", sizeof(&f));
//	printf("Length of &double:%d\n", sizeof(&lf));
//	return 0;
//}

//int main()
//{
//	printf("hallo zhangwu!\n");
//	return 0;
//}

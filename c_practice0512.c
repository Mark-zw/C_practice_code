#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = { 0 };
//	char* t = arr1;
//	char* s = arr2;
//	while (*s++ = *t++)
//	{
//		;
//	}
//	s = arr2;
//	while (*s)
//	{
//		printf("%c", *s++);
//	}
//	return 0;
//}

//#include<stdio.h>
////����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
//int main()
//{
//	int money = 0;//Ǯ
//	int total = 0;//��ƿ��
//	int empty = 0;//��ƿ
//	scanf("%d", &money);
//	total = money;
//	empty = total;
//	while (empty / 2)
//	{
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;//������������ϰ벿�ֵ�����
//	while ((scanf("%d", &n)) != EOF)
//	{
//		getchar();//������Ŀո����
//		//���δ�ӡ˼·
//		
//		//�ȴ�ӡ�ϰ벿��������
//		int i = 0;//���ƴ�ӡ����
//		int j = 0;//����һ���ڲ���ӡ
//		for (i = 0; i < n; i++)
//		{
//			//1.�ȴ�ӡ��ߵĿո�
//			for (j = 0; j < n - 1 - i; j++)
//			{
//				printf(" ");
//			}
//			//2.�ٴ�ӡ�ұߵ� *
//			for (j = 0; j < 2 * i + 1; j++)
//			{
//				printf("*");
//			}
//			printf("\n");//һ�����ݴ�ӡ�����л���
//		}
//
//		//�ٴ�ӡ�°벿��������
//		for (i = 0; i < n - 1; i++)
//		{
//			//1.�ȴ�ӡ��ߵĿո�
//			for (j = 0; j <= i; j++)
//			{
//				printf(" ");
//			}
//			//2.�ٴ�ӡ�ұߵ� *
//			for (j = 0; j < 2 * (n-i-1) - 1; j++)
//			{
//				printf("*");
//			}
//			printf("\n");//һ�����ݴ�ӡ�����л���
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\n')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse(char* str)
//{
//	int len = my_strlen(str);
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		int tmp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}
//void print(char* str)
//{
//	while (*str != '\n')
//	{
//		printf("%c", *str);
//		str++;
//	}
//}
//int main()
//{
//	int i = 0;
//	char str[100] = { 0 };
//	while ((str[i] = getchar()) != '\n')
//	{
//		i++;
//	}
//	reverse(str);
//	print(str);
//	return 0;
//}

//#include<stdio.h>
//int fun()
//{
//   static int count = 1;
//   return ++count;
//}
//int main()
// {
//   int answer;
//   answer = fun(-fun() * fun());
//   printf("%d\n",answer);//�������?
//   return 0;
//  }

//#include <stdio.h>
//int main()
// {
//     int i = 1;
//     int ret = (++i) +(++i) +(++i);
//     printf("%d\n", ret);
//     printf("%d\n",i);
//     return 0;
// }

//#include<stdio.h>
////1.��ʵ��Ϊ���������ӵĶ��󣬹����ṹ������
////2.����ѧ���������������䣬ѧ�ŵ���Ϣ
////����һ���ṹ������
//struct Stu  //3.struct Stu��һ���ṹ�����ͣ���ʾѧ������
//			//��������������������
//{
//	char name[20];//����
//	int age;//����
//	char id[20];//ѧ��
//};
//int main()
//{
//	int a = 10;
//	//ʹ��struct Stu������ʹ�����һ��ѧ������s1������ʼ��
//	struct Stu s1 = { "����",20,"20210403" };
//	struct Stu* ps = &s1;
//	//�ṹ��ָ��->��Ա��
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//
//	//printf("%s\n", (*ps).name);
//	//printf("%d\n", (*ps).age);
//	//printf("%s\n", (*ps).id);
//
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	//�ṹ�����.��Ա��  .�������Ĳ�����һ���ǽṹ���������һ���ǳ�Ա��
//	return 0;
//}

//#include<stdio.h>
////2.����ط���()���Ǻ������ò��������Ǻ���������﷨����
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//1.���ú�����ʱ��ʹ�õ�() ���Ǻ������ò�����
//	int max = get_max(a, b);
//	//3.����ĺ������ò�����()�Ĳ�����Ϊ ������get_max����������a����������b  �ܹ�����������
//	//4.���ں������ò�����()���ԣ������������Ҫ��һ�������������������ж��
//	printf("max = %d\n", max);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a[10] = { 0 };//1.����һ������
//	//2.���������Ҫ���ʵ�5������Ԫ�أ������丳ֵ
//	a[4] = 10;//3.�����������+[]+�±���������
//	//4.[ ] ��Ӧ������������һ���Ǳ�����a  ����һ�������±�/����ֵ 4
//	printf("%d\n", a[4]);
//	return 0;
//}

//#include<stdio.h>
////��1-100����ż����������3�ı�����5�ı���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//if (i % 2 == 0)//ż��
//		//{
//		//	printf("%d ", i);
//		//}
//		//if (i % 2 == 1)
//		//	printf("%d ", i);
//		//if (i % 3 == 0)
//		//	printf("%d ", i);
//		if (i % 5 == 0)
//			printf("%d ", i);
//	}
//}

////���޶���Χһ�����ı���
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int s = 0;
//	scanf("%d", &n);
//	while (s < 100)
//	{
//		printf("%d ", s = i * n);
//		i++;
//	}
//	return 0;
//}

////��һ�������е�����
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		if (n % i == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include"Add.h"
//��쳲���������
//int count = 0;
//int Fib1(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int Fib2(n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib2(n);
//	printf("ret = %d\n", ret);
//	//printf("count = %d\n", count);
//	return 0;
//}


//���ַ�������
//my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}

//void print(int n)//1234
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//}

//int main()
//{
//	printf("hallo world\n");
//	main();//�ݹ����
//	return 0;
//}

//int Add(int x, int y);//��������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a,b);//��������
//	printf("%d\n", sum);
//	return 0;
//}
//int Add(int x, int y)//��������
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//void new_line()
//{
//	printf("haha\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}


////4.дһ��������ÿ����һ������������ͻὫnum��ֵ����1
//void Number_plus(int* num)
//{
//	*num+=1;//������*num++����Ϊ++���ȼ�����* ����ִ��++ ��ִ��*
//}
//int main()
//{
//	int num = 0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		Number_plus(&num);
//		printf("%d ", num);
//	}
//	return 0;
//}

////3.дһ��������ʵ��һ��������������Ķ��ֲ���
//int binary_search(int k, int arr[],int sz)//������δ��ݲ���?//�β�arr[]ʵ������һ��ָ�� 
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//		return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//�������Զ��庯���н��У����鲻����п�����ֻ�Ǵ����׵�ַ
//	ret = binary_search(k, arr,sz);//arr���ݵ�������Ԫ�صĵ�ַ
//	if (ret == -1)
//		printf("���Ҳ�����\n");
//	else
//		printf("�ҵ��ˣ��±�Ϊ��%d\n", ret);
//	return 0;
//}

//2.дһ�������ж�һ���ǲ�������
//is_Leap(int a)
//{
//	if ((a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_Leap(year) == 1)
//			printf("%d  ",year);
//	}
//	return 0;
//}


//is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (!(x % j))
//			return 0;
//	}
//	return 1;
//}
// 
//int main()
//{
//	int i = 0;
//	for (i = 2; i<200; i++)//�ж�2-200֮�������
//	{
//		if ((is_prime(i) == 1))
//			printf("%d  ", i);
//	}
//	return 0;
//}

//��ϰ1.дһ�����������ж�һ�����ǲ�������
//void Judge_prime(int x)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (!(x % 2))
//			break;
//	}
//	if (i > sqrt(x))
//		printf("%d������\n", x);
//	else
//		printf("%d��������\n", x);
//}
//int main()
//{
//	int n = 0;
//	printf("������һ��������:>>\n");
//	scanf("%d", &n);
//	Judge_prime(n);
//	return 0;
//}


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
#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>



int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int arr[10] = { 0 };
	int(*p)[10] = &arr;//ȡ������ĵ�ַ

	int(*p)(int, int) = &Add;//ȡ�������ĵ�ַ
	int(*pfArr[5])(int, int);//����ָ������

	int(*(*ppfArr)[5])(int, int);//ָ����ָ�������ָ�� 
	//��д(*ppfArr)��ʾָ�� ��д int(* [5])(int,int) ��ʾ��ָ��ָ���������һ�����飬
	//����������� int(*)(int,int)����ָ��
	// 
	//ppfArr��һ������ָ�룬ָ��ָ���������5��Ԫ��
	//ָ������������� int(*)(int,int)����ָ��
	//�ú���ָ��ָ��ĺ�������������������int���ͣ�������������Ҳ��int
	return 0;
}

//void cal_menu()
//{
//	printf("*****************************\n");
//	printf("*****   1.Add     2.Sub  ****\n");
//	printf("*****   3.Mul     4.Div  ****\n");
//	printf("*****   5.Mod     6.Xor  ****\n");
//	printf("******    0.exit     ********\n");
//	printf("*****************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Mod(int x, int y)
//{
//	return x % y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//int main()
//{
//	int input;//���ݲ˵���ʾ���������
//	int x = 0;
//	int y = 0;
//	int(*pArr[])(int, int) = { 0,Add,Sub,Mul,Div,Mod,Xor };
//	do
//	{
//		cal_menu();
//		printf("��ѡ�������:>>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//		case 6:
//			printf("������������������>>\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", (*pArr[input])(x,y));
//			break;
//		case 0:
//			printf("�˳���\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//		
//	} while (input);
//	return 0;
//}

//void cal_menu()
//{
//	printf("*****************************\n");
//	printf("*****   1.Add     2.Sub  ****\n");
//	printf("*****   3.Mul     4.Div  ****\n");
//	printf("******    0.exit     ********\n");
//	printf("*****************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input;//���ݲ˵���ʾ���������
//	int x = 0;
//	int y = 0;
//	do
//	{
//		cal_menu();
//		printf("��ѡ�������:>>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("����������������:>>\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("����������������:>>\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("����������������:>>\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("����������������:>>\n");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�!\n");
//			break;
//		default:
//			printf("ѡ�����!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//void cal_menu()
//{
//	printf("*****************************\n");
//	printf("*****   1.Add     2.Sub  ****\n");
//	printf("*****   3.Mul     4.Div  ****\n");
//	printf("******    0.exit     ********\n");
//	printf("*****************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void Calc(int (*pf)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������:>>\n");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input;//���ݲ˵���ʾ���������
//	
//	do
//	{
//		cal_menu();
//		printf("��ѡ�������:>>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("�˳�!\n");
//			break;
//		default:
//			printf("ѡ�����!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//ָ������
//	//int* arr[5];
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ---����ָ�������
//	int (*pa)(int, int) = Add;
//	int (*p[4])(int, int) = { Add,Sub,Mul,Div };//����ָ�������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", (*p[i])(2, 3));
//	}
//	return 0;
//}

//typedef  void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);
//int main()
//{
//	
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int sign = 1;
//	double pi = 0.0;
//	double n = 1.0;
//	double term = 1.0;
//	while (fabs(term) >= 1e-10)
//	{
//		pi = pi + term;
//		n = n + 2;
//		sign = -sign;
//		term = sign / n;
//	}
//	pi = pi * 4;
//	printf("pi = %10.8f\n", pi);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 5; j++)
//		{
//			printf("%2d  ", i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int sum = 0;
//
//	//while (i <= 100)
//	//{
//	//	sum += i;
//	//	i++;
//	//}
//
//	do
//	{
//		sum += i;
//		i++;
//	} while (i <= 100);
//	printf("sum = %d\n", sum);
//}
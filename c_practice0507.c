#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//4.����������ʱ������������������������
void swap(int* pa, int* pb)
{
	*pa = *pa ^ *pb;
	*pb = *pa ^ *pb;
	*pa = *pa ^ *pb;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	printf("Before swap: a = %d,b = %d\n", a, b);
	swap(&a, &b);
	printf("After swap: a = %d,b = %d\n", a, b);
	return 0;
}

////3.дһ���������ز����������� 1 �ĸ�����
////���磺 15    0000 1111    4 �� 1
////int Get_binary_one(int n)  //����һ���������
////{
////	int i = 0;
////	int count = 0;
////	for (i = 0; i < 32; i++)
////	{
////		if ((1 & (n >> i)) == 1)
////		{
////			count++;
////		}
////	}
////	return count;
////}
//
//int Get_binary_one(int n) // ��������-1��⣨��λ������⣩
//{
//	int count = 0;
//	while (n)
//	{
//		n &= n - 1;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Get_binary_one(n);
//	printf("%d\n", ret);
//	return 0;
//}


////2.��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	printf("Uneven number is: ");
//	for (i = 0; i < 32; i += 2)
//	{
//		printf("%d ", (1 & (n >> i)));
//	}
//	printf("\nEven number is: ");
//	for (i = 1; i < 32; i += 2)
//	{
//		printf("%d ", (1 & (n >> i)));
//	}
//	return 0;
//}


//1.���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int count = 0;
//	int i = 0;
//	int tmp = 0;
//	scanf("%d%d", &n, &m);
//	tmp = n ^ m;
//	for (i = 0; i < 32; i++)
//	{
//		if ((1 & (tmp >> i)) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//int main()
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));
//	printf("%d\n", s);
//	//int a = -1 ^ -1;
//	//printf("%d\n",a);
//	////int a = 4 % -5;
//	////printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 1; i <= 2019; i++)
//    {
//        int num = i;
//        do
//        {
//            if (num % 10 == 9)
//                count++;
//        } while (num /= 10);
//    }
//    printf("%d", count);
//    return 0;
//}
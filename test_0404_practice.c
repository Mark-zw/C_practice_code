#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//10


////9.�˷��ھ�������һ����n,��ӡn*n�ĳ˷��ھ���
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

//8.�ж�����
//is_Prime(int x)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_Prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

////7.ʹ��ָ���ӡ��������
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

////6.�����������������ܴ�����ʱ����
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a = %d,b = %d \n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������a = %d,b = %d \n", a, b);
//	return 0;
//}

////5.��ӡ�����Ƶ�����λ��ż��λ
//void print(int m)
//{
//	int i = 0;
//	printf("����λ��\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ��\n");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}


//4.ͳ�ƶ�������1�ĸ���
//int Count_bit_one(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count++;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int count = 0;
//	scanf("%d%d", &a, &b);
//	c = a^b;
//	count = Count_bit_one(c);
//	printf("��ͬ������%d\n", 32 - count);
//	printf("��ͬ������%d\n",count);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &a);
//	count = Count_bit_one(a);
//
//	//for (i = 0;i < 32;i++)
//	//{
//	//	if ((a & (1 << i)) == (1 << i))  //((a>>i)&1)==1
//	//	{
//	//		count++;
//	//	}
//	//}
//	printf("count = %d\n", count);
//}


//3.��������
//void print(int arr1[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//}
//void Swap(int arrA[], int arrB[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int temp = arrA[i];
//		arrA[i] = arrB[i];
//		arrB[i] = temp;
//	}
//}
//int main()
//{
//	int arrA[] = { 1,3,5,7,9 };
//	int arrB[] = { 2,4,6,8,10 };
//	int sz = sizeof(arrA) / sizeof(arrA[0]);
//	printf("����ǰ��\n");
//	print(arrA,sz);
//	print(arrB,sz);
//	Swap(arrA, arrB, sz);//������������
//	printf("������\n");
//	print(arrA, sz);
//	print(arrB, sz);
//	return 0;
//}
//

////2.�����������
////void init(int* p1, int sz)//�����ʼ��
////{
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		*p1 = 0;
////		p1++;
////	}
////}
////void print(int* p2, int sz)//�����ӡ
////{
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		printf("%d ", *p2);
////		p2++;
////	}
////	printf("\n");
////}
////void reverse(int* p3, int sz)
////{
////	int i = 0;
////	for (i = 0; i < sz/2; i++)
////	{
////		int temp = *(p3+i);
////		*(p3 + i) = *(p3 +( sz - 1 - i));
////		*(p3 + (sz - 1 - i)) = temp;
////	}
////}
//void init(int arr1[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr1[i] = 0;
//	}
//}
//void print(int arr1[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr2[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left < right)
//	{
//		int temp = arr2[left];
//		arr2[left] = arr2[right];
//		arr2[right] = temp;
//		left++;
//		right--;
//	}
//	//int i = 0;
//	//for (i = 0; i < sz/2; i++)
//	//{
//	//	int temp = arr2[i];
//	//	arr2[i] = arr2[sz - 1 - i];
//	//	arr2[sz - 1 - i] = temp;
//	//}
//}
//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	init(arr1,sz1);
//	print(arr1,sz1);
//
//	print(arr2, sz2);
//	reverse(arr2,sz2);
//	print(arr2, sz2);
//
//	return 0;
//}

//1.ð������
//int main()
//{
//	int arr[] = { 1,3,2,7,4,5,10,9,8 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 0; j < sz - i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				count++;
//			}
//		}
//		if (count == 0)
//			break;
//	}
//	printf("i = %d\n", i);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ��p������ָ��
//
//	int (*pf)(int, int) = &Add;//pf��������int (* )(int, int)
//	//int sum = (*pf)(2, 3);
//	int sum = pf(2, 3);// ������ sum = Add(2,3);
//	printf("sum = %d\n", sum);
//
//	//����ָ�����ָ������ָ��---��ź����ĵ�ַ
//	//printf("%p\n", &Add);//&������---�Ǻ����ĵ�ַ
//	//printf("%p\n", &Add);//������---�Ǻ����ĵ�ַ
//	//printf("%p\n", pf);
//}

//void test(int** p)
//{
//
//}
//int main()
//{
//	int* p1;
//	int** ptr;
//	int* arr[5];
//	test(&p1);
//	test(ptr);
//	test2(arr);
//	return 0;
//}


//#include <stdio.h>
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++) 
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);//һ��ָ��p����������
//	print(p, sz);
//	return 0;
//}


//void print_arr1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print_arr2(int(*p)[5], int x, int y)//����ָ��
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", (*p+i)[j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//��ӡ�����ά����
//	//print_arr1(arr,3,5);
//	print_arr2(arr, 3, 5);
//	return 0;
//}






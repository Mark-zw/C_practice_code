#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//arr--������ ��Ԫ�ص�ַ
//	//&arr--����ĵ�ַ
//	int* p1 = arr;
//	//int* p3 = &arr;
//	int(*p2)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p1 + i));
//	}
//
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", (*p2)[i]);
//	//}
//
//
//	//printf("p1 = %p\n", p1);
//	//printf("p1+1 = %p\n", p1+1);
//	//printf("p2 = %p\n", p2);
//	//printf("p2+1 = %p\n", p2 + 1);
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//	//printf("%p\n", &arr);
//	return 0;
//}

//int main()
//{
//	
//	char arr[5];
//	char(*pa)[5] = &arr;
//
//	char* ch[8];
//	char* (*pc)[8] = &ch;
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int* p = arr;// ����������Ԫ�ص�ַ
//	//����ָ�� ��������ָ�����
//	int(*p)[10] = &arr;//(*p)����p��ָ�����
//	//��ָ��ָ����һ�����飬����10��Ԫ�أ�ÿ��Ԫ�ص�������int
//	//����������Ž�*p��������д��int* p[10]������ָ������
//	return 0;
//}

//int main()
//{
//	//char* p1 = "student_zhang";
//	//char* p2 = "guofucheng";
//	//char* p3 = "liudehua";
//	//char* ch[3] = { p1,p2,p3 };
//	char* ch[3] = { "student_zhang","guofucheng","liudehua" };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", ch[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int arr1[] = { 1,2,3 };//arr1--int*
//	int arr2[] = { 4,5,6 };//arr2--int*
//	int arr3[] = { 7,8,9 };//arr3--int*
//	int* arr[3] = { arr1,arr2,arr3 };
//	//ͨ��arr�����ӡarr1��arr2��arr3���������е�Ԫ��
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a, &b, &c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("arr1 == arr2\n");
//	}
//	else
//	{
//		printf("arr1 != arr2\n");
//	}
//	if (p1 == p2)
//	{
//		printf("p1 == p2\n");
//	}
//	else
//	{
//		printf("p1 != p2\n");
//	}
//	return 0;
//}

//int main()
//{
//	char ch = 'A';
//	char* p = &ch;
//	printf("%c\n", *p);
//
//	char* ps = "abcdef";
//	printf("%s\n", ps);
//	//*ps = 'W';
//
//	char arr[10] = "abcdef";
//	char* pa = arr;
//	*pa = 'W';
//	printf("%s\n", arr);
//	return 0;
//}

//��������λ��ż��ǰ��
//void my_move(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		while ((left < sz) && (arr[left] % 2 != 0))
//		{
//			left++;
//		}
//		while ((right > 0) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}	
//	}
//}
//void my_print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_print(arr, sz);//��ӡ����Ԫ��
//	my_move(arr,sz);//����ʵ������������ż��ǰ��
//	my_print(arr, sz);//��ӡ����Ԫ��
//	return 0;
//}

//int main()
//{
//	int money = 0;//������ˮ��Ǯ
//	int total = 0;//�ܿ�ƿ��
//	int empty = 0;//������ƿ��
//	scanf("%d", &money);//����moneyֵ
//	if (money == 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = money * 2 - 1;
//	}
//
//	/*total += money;
//	empty = total;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}*/
//	printf("total = %d\n", total);
//	return 0;
//}
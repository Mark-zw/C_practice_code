#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include"add.h"
#include"sub.h"

//���뾲̬��
#pragma comment(lib,"sub.lib")

int main()
{
	int a = 10;
	int b = 20;
	printf("%d\n", Add(a, b));
	printf("%d\n", Sub(a, b));
	return 0;
}

//int Add(int x, int y)//��������
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);//��������
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "coding";
//	//strcpy(arr1, arr2);
//	printf("%s\n", strcpy(arr1,arr2));
//	return 0;
//}

//int main()
//{
//	//char arr[] = "Student_zhang";
//	//int len = strlen(arr);
//	printf("%d\n", strlen("Student_zhang"));
//	return 0;
//}

////4.дһ��������ÿ����һ������������ͻὫnum��ֵ����1
//void Number_plus(int* num)
//{
//	*num += 1;//������*num++����Ϊ++���ȼ�����* ����ִ��++ ��ִ��*
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
//		printf("%d��������\n", x);//ע�ⲻҪ�ڵ��ú���������д�ӡ
//}
//int main()
//{
//	int n = 0;
//	printf("������һ��������:>>\n");
//	scanf("%d", &n);
//	Judge_prime(n);
//	return 0;
//}

//int binary_search(int k, int arr[], int sz)//������δ��ݲ���?//�β�arr[]ʵ������һ��ָ�� 
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
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
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//�������Զ��庯���н��У����鲻����п�����ֻ�Ǵ����׵�ַ
//	ret = binary_search(k, arr, sz);//arr���ݵ�������Ԫ�صĵ�ַ
//	if (ret == -1)
//		printf("���Ҳ�����\n");
//	else
//		printf("�ҵ��ˣ��±�Ϊ��%d\n", ret);
//	return 0;
//}

//is_Leap(int a)
//{
//		return (a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0);
//
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_Leap(year) == 1)
//			printf("%d  ", year);
//	}
//	return 0;
//}

//#include<math.h>
//is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
// int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i < 200; i++)//�ж�100-200֮�������
//	{
//		if ((is_prime(i) == 1))
//		{
//			printf("%d  ", i);
//			count++;
//		}	
//	}
//	printf("\n count = %d\n", count);
//	return 0;
//}

//void swap(int x, int y)
//{
//	int z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a = %d,b = %d\n", a, b);
//	swap(a, b);
//	printf("������a = %d,b = %d\n", a, b);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("����ǰ��a = %d,b = %d\n", a, b);
//	swap(&a, &b);
//	printf("������a = %d,b = %d\n", a, b);
//
//	return 0;
//}
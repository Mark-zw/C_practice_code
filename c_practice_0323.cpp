#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
//6.��д������һ��1��100�����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 10) == 9)
//			count++;
//		if ((i / 10) == 9)
//			count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}


//5.дһ�����룺��ӡ100 - 200֮�������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i < 200; i++)
//	{
//		//�Գ��� ��2��sqrt(i)�Գ�
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i < 200; i++)
//	{
//		//�Գ��� ��2��i-1�Գ�
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//4.��ӡ1000�굽2000��֮�������
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//			printf("%d ", year);
//	}
//	return 0;
//}

//3.���������������������������Լ��
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	printf("���������������������ǵ����Լ����>>\n");
//	scanf("%d%d", &m, &n);
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("���Լ���ǣ�%d\n", n);
//	return 0;
//}

//2.дһ�������ӡ1-100֮������3�ı���������
//������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//	printf("1-100֮��3�ĸ���Ϊ��%d\n", i);
//	return 0;
//}
// ����һ
//int main()
//{
//	int i = 0;
//	int count = 0;//����
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 3) == 0)
//			printf("%d  ", i);
//		count++;
//	}
//	printf("1-100֮��3�ı����ĸ���Ϊ %d\n", count);
//	return 0;
//}


////1��д���뽫���������Ӵ�С���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("please input three numbers:>>\n");
//	scanf("%d%d%d", &a,&b,&c);
//	//�㷨����  ��������ŵ�a���δ�ֵ��b����Сֵ��c
//	if (a < b)//���aС��b������a��b���ߵ�ֵ
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)//���aС��c,����a,c���ߵ�ֵ
//	{
//		int temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)//���bС��c������b��c���ߵ�ֵ
//	{
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d  %d  %d\n", a, b, c);//����������������Ĵ�С��������a��b��c��˳���ӡ
//	return 0;
//}

//int main()
//{
//	char password[20];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("Please input your password:>>\n");
//		scanf("%s", password);
//		/*if (password == "123456")*///����ֱ����==���Ƚ������ַ����Ƿ����
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("password is right,good luck to you!");
//			break;
//		}
//		else
//			printf("password is wrong\n");
//	}
//	if (i == 3)
//		printf("you idiot,put the wrong password three times,don't have another chance!");
//	return 0;
//}

//welcome to c_code!!!!!!
//#######################
//w#####################!
//we###################!!
//wel#################!!!
//.......
//welcome to c_code!!!!!!
//int main()
//{
//	char arr1[] = "welcome to c_code!!!!!!";
//	char arr2[] = "#######################";
//	int left = 0;
//	/*int right = sizeof(arr1) / sizeof(arr2) - 1;*///�����Ǵ���ģ�arr1���һ���ַ����ַ���������־\0
//	/*int right = sizeof(arr1) / sizeof(arr2) - 2;*///-2����ȷ�ģ��������ǲ��Ƽ����ַ�ʽ�����׳���
//	int right = strlen(arr1) - 1;//strlen�����ַ��������ǲ��Ὣ\0�����ȥ
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//    return 0;
//}

//���ֲ��ҷ������ض�����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ�����\n");
//	return 0;
//}

//��ͨ��Ч�����������ض�����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±�Ϊ%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int s = 1;
//	int sum = 0;
//	//printf("������һ������������׳�:>>\n");
//	//scanf("%d", &n);
//	for (i= 1; i <= 3; i++)
//	{
//			s = s * i;
//		sum = sum + s;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//
//	int sum = 0;
//	//printf("������һ������������׳�:>>\n");
//	//scanf("%d", &n);
//	for (n = 1; n <= 3; n++)
//	{
//		int s = 1;
//		for (i = 1; i <= n; i++)
//		{
//			s = s * i;
//		}
//		sum = sum + s;
//	}
//	printf("ǰn��׳�֮��Ϊ��%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int s = 1;
//	printf("������һ������������׳�:>>\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n;i++)
//	{
//		s = s * i;
//	}
//	printf("�׳�Ϊ��%d\n", s);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
#include<assert.h>
//�ж�һ���ַ����Ƿ�������һ���ַ��������õ���
// ��������˼· �ַ���abcdef����׷���ַ����䱾����Եõ�
// abcdefabcdef  ���׷�Ӻ���ַ���ʵ���ϾͰ����˷���һ�����������Ľ��
//


//void reverse(char* left, char* right)
//{
//	assert(left != 0);
//	assert(right != 0);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
////3.������ת�����������Σ�
////ABCDEF  --- AB CDEF
////BA CDEF �������
////BA FEDC �ұ�����
////CDEFAB  ��������
//void levor_arr(char arr[], int len, int k)
//{
//	assert(arr);
//	assert(k <= len);//assert���ԣ�ȷ�������ַ��ĸ����������ַ����ĳ���
//	reverse(arr,arr+k-1);//�������
//	reverse(arr+k,arr+len-1);//�ұ�����
//	reverse(arr,arr+len-1);//��������
//}
////����һ��������ⷨ����ٷ���
//int is_levor_arr(char arr1[], char arr2[])
//{
//	assert(arr1);
//	assert(arr2);
//	int len1 = strlen(arr1);
//	//�ж�˼·����arr1����1���ַ�������2���ַ�....����len1���ַ��Ľ������arr2�Ƚ�
//	int i = 0;
//	for (i = 0; i < len1; i++)
//	{
//		levor_arr(arr1, len1, 1);
//		int ret = strcmp(arr1, arr2);
//		if (ret == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";//�ж�arr2�Ƿ���arr1�����õ�
//	int ret = is_levor_arr(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
//void print(char arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(char* left, char* right)
//{
//	assert(left != 0);
//	assert(right != 0);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
////3.������ת�����������Σ�
////ABCDEF  --- AB CDEF
////BA CDEF �������
////BA FEDC �ұ�����
////CDEFAB  ��������
//void levor_arr(char arr[], int len, int k)
//{
//	assert(arr);
//	assert(k <= len);//assert���ԣ�ȷ�������ַ��ĸ����������ַ����ĳ���
//	reverse(arr,arr+k-1);//�������
//	reverse(arr+k,arr+len-1);//�ұ�����
//	reverse(arr,arr+len-1);//��������
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int k = 0;
//	int i = 0;
//	int len = strlen(arr);
//	print(arr, len);
//	printf("�����������ַ��ĸ�����>>\n");
//	scanf("%d", &k);
//	levor_arr(arr, len, k);
//	printf("��������Ϊ��\n");
//	print(arr, len);
//	return 0;
//}

//void print(char arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	printf("\n");
//}
////2.������ⷨ
//void levor_arr(char arr[], int len, int k)//��������
//{
//	assert(arr);
//	int i = 0;
//	for (i = 0; i < k; i++)//����k�Σ�ÿ��ʵ��һ���ַ�����������
//	{
//		//1.һ����������
//		int j = 0;
//		char tmp = arr[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[j] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int k = 0;
//	int i = 0;
//	int len = strlen(arr);
//	print(arr, len);
//	printf("�����������ַ��ĸ�����>>\n");
//	scanf("%d", &k);
//	levor_arr(arr, len, k);
//	printf("��������Ϊ��\n");
//	print(arr, len);
//	return 0;
//}

//ʵ��һ�����������������ַ����е�k���ַ���
//����ABCD ����һ���ַ��õ�BCDA  ���������ַ��õ�CDAB
// 
//void print(char arr[],int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	printf("\n");
//}
// 
//1.���Լ�д��������������
//void levor_arr(char arr[], int len,char tmp[],int k)//��������
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < len; i++)
//	{
//		if (i < len - k)
//		{
//			arr[i] = arr[i + k];
//		}
//		else
//		{
//			arr[i] = tmp[j];
//			j++;
//		}
//	}
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int k = 0;
//	int i = 0;
//	int len = strlen(arr);
//	char tmp[20] = { 0 };
//	print(arr, len);
//	printf("�����������ַ��ĸ�����>>\n");
//	scanf("%d", &k);
//	for (i = 0; i < k; i++)
//	{
//		tmp[i] = arr[i];
//	}
//	levor_arr(arr, len, tmp, k);
//	printf("��������Ϊ��\n");
//	print(arr, len);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1 
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

//3�ַ��� 1.��ʱ���鷨  2.��ʱ����k�η�  3.������ת��
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
////����һ����ʱ���鷨
//void levotor1(char* arr1,int k)
//{
//	assert(arr1 != NULL);//���ԣ���ֹ�����ָ�룬ˢ��ʱ������ȥ��
//	char arr2[5] = { 0 };
//	int i = 0;
//	int len = strlen(arr1);//������ַ����ĳ���
//	assert(k <= len);//���ԣ���ֹk�����ַ������ȣ�ˢ��ʱ������ȥ��
//	//1.��ǰk���ַ���ŵ�arr2������
//	for (i = 0; i < k; i++)
//	{
//		arr2[i] = arr1[i];
//	}
//	//2.���ַ�����k���ַ�������ַ���ǰƽ��k����λ
//	for (i = k; i < len; i++)
//	{
//		arr1[i-k] = arr1[i];
//	}
//	//3.����ʱ�����е�����ƽ�ƻ��ַ���
//	for (i = len - k; i < len; i++)
//	{
//		arr1[i] = arr2[i-(len-k)];
//	}
//}
////����������ʱ����k�η�
//void levotor2(char* arr1, int k)
//{
//	assert(arr1 != NULL);//���ԣ���ֹ�����ָ�룬ˢ��ʱ������ȥ��
//	int i = 0;
//	int j = 0;
//	int len = strlen(arr1);
//	assert(k <= len);//���ԣ���ֹk�����ַ������ȣ�ˢ��ʱ������ȥ��
//	//2.�ظ�k��
//	for (i = 0; i < k; i++)
//	{
//		char tmp = arr1[0];//������ʱ�������ȡ�������ַ�
//		//1.ʵ������һ�εĲ���
//		for (j = 0; j < len - 1; j++)
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[len - 1] = tmp;
//	}
//}
//
////��������������ת��
////��ת����
//void reverse(char* start, char* end)//��start��end֮����ַ����з�ת
//{
//	while (start < end)
//	{
//		char tmp = *start;
//		*start = *end;
//		*end = tmp;
//		start++;
//		end--;
//	}
//}
//void levotor3(char* arr1, int k)
//{
//	assert(arr1 != NULL);//���ԣ���ֹ�����ָ�룬ˢ��ʱ������ȥ��
//	int len = strlen(arr1);
//	assert(k <= len);//���ԣ���ֹk�����ַ������ȣ�ˢ��ʱ������ȥ��
//	reverse(arr1, arr1 + k - 1);//1.��ǰk���ַ����з�ת
//	reverse(arr1 + k, arr1 + len - 1);//2.����k+1����len���ַ���ת
//	reverse(arr1, arr1 + len - 1);//3.���巭ת
//}
//int main()
//{
//	char arr1[] = "ABCD";
//	int k = 0;
//	scanf("%d", &k);
//	//levotor1(arr1,k);//�����ַ�����������һ
//	//levotor2(arr1,k);//�����ַ�������������
//	levotor3(arr1, k);//�����ַ�������������
//	printf("%s\n", arr1);
//	return 0;
//}
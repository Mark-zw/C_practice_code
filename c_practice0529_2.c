#define _CRT_SECURE_NO_WARNINGS 1 
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

#include<stdio.h>
#include<string.h>
#include<assert.h>

//��������������ת��
//��ת����
void reverse(char* start, char* end)//��start��end֮����ַ����з�ת
{
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
void levotor3(char* arr1, int k)
{
	assert(arr1 != NULL);//���ԣ���ֹ�����ָ�룬ˢ��ʱ������ȥ��
	int len = strlen(arr1);
	assert(k <= len);//���ԣ���ֹk�����ַ������ȣ�ˢ��ʱ������ȥ��
	reverse(arr1, arr1 + k - 1);//1.��ǰk���ַ����з�ת
	reverse(arr1 + k, arr1 + len - 1);//2.����k+1����len���ַ���ת
	reverse(arr1, arr1 + len - 1);//3.���巭ת
}
//����һ���ַ����ȽϷ�
int Is_levotor1(char* s1, char* s2)
{
	assert(s1 && s2);//���ԣ���ֹ�����ָ�룬ˢ��ʱ������ȥ��
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 != len2)
	{
		return 0;
	}
	else
	{
		int i = 0;
		for (i = 0; i < len1; i++)//����0���ַ�������len1���ַ��Ľ����һ����
		{
			levotor3(s1, 1);
			int ret = strcmp(s1, s2);
			if (ret == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

//���������ַ���׷���ж��ִ���
int Is_levotor2(char* s1, char* s2)
{
	assert(s1 && s2);//���ԣ���ֹ�����ָ�룬ˢ��ʱ������ȥ��
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 != len2)
	{
		return 0;
	}
	char* s[20] = { 0 };
	strcat(s, s1);
	strcat(s, s1);//s׷�����Σ��൱��s1�Լ�׷���Լ�
	if (strstr(s, s2) == NULL)
	{
		return 0;
	}
	return 1;
}

int main()
{
	char s1[] = "AABCD";
	char s2[] = "BCDAA";
	//int ret = Is_levotor1(s1, s2);//����һ���ַ����ȽϷ�
	int ret = Is_levotor2(s1, s2);//���������ַ���׷���ж��ִ���

	if (ret == 1)
	{
		printf("s2 is a levotorsion-string of s1.\n ");
	}
	else
	{
		printf("s2 is not a levotorsion-string of s1.\n ");
	}
	return 0;
}







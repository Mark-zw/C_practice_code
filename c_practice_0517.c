#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int arr[10] = { 0 };//����
	int(*p)[10] = &arr;//����ָ��
	char* arr1[5] = { 0 };//�ַ�����
	char* (*p1)[5] = &arr1;//�ַ�����ָ��
	int(*p2)(int, int) = Add;//&Add;//����ָ��
	int(*p3[4])(int, int) = { 0 };//����ָ������
	//ȥ��������p3������[4]ʣ�µľ������������ int(*)(int,int)
	int(*(*p4)[4])(int, int) = &p3;//ָ����ָ�������ָ��
	//p4��һ������ָ�룬ָ��ָ���������4��Ԫ��
	//ÿ��Ԫ�ص����Ͷ��Ǻ���ָ�룬����ָ��������int(*)(int,int)
	return 0;
}
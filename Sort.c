#define _CRT_SECURE_NO_WARNINGS 1 
#include"Sort.h"

//��������
void InsertSort(int* a, int n)
{
	assert(a);
	int i = 0;
	//�߽���Ʋ��ã����׵��³������ ����i<n 
	//���飺��ͼ + дע��
	for (i = 0; i < n - 1; i++)
	{
		//��end+1���鼮���뵽[0,end]����������
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}
}

//ϣ������
void ShellSort(int* a, int n)
{
	//1.gap>1�൱��Ԥ����������ӽ�����
	//2.gap == 1�൱��ֱ�Ӳ������򣬱�֤����
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;//+1��֤�����һ��gapһ��Ϊ1
		//gapΪ1ʱ���൱��ֱ�Ӳ�������
		for (int i = 0; i < n - gap; ++i)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
}
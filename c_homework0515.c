#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
////��������ż��˳��
////Ҫ������һ���������飬ʵ��һ��������
////�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
////����ż��λ������ĺ�벿�֡�
//void print(int arr[], int sz)//��ӡ����
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void adjust(int arr[], int sz)//��������ż��˳��
//{
//	//˼·�������������Ѱ�ң������ż�����ұ�������
//	//���ҵ�����λ�ý��н���
//	int left = 0;//�����ʼ�±�
//	int right = sz - 1;//�ұ���ʼ�±�
//
//	while (left < right)
//	{
//		while (arr[left] % 2 == 1 && left++< right)//�����������
//		{
//			;
//		}
//		while (arr[right] % 2 == 0 && right-- > left)//�ұ�����ż��
//		{
//			;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//		//left++;
//		//right--;
//	}
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("����ǰ��");
//	print(arr, sz);
//	adjust(arr, sz);
//	printf("������");
//	print(arr, sz);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}




#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//��������λ��ż��ǰ��
void my_move(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;
	while (left < right)
	{
		while ((left < sz) && (arr[left] % 2 != 0))
		{
			left++;
		}
		while ((right > 0) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}	
	}
}
void my_print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_print(arr, sz);//��ӡ����Ԫ��
	my_move(arr,sz);//����ʵ������������ż��ǰ��
	my_print(arr, sz);//��ӡ����Ԫ��
	return 0;
}

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
#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
void Func(char* str)
{
	while (*str)//\0��ASCII�����0�������ʾ*st!='\0'
	{
		if (*str == ' ')
		{
			*str = '%98';
		}
		str++;
	}
}
int main()
{
	char arr[] = "abc defgx yz";
	void Func(arr);
	printf("%s\n", arr);
	return 0;
}

//#include<stdio.h>
//int main()
//{
//	//int str[7] = {'\0'};
//	//str = "string";
//	/*int a = 10;
//	int b = a += a *= a -= a / 3;
//	printf("%d", b);*/
//	int i = 0;
//	while (i < 10)
//	{
//		if (i < 1)
//			continue;
//		if (i == 5)
//			break;
//		i++;
//	}
//	return 0;
//}

//#include<stdio.h>
//#define ROW 4
//#define COL 4
//void Init_arr(int arr[ROW][COL], int row, int col, int k)
//{
//	//1����ʼ�����飬Ϊ�˷������Ĳ��ԣ�����ֱ����ȫ��ʼ������
//	arr[ROW][COL] = { 1,2,3,4,2,3,4,5,3,4,5,6,4,5,6,7 };
//}

//int Search_num(int arr[ROW][COL], int* prow, int* pcol, int k)
//{
//	//ѡ���Ͻǵ�������Ϊ�ο�
//	int row = 0;
//	int col = *pcol - 1;
//	while ((row <= *prow - 1) && (col >= 0))
//	{
//		if (k < arr[row][col])
//		{
//			col--;
//		}
//		else if (k > arr[row][col])
//		{
//			row++;
//		}
//		else
//		{
//			*prow = row;
//			*pcol = col;
//			return 1;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	//int arr[ROW][COL]={ 1,2,3,4,2,3,4,5,3,4,5,6,4,5,6,7 };
//	int arr[ROW][COL] = { 1,2,8,9,2,4,9,12,4,7,10,13,6,8,11,15 };
//	int row = ROW;
//	int col = COL;
//	int k = 0;
//	int ret = 0;
//	scanf("%d", &k);
//	//Init_arr(arr, ROW, COL, k);//��ʼ������ʹ���ѯ����
//	ret = Search_num(arr, &row, &col, k);//�������֣��ɹ��ͷ���1��ͬʱͨ��row��col�����±꣬���򷵻�-1��
//	if (ret == 1)
//	{
//		printf("�ҵ��ˣ��±�Ϊ[%d][%d]\n", row, col);
//	}
//	else
//	{
//		printf("���Ҳ�����");
//	}
//	return 0;
//}
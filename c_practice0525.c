#define _CRT_SECURE_NO_WARNINGS 1 
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N);
//#include<stdio.h>
//#define ROW 3
//#define COL 3

//int Young_tableau(int arr[ROW][COL], int* pr, int* pc, int k)
//{
//
//	int i = 0;
//	int j = *pc - 1;
//	////����һ���������Ͼ�����ص㣬�������Ͻǵ�Ԫ�ؽ��в���
//	while ((i <= *pr - 1) && (j >= 0))
//	{
//		if (arr[i][j] < k)
//		{
//			i++;
//		}
//		else if (arr[i][j] > k)
//		{
//			j--;
//		}
//		else
//		{
//			break;//�����Ƚ���ѭ��
//		}
//	}
//	if ((i <= *pr - 1) && (j >= 0))
//	{
//		*pr = i;
//		*pc = j;
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}

//���������������Ͼ�����ص㣬�������½ǵ�Ԫ�ؽ��в���
//int Young_tableau(int arr[ROW][COL], int* pr, int* pc, int k)
//{
//	int i = *pr - 1;
//	int j = 0;
//	while ((i >= 0) && (j <= *pc - 1))
//	{
//		if (arr[i][j] < k)
//		{
//			j++;
//		}
//		else if (arr[i][j] > k)
//		{
//			i--;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if ((i >= 0) && (j <= *pc - 1))
//	{
//		*pr = i;
//		*pc = j;
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int k = 0;//��Ҫ�����ҵ�����
//	int arr[ROW][COL] = { 1,2,3,4,5,6,7,8,9 };//���Ͼ���
//	int row = ROW;
//	int col = COL;
//	int ret = 0;
//	printf("������Ҫ���ҵ����֣�>>");
//	scanf("%d", &k);
//	ret = Young_tableau(arr, &row, &col, k);//&row,&col���Խ��±������
//	//�������պ����ķ��ؽṹ  0 --- û�ҵ�  1---������ҵ���
//	if (ret)
//	{
//		printf("�ҵ���!\n���±�Ϊ��%d�����±�Ϊ��%d\n", row, col);
//	}
//	else
//	{
//		printf("���Ҳ�����\n");
//	}
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1 
//3��������
#include<stdio.h>
int main()
{
	int A, B, C, D, E;//�������������������˶�Ա
	//ÿ���˶�Ա���ε�ȡֵ��Χ��1��5
	for (A = 1; A <= 5; A++)
	{
		for (B = 1; B <= 5; B++)
		{
			for (C = 1; C <= 5; C++)
			{
				for (D = 1; D <= 5; D++)
				{
					for (E = 1; E <= 5; E++)
					{
						if ((A != B) && (A != C) && (A != D) &&
							(A != E) && (B != C) && (B != D) &&
							(B != E) && (C != D) && (C != E) && (D != E))
						{
							if (((B == 2) + (A == 3)) == 1 &&
								((B == 2) + (E == 4)) == 1 &&
								((C == 1) + (D == 2)) == 1 &&
								((C == 5) + (D == 3)) == 1 &&
								((E == 4) + (A == 1)) == 1)
							{
								printf("A��%d\nB��%d\nC��%d\nD��%d\nE��%d\n",
									A, B, C, D, E);
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

////2��������
//#include<stdio.h>
//int main()
//{
//	char killer = 0;//����������killer 
//	//killer��ȡֵΪ�ַ�'A','B','C','D'
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if (((killer != 'A') + 
//			(killer == 'C') + 
//			(killer == 'D') + 
//			(killer != 'D')) == 3)
//		{
//			printf("The killer is %c\n", killer);
//		}
//	}
//	return 0;
//}

//1������Ļ�ϴ�ӡ������ǡ�
//#include<stdio.h>
//#define ROW 10
//#define COL 10
//int main()
//{
//	//����һ����ά����
//	int arr[ROW][COL] = { 0 };
//	int i = 0;
//	int j = 0;
//	//1.����ά��������߼��Խ�����1
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			if ((j == 0) || (i == j))
//			{
//				arr[i][j] = 1;
//			}
//		}
//	}
//	//2.����ά�������½�������������ǹ��ɸ�ֵ
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if ((j != 0) && (i != j))
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	//3.��ӡ��ά�������½����򣬼��������
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch[4] = { 'A','*',' ' };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%c ", ch[i]);
//	}
//	return 0;
//}




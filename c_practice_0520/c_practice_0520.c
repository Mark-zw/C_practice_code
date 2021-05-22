#define _CRT_SECURE_NO_WARNINGS 1 
//3、猜名次
#include<stdio.h>
int main()
{
	int A, B, C, D, E;//创建五个变量代表五个运动员
	//每个运动员名次的取值范围从1到5
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
								printf("A第%d\nB第%d\nC第%d\nD第%d\nE第%d\n",
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

////2、猜凶手
//#include<stdio.h>
//int main()
//{
//	char killer = 0;//假设凶手是killer 
//	//killer的取值为字符'A','B','C','D'
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

//1、在屏幕上打印杨辉三角。
//#include<stdio.h>
//#define ROW 10
//#define COL 10
//int main()
//{
//	//创建一个二维数组
//	int arr[ROW][COL] = { 0 };
//	int i = 0;
//	int j = 0;
//	//1.将二维数组最左边及对角线置1
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
//	//2.将二维数组左下角区域按照杨辉三角规律赋值
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
//	//3.打印二维数组左下角区域，即杨辉三角
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




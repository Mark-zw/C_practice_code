#define _CRT_SECURE_NO_WARNINGS 1 
/*******************/
//������Դ�ļ�game.c����
/*******************/
#include"game.h"

//��ʼ�����̵�ʵ��
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

//��ӡ���̵�ʵ��
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//Ϊ�˷������֣������ڴ�ӡ��ʱ�������ôһ�л�
	printf("-----------Mine_clearing game-------------\n");

	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		//printf("%d ", i);
		printf("%2d ", i);
	}
	printf("\n");
	
	for (i = 1; i <= row; i++)
	{
		//��ӡ�к�
		//printf("%d ", i);
		printf("%2d ", i);
		for (j = 1; j <= col; j++)
		{
			//printf("%c ", board[i][j]);
			printf("%2c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----------Mine_clearing game-------------\n");

}

//�����׵�ʵ��
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//��������Ҫ�����׵ĸ�����count
	//int count =	EASY_COUNT;
	int count = HARD_COUNT;
	while (count)
	{
		//���ǲ����׵�ʱ���׵�λ������������
		int x = rand() % row + 1;//�׳��ֵ�����λ�ã��к�ֻ���� 1��row 
		int y = rand() % col + 1;//�׳��ֵ�����λ�ã��к�Ҳֻ���� 1��col
		if (mine[x][y]=='0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//ͳ����Χ�׵���Ϣ
int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	////����һ��
	//return mine[x - 1][y - 1] +
	//	mine[x - 1][y] +
	//	mine[x - 1][y + 1] +
	//	mine[x][y - 1] +
	//	mine[x][y + 1] +
	//	mine[x + 1][y - 1] +
	//	mine[x + 1][y] +
	//	mine[x + 1][y + 1] - 8 * '0';
	
	//������
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			sum += mine[x + i][y + j] - '0';
		}
	}
	return sum;
}

void SetBlank(char show[ROWS][COLS], char mine[ROWS][COLS], int x, int y)
{
	int count = get_mine_count(mine, x, y);
	if (count == 0)
	{
		show[x][y] = ' ';
		if (x - 1 >= 0 && x <= ROW && y >= 0 && y <= COL && show[x - 1][y] == '*')
		{
			SetBlank(show, mine, x - 1, y);
		}
		if (x + 1 >= 0 && x <= ROW && y >= 0 && y <= COL && show[x + 1][y] == '*')
		{
			SetBlank(show, mine, x + 1, y);
		}
		if (x >= 0 && x <= ROW && y - 1 >= 0 && y <= COL && show[x][y-1] == '*')
		{
			SetBlank(show, mine, x, y - 1);
		}
		if (x >= 0 && x <= ROW && y + 1 >= 0 && y <= COL && show[x][y + 1] == '*')
		{
			SetBlank(show, mine, x, y + 1);
		}
	}
	else
	{
		show[x][y] = count + '0';
	}
}

int Is_win(char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')
			{
				count++;
			}
		}
	}
	return count;
}

//�Ų��׵�ʵ��:�ݹ�չ���汾
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//˼·��
	//1.�����Ų��׵�����
	//2.�����Ų�
	//��1��������������ף�����ʾ You lose!you get a mine.
	// (2) ��������겻���ף�ͳ�Ƹ�������Χ�׵ĸ���---�Ų��׵���Ϣ�ŵ�show������ȥ

	int x = 0;
	int y = 0;
	//�ж���������ĺϷ���
	while (1)
	{
		printf("please input two number between %d to %d:>>",1,ROW);//ROW���ó���COL��ȣ�����ʹ������һ��
		scanf("%d%d", &x, &y);
		if ((x >= 1 && x <= ROW) && (y >= 1 && y <= COL))
		{
			if (mine[x][y] == '1')
			{
				printf("You lose!you get a mine!\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				SetBlank(show, mine, x, y);
				int count = Is_win(show, ROW, COL);
				if (count == EASY_COUNT)
				{
					printf("Congratulations,you win!\n");
				    DisplayBoard(show, ROW, COL);
					break;
				}
				DisplayBoard(show, ROW, COL);
			}
		}
		else
		{
			printf("Wrong coordinate,please try again!\n");
		}
	}
}

////�Ų��׵�ʵ��:��ͨ�汾
//void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
//{
//	//˼·��
//	//1.�����Ų��׵�����
//	//2.�����Ų�
//	//��1��������������ף�����ʾ You lose!you get a mine.
//	// (2) ��������겻���ף�ͳ�Ƹ�������Χ�׵ĸ���---�Ų��׵���Ϣ�ŵ�show������ȥ
//
//	int x = 0;
//	int y = 0;
//	int win = 0;
//	//�ж���������ĺϷ���
//	while (win<row*col-EASY_COUNT)
//	{
//		printf("please input two number between %d to %d:>>",1,ROW);
//		scanf("%d%d", &x, &y);
//		if ((x >= 1 && x <= ROW) && (y >= 1 && y <= COL))
//		{
//			if (mine[x][y] == '1')
//			{
//				printf("You lose!you get a mine!\n");
//				DisplayBoard(mine, ROW, COL);
//				break;
//			}
//			else
//			{
//				//�����׵�����£�ͳ��x��y��Χ�׵���Ϣ
//				int count = get_mine_count(mine, x, y);
//				show[x][y] = count + '0';
//				DisplayBoard(show, ROW, COL);
//				win++;
//			}
//		}
//		else
//		{
//			printf("Wrong coordinate,please try again!\n");
//		}
//	}
//	if (win == row * col - EASY_COUNT)
//	{
//		printf("Congratulations,you win!\n");
//		DisplayBoard(mine, ROW, COL);
//	}
//}
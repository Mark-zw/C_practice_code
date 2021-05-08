#define _CRT_SECURE_NO_WARNINGS 1 
/*******************/
//以下是源文件game.c内容
/*******************/
#include"game.h"

//初始化棋盘的实现
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

//打印棋盘的实现
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//为了方便区分，我们在打印的时候加上这么一行话
	printf("-----------Mine_clearing game-------------\n");

	//打印列号
	for (i = 0; i <= col; i++)
	{
		//printf("%d ", i);
		printf("%2d ", i);
	}
	printf("\n");
	
	for (i = 1; i <= row; i++)
	{
		//打印行号
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

//布置雷的实现
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//假设我们要布置雷的个数是count
	//int count =	EASY_COUNT;
	int count = HARD_COUNT;
	while (count)
	{
		//我们布置雷的时候，雷的位置最好是随机的
		int x = rand() % row + 1;//雷出现的坐标位置：行号只能在 1至row 
		int y = rand() % col + 1;//雷出现的坐标位置：列号也只能在 1至col
		if (mine[x][y]=='0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//统计周围雷的信息
int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	////方法一：
	//return mine[x - 1][y - 1] +
	//	mine[x - 1][y] +
	//	mine[x - 1][y + 1] +
	//	mine[x][y - 1] +
	//	mine[x][y + 1] +
	//	mine[x + 1][y - 1] +
	//	mine[x + 1][y] +
	//	mine[x + 1][y + 1] - 8 * '0';
	
	//方法二
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

//排查雷的实现:递归展开版本
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//思路：
	//1.输入排查雷的坐标
	//2.进行排查
	//（1）如果该坐标是雷，就提示 You lose!you get a mine.
	// (2) 如果该坐标不是雷，统计该坐标周围雷的个数---排查雷的信息放到show数组中去

	int x = 0;
	int y = 0;
	//判断输入坐标的合法性
	while (1)
	{
		printf("please input two number between %d to %d:>>",1,ROW);//ROW设置成与COL相等，任意使用其中一个
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

////排查雷的实现:普通版本
//void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
//{
//	//思路：
//	//1.输入排查雷的坐标
//	//2.进行排查
//	//（1）如果该坐标是雷，就提示 You lose!you get a mine.
//	// (2) 如果该坐标不是雷，统计该坐标周围雷的个数---排查雷的信息放到show数组中去
//
//	int x = 0;
//	int y = 0;
//	int win = 0;
//	//判断输入坐标的合法性
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
//				//不是雷的情况下，统计x，y周围雷的信息
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
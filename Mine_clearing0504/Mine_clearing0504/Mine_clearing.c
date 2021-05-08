#define _CRT_SECURE_NO_WARNINGS 1 
/*******************/
//以下是源文件Mine_clearing.c内容
/*******************/
#include"game.h"
void game_menu()
{
	printf("**********************************\n");
	printf("********   1.play game   *********\n");
	printf("********   0.exit game   *********\n");
	printf("**********************************\n");
}
void Mine_clearing_game()//扫雷游戏的具体过程
{
	//创建两个二维数组
	char mine[ROWS][COLS] = { 0 };//棋盘一：存放雷的棋盘
	char show[ROWS][COLS] = { 0 };//棋盘二：存放排查雷的信息的棋盘
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//打印棋盘
	//DisplayBoard(mine, ROW, COL);//打印棋盘的时候只需要打印中间的部分
	DisplayBoard(show, ROW, COL);//扩充出来的最外围一圈不需要打印出来

	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);//用于测试检查使用
	 
	//排查雷
	FindMine(mine, show, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		game_menu();
		printf("Please choose:>>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Mine_clearing_game();//扫雷游戏
			break;
		case 0:
			printf("Exit game!\n");
			break;
		default:
			printf("Choose wrong ! Please try again!\n");
			break;
		}
	} while (input);
	return 0;
}

//int main()
//{
//	int input;
//	do
//	{
//		game_menu();
//		printf("Please choose:>>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("Game playing......\n");
//			//为了验证Mine_clearing的扫雷游戏测试是否ok
//			//这里暂时打印“Game playing”
//			//后续这里封装扫雷游戏 game()
//			break;
//		case 0:
//			printf("Exit game!\n");
//			break;
//		default:
//			printf("Choose wrong ! Please try again!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
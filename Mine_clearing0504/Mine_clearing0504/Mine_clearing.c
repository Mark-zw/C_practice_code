#define _CRT_SECURE_NO_WARNINGS 1 
/*******************/
//������Դ�ļ�Mine_clearing.c����
/*******************/
#include"game.h"
void game_menu()
{
	printf("**********************************\n");
	printf("********   1.play game   *********\n");
	printf("********   0.exit game   *********\n");
	printf("**********************************\n");
}
void Mine_clearing_game()//ɨ����Ϸ�ľ������
{
	//����������ά����
	char mine[ROWS][COLS] = { 0 };//����һ������׵�����
	char show[ROWS][COLS] = { 0 };//���̶�������Ų��׵���Ϣ������
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//��ӡ����
	//DisplayBoard(mine, ROW, COL);//��ӡ���̵�ʱ��ֻ��Ҫ��ӡ�м�Ĳ���
	DisplayBoard(show, ROW, COL);//�������������ΧһȦ����Ҫ��ӡ����

	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);//���ڲ��Լ��ʹ��
	 
	//�Ų���
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
			Mine_clearing_game();//ɨ����Ϸ
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
//			//Ϊ����֤Mine_clearing��ɨ����Ϸ�����Ƿ�ok
//			//������ʱ��ӡ��Game playing��
//			//���������װɨ����Ϸ game()
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
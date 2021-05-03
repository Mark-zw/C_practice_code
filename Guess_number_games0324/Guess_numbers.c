//#define _CRT_SECURE_NO_WARNINGS 1 
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("***************************\n");
//	printf("****  1.play   0.exit  ****\n");
//	printf("***************************\n");
//}
////RAND_MAX
//void game()//猜数字函数
//{
//	int guess = 0;
//	int ret = 0;
//	//拿时间戳来设置随机数的起点   time_t time( time_t *timer ); time_t long类型
//	//需要一个变化的数字,电脑上的时间是变化的
//	//1.生成随机数
//	ret = rand()%100+1;//设置生成1-100之间的随机数
//	//printf("%d\n",ret);
//	//2.猜数字
//	//printf("猜数字\n");
//	while (1)
//	{
//		printf("请猜数字：>>\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("猜大了\n");
//		else if (guess < ret)
//			printf("猜小了\n");
//		else
//		{
//			printf("你真棒！猜对了！\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do//游戏至少进行一次，可以进行多次，选择do...while语句
//	{
//		menu();
//		printf("请选择：>>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} 	while (input);
//	return 0;
//}
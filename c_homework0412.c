#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

//6.编写代码在一个整形有序数组中查找具体的某个数
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int input = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	printf("请输入要查找的数字：>>\n");
//	scanf("%d", &input);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (input > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (input < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标为：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("查找不到相应的数字\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
////5.完成上课的猜数字游戏
//void menu()
//{
//	printf("*********************\n");
//	printf("*****   1.play  *****\n");
//	printf("*****   0.exit  *****\n");
//	printf("*********************\n");
//}
//void game()
//{
//	int guess = 0;//接收玩家输入的（猜的）数字
//	int ret = 0;//用于生成一个随机数
//	ret = rand() % 100 + 100;//产生100-200之间的随机数
//	printf("请猜数字：>>\n");
//	scanf("%d", &guess);
//	while (1)
//	{
//		if (guess > ret)
//		{
//			printf("猜大了,请重新猜：>>\n");
//			scanf("%d", &guess);
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了,请重新猜：>>\n");
//			scanf("%d", &guess);
//		}
//		else
//		{
//			printf("你真棒，猜对了！congratulations！\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned)time(NULL));
//	int input = 0;
//	do
//	{ 
//	 menu();
//	 printf("请选择是否玩游戏：>>\n");
//	 scanf("%d", &input);
//	 switch (input)
//	 {
//	 case 1:
//		 game();
//		 break;
//	 case 0:
//		 printf("退出游戏\n");
//		 break;
//	 default:
//		 printf("选择错误！\n");
//	 }
//	} 	while (input);
//	return 0;
//}

//4.在屏幕上输出9*9乘法口诀表
//方法一  正向乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %2d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//方法二  反向乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 9; i > 0; i--)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %2d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////3.求10 个整数中最大值
//int main()
//{
//	int arr[10] = { 2,3,4,8,7,1,10,9,6,5 };
//	int i = 0;
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

////2、计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;//用来控制分数前面的正负号
//	for (i = 1.0; i <= 100; i++)
//	{
//		sum += (1.0/ i) * flag;
//		flag = -flag;
//	}
//	printf("sum = %lf\n", sum);
//	return 0;
//}

//1、编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;//用来统计出现9的个数
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//记录个位数为9的个数
//		{
//			count++;
//		}
//		if (i / 10 == 9)//记录十位数为9的个数
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}
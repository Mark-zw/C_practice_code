#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//循环语句 
//for语句
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 6)
			/*	break;*/
			continue;
		printf("%d ", i);
	}
		return 0;
}
//while 语句
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch > '0' && ch<'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
// }
////int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		if (i == 5)
//			break;
//		printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}
//分支switch语句
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d,n = %d\n", m, n);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个1-7的正整数：>>\n");
//	scanf("%d", &n);
//	switch (n)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("异常数字\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个1-7的正整数：>>\n");
//	scanf("%d", &n);
//	switch (n)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		printf("异常数字\n");
//	}
//	return 0;
//}


//分支if语句 三种形式
//int main()
//{ 
//	//3.if()  elseif()  结构
//	int age = 100;
//	if (age < 18)
//		printf("未成年\n");
//	else
//	{
//	 if (age >= 18 && age < 28)//不能直接使用 18<=age<28   (18<=age)<28 
//	printf("青年\n");
//	else if (age >= 28 && age < 58)
//	printf("中年\n");
//	else if (age >= 58 && age < 90)
//	printf("老年\n");
//	else if (age > 90)
//	printf("老不死\n");
//	}
//
//	//2.if()  else 结构
//	//int age = 22;
//	//if (age < 18)
//	//	printf("未成年\n");
//	//else
//	//	printf("成年\n");
//
//	//1.if()结构
//	//int age = 2;
//	//if (age < 18)
//	//	printf("未成年\n");
//	return 0;
//}
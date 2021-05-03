#define _CRT_SECURE_NO_WARNINGS 1 
#include<math.h>
#include<stdio.h>

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 1;
//	int b = 3;
//	int sum=Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

////依次将10个数输入，要求输出其中最大的数。
//int main()
//{
//	int arr[10] = { 5,24,44,2,55,35,36,66,27,30 };//假设输入的10数字
//	int Max = 0;//用来存储最大值
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[10]);//求数组元素的个数
//	for (i = 0; i < sz; i++)
//	{
//		if (Max < arr[i])
//			Max = arr[i];
//	}
//	printf("最大值为：%d\n", Max);
//}

//假设1代表醋，0代表酱油
//int main()
//{
//	int a = 1;
//	int b = 0;
//	int temp;
//	printf("未互换之前a = %d,b =%d\n", a, b);
//	temp = a;
//	a = b;
//	b = temp;
//	printf("互换之后a = %d,b =%d\n", a, b);
//	return 0;
//}

//素数判断
//int main()
//{
//	int n = 0;
//	int i = 0;
//	printf("请输入一个大于3的正整数：>>\n");
//	scanf("%d", &n);
//	for (i = 2; i <= sqrt(n); i++)//sqrt()函数为开平方函数，头文件为math.h
//	{
//		if (0 == (n % i))
//			break;
//	}
//	if (i > sqrt(n))//判断条件也需要相应的调整
//		printf("%d是不素数\n", n);
//	else
//		printf("%d是素数\n", n);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	printf("请输入一个大于3的正整数：>>\n");
//	scanf("%d", &n);
//	for (i = 2; i < n; i++)
//	{
//		if (0 == (n % i))
//			break;
//	}
//	if (i == n)
//		printf("%d不是素数\n", n);
//	else
//		printf("%d是素数\n", n);
//	return 0;
//}

//设置电脑2分钟后自动关机，如果输入“我是猪”就取消关机
//int main()
//{
//	char input[20];
//	//shutdown -s -t 120  设置在120s后关机
//	system("shutdown -s -t 120");
//	again:
//	printf("电脑将在两分钟后自动关机，如果输入“我是猪”将取消关机\n请输入：>>\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		printf("成功取消关机\n");
//		system("shutdown -a");
//	}
//	else
//	{
//		printf("输入错误,请重新输入\n");
//		goto again;
//	}
//	return 0;
//}
//

//int main()
//{
//	printf("hallo world\n");
//	goto again;
//	printf("zhangwu\n");
//	again:
//	printf("well-done,good job,perfect\n");
//	return 0;
//}
//分支与循环
//c语言是一门结构化的程序设计语言  三种基本结构 顺序结构、选择结构、循环结构
//选择结构 --- 分支语句：if   |   switch
//循环结构 --- 循环语句：while  |  for  |do while    goto语句
#include<stdio.h>

int main()
{
	//int i = 0;//初始化
	//while(i<10)//条件判断
	//{
	//	//......
	//	i++;//调整
	//}

	int i = 0;
	for(i=1;i<=10;i++)
	//初始化;条件判断;调整
	{
		printf("%d\n",i);
	}
	return 0;
}

//int main()
//{
//	int ch = 0;
//	while((ch=getchar())!= EOF)
//	{
//		if(ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	int rec = 0;
//	char password[20] = {0};
//	printf("请输入密码：>\n");
//	scanf("%s",password);
//	//缓冲区还剩一个'\n'
//	//getchar();//读取以下，清空缓存区
//	while((ch=getchar())!= '\n')
//	{
//		;
//	}
//	printf("请确认密码Y/N:>\n");
//	rec = getchar();
//	if(rec == 'Y')
//		printf("确认成功\n");
//	else
//		printf("放弃确认\n");
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while((ch=getchar())!= EOF)
//	{
//		putchar(ch);
//	}
//	/*int ch = getchar();
//	putchar(ch);
//	printf("  %c\n",ch);*/
//	return 0;
//}

//int main()
//{
//	//打印1-10的数字
//	int i = 1;
//	while(i<=10)
//	{
//		if(i == 5)
//			/*break;*/
//			continue;//会直接返回while
//	printf("%d\n",i);
//	i++;
//	}
//	//while(1)
//	//	printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch(n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch(n)
//		{
//		case 1:n++;
//		case 2:m++;n++;break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d,n = %d\n",m,n);
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	printf("请输入1-7的正整数\n");
//	scanf("%d",&day);
//	switch(day)
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
//		printf("输入错误\n");
//	}
//	return 0;
//}

//1.判断一个数是否为奇数
//int main()
//{
//	int a = 0;
//////	printf("请输入一个正整数\n");
//	scanf("%d",&a);
//	if(a%2 == 1)
//		printf("%d是一个奇数\n",a);
//	else
//		printf("%d不是一个奇数\n",a);
//	return 0;
//}

//2.输出1-100之间的奇数
//int main()
//{
//	int i = 1;
//	printf("1-100之间的奇数为：\n");
//	while(i<100)
//	{
//		printf("%d ",i);
//		i+=2;
//	}

	//while(i<=100)
	//{
	//	if(i%2 == 1)//!- 0
	//		printf("%d ",i);
	//	i++;
	//}
	//printf("\n");
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	/*if(num = 5)*/
//	if(5 == num)
//	{
//		printf("呵呵\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if(a == 1)
//	{
//		if(b == 2)
//			printf("hehe\n");
//	}
//		else
//			printf("haha\n");
//	return 0;
//}
//代码的写法不一样，很有可能造成理解的障碍
//养成良好的代码风格，便于阅读和理解



//int main()
//{
//	int age = 10;
//	if(age<18)
//	{
//		printf("未成年\n");
//	    printf("不能谈恋爱\n");
//	}
//	else if(age>=18 && age<28)
//		printf("壮年\n");
//	else if(age>=28 && age<50)
//		printf("中年\n");
//	else
//		printf("老年\n");
//	return 0;
//}

//int main()
//{
//	int a = 1; //由;隔开的程序句子叫做语句  
//	;//只有一个;没有其它内容，也是一条语句，叫做空语句
//	return 0;
//}

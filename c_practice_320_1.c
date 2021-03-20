#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int x = 0;
//	int y = 0;
//	printf("请输入你要知道的???-???年间的闰年情况：>>\n");
//	scanf("%d%d",&x,&y);
//	for(i=x;i<=y;i++)
//	{
//		if((i%4 == 0 && i%100 !=0)||(i%400 == 0))
//		{
//	         printf("%d年是闰年\n",i);
//			 a++;
//		}
//	    else
//		{
//		     printf("%d年不是闰年\n",i);
//			 b++;
//		}
//	}
//	printf("%d-%d年间有%d个闰年，%d个不是闰年\n",x,y,a,b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	for(i=2000;i<=2500;i++)
//	{
//		if((i%4 == 0 && i%100 !=0)||(i%400 == 0))
//		{
//	         printf("%d年是闰年\n",i);
//			 a++;
//		}
//	    else
//		{
//		     printf("%d年不是闰年\n",i);
//			 b++;
//		}
//	}
//	printf("2000-2500年间有%d个闰年，%d个不是闰年\n",a,b);
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	printf("请输入一个数字，查看该年份是否为闰年:>>\n");
//	scanf("%d",&x);
//	if((x%4 == 0 && x%100 !=0)||(x%400 == 0))
//		printf("%d年是闰年\n",x);
//	else
//		printf("%d年不是闰年\n",x);
//	return 0;
//}


//int main()
//{
//	int x = 0;
//	printf("请输入一个数字，查看该年份是否为闰年:>>\n");
//	scanf("%d",&x);
//	if(x%4 == 0)
//	{
//		if(x%100 == 0)
//		{
//			if(x%400 == 0)
//			{
//				printf("%d年是闰年\n",x);
//			}
//			else
//			{
//				printf("%d不是闰年\n",x);
//			}
//		}
//		else
//		{
//			printf("%d年是闰年\n",x);
//		}
//	}
//	else
//	{
//		printf("%d年是闰年\n",x);
//	}
//
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	char sex[5];
//	char id[9];
//	int score;
//};
//int main()
//{
//	/*struct stu a = {"小明","男","20210301",87};*/
//	struct stu a[100];
//	int i = 0;
//	int n = 0;
//	printf("请问您要输入几个学生的信息？>>\n");
//	scanf("%d",&n);
//	for(i = 0;i<n;i++)
//	{
//		printf("请按照 姓名  性别  学号  成绩 的格式输入第%d个学生的信息\n",i+1);
//		scanf("%s%s%s%d",&a[i].name,&a[i].sex,&a[i].id,&a[i].score);
//	}
//	for(i = 0;i<n;i++)
//	{
//		if(a[i].score>80)
//			printf("成绩大于80分的学号：%s，成绩：%d\n",a[i].id,a[i].score);
//	}
//	return 0;
//}
//


//struct stu
//{
//	char name[20];
//	char sex[5];
//	char id[9];
//	int score;
//};
//int main()
//{
//	/*struct stu a = {"小明","男","20210301",87};*/
//	struct stu a[100];
//	int i = 0;
//	int n = 0;
//	printf("请问您要输入几个学生的信息？>>\n");
//	scanf("%d",&n);
//	for(i = 0;i<n;i++)
//	{
//		printf("请按照 姓名  性别  学号  成绩 的格式输入第%d个学生的信息\n",i+1);
//		scanf("%s%s%s%d",&a[i].name,&a[i].sex,&a[i].id,&a[i].score);
//	}
//	for(i = 0;i<n;i++)
//	{
//		if(a[i].score>80)
//			printf("成绩大于80分的学号：%s，成绩：%d\n",a[i].id,a[i].score);
//	}
//	return 0;
//}

//int main()
//{
//	int p = 0;
//	int q = 0;
//	int ret = 0;
//	printf("请输入一个大于3的奇数:>>\n");
//	scanf("%d",&ret);
//	for(p = 1,q = 3;q<=ret;q=q+2)
//	{
//		p = p*q;
//	}
//	printf("%d\n",p);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	int p = 1;
//	printf("please input a positive integer:>>\n");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{ 
//		p = -p;
//		p = p*i;
//		sum = sum+p;
//	}
//	printf("sum = %d\n",sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	int p = 1;
//	printf("please input a positive integer:>>\n");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{ 
//		p = p*i;
//		sum = sum+p;
//	}
//	printf("sum = %d\n",sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	printf("please input a positive integer:>>\n");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{ 
//		int p = 1;
//	    int q = 1;
//		for(;q<=i;q++)
//		{
//			p = p*q;
//		}
//		sum = sum+p;
//	}
//	printf("sum = %d\n",sum);
//	return 0;
//}

//int main()
//{
//	int p = 1;
//	int q = 1;
//	int n = 0;
//	printf("please input a positive integer:>>\n");
//	scanf("%d",&n);
//	for(;q<=n;q++)
//	{
//		p = p*q;
//	}
//	printf("%d! = %d\n",n,p);
//	return 0;
//}

//int main()
//{
//	int p = 1;
//	int q = 2;
//	do
//	{
//		p = p*q;
//	    q++;
//	}
//	while(q<=5);
//	printf("%d\n",p);
//	return 0;
//}

//int main()
//{
//	int p = 1;
//	int q = 2;
//	for(;q<=5;q++)
//		p = p*q;
//	printf("%d\n",p);
//	return 0;
//}

//int main()
//{
//	int p = 1;
//	int q = 2;
//	while(q<=5)
//	{
//		p = p*q;
//	    q++;
//	}
//	printf("%d\n",p);
//	return 0;
//}
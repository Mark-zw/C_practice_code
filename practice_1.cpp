//#include<stdio.h>
// int main()
//{
	//1.输入"This is a C program"
	/*printf("// /* This is a C program.\n");*/

	//2.求两个整数之和
	/*int a = 0;
	int b = 0;
	int c = 0;
	int sum = 0;
	printf("请输入三个整数\n");
	scanf("%d%d%d",&a,&b,&c);
	sum = a+b+c;
	printf("%d+%d+%d = %d\n",a,b,c,sum);*/

	//3.求两个整数中的较大者
	//way1:借助第三个变量存储较大值
	/*int a = 1;
	int b = 2;
	int max = 0;
	if(a>b)
		max = a;
	else
		max = b;
	printf("%d与%d之间较大者为：%d\n",a,b,max);*/

	//way2:不借助其它变量
	/*int a = 1;
	int b = 2;
	if(a>b)
		printf("%d与%d之间较大者为：%d\n",a,b,a);
	else
		printf("%d与%d之间较大者为：%d\n",a,b,b);*/

	//way3:比较任意输入的两个整数值大小，输出较大值、较小值
	/*int a = 0;
	int b = 0;
	printf("请输入两个整数\n");
	scanf("%d%d",&a,&b);
	if(a>b)
		printf("较大值为：%d\n",a);
	else
		printf("较大值为：%d\n",b);*/

	//way4
	/*int max(int x,int y);
	int a,b,c;
	scanf("%d%d",&a,&b);
	c = max(a,b);
	printf("max = %d\n",c);*/

	//4.输出 "Hello World!"
	/*printf("Hello World!\n");*/

	//5.输出特定图形
	/*printf("*****\n");
	printf("  *****\n");
	printf("    *****\n");
	printf("      *****\n");*/

	//6.输入a,b,c三个值，输出其中最大值
	//way1
//	int a,b,c;
//	int max = 0;
//	printf("请输入三个整数值\n");
//	scanf("%d%d%d",&a,&b,&c);
//	if(a>b)
//		max = a;
//	else
//		max = b;
//	if(max>c)
//		printf("最大值为：%d\n",max);
//	else
//	{
//		max = c;
//		printf("最大值为：%d\n",max);
//	}
//	return 0;
//}
 //int max(int x,int y)
 //{
	// int z;
	// if(x>y)
	//	 z = x;
	// else
	//	 z = y;
	// return z;
 //}
   //way2
#include<stdio.h>
int main()
{
	int a,b,c;
	int max = 0;//max用于存储最大值，当然也可以将最大值存到变量a中
	printf("please input three integers\n");
	scanf("%d%d%d",&a,&b,&c);
	max = a;
	if(max<b)
		max = b;
	if(max<c)
		max = c;
	printf("max is %d\n",max);
	return 0;
}
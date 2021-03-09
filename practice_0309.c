#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
static int a = 2021;



//键盘输入一个>3的正整数 ->i，定义一个从2开始的变量 int j=2,让j从2递增到i-1 
//在这期间 用i%j,如果出现了余数为0的情况 代表i不是素数，否则代表i为素数  
// 定义一个变量z用来存储 出现因数的个数  若z = 0 素数 否则不为素数 
// 2.判断任意输入的大于3的正整数是否为质数
//int main()
//{
//	int i = 0;
//	int j = 2;
//	int z = 0;
//	printf("please input a integer bigger than 3\n");
//	scanf("%d",&i);
//	while(j<i)
//	{
//		if(i%j == 0)
//		{
//			z = z+1;
//		}
//		j++;
//	}
//	if(z == 0)
//	{
//		printf("%d is a prime number.\n",i);
//	}
//	else
//	{
//		printf("%d is not a prime number.\n",i);
//	}
//	return 0;
//}

//int main()
//{
//    int sign = 1;
//    double sum = 1;
//    double term = 1;
//    double deno = 2;
//    while(deno <= 100)
//    {
//        sign = (-1) *sign;
//        term = sign*(1/deno);// 问题所在 deno为整数 (1/deno) 为零  尝试解决方式1  将deno从int类型改为 double类型   成功
//        sum = sum + term;
//        deno++;
//    }
//    printf("sum = %lf \n",sum);
//	printf("deno = %lf \n",deno);
//    return 0;
//}
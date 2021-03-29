#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//1.华氏度转换为摄氏度
//int main()
//{
//	double x = 0;//存储华氏度
//	double y = 0;//存储摄氏度
//	printf("请输入华氏度:>>\n");
//	scanf("%lf", &x);
//	y = (x - 32) / 1.8;
//	printf("转换成摄氏度为：%lf\n",y);
//	return 0;
//}
// 
//2.计算存款利息 有1000元,想存一年。有3种方法可选:
//(1)活期,年利率为rl;(2)一年期定期,年利率为r2;(3)存两次半年定期,年利率为r3。
//请分别计算出一年后按3种方法所得到的本息和。r1=0.0036   r2=0.0225  r3=0.0198 
int main()
{
	double i = 1000;//本金
	double r1 = 0.0036;
	double r2 = 0.225;
	double r3 = 0.0198;
	double p1 = i * (1 + r1);
	double p2 = i * (1 + r2);
	double p3 = i * (1 + r3 / 2) * (1 + r3 / 2);
	printf("p1 = %lf,p2 = %lf,p3 = %lf\n", p1, p2, p3);
	return 0;
}
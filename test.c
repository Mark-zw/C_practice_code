#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	/*int input=0;
	printf("加入比特\n");
	printf("你要好好学习吗?(是1/否0)>:");
	scanf("%d",&input);
	if(input == 1)
		printf("好offer\n");
	else
		printf("卖红薯\n");*/
	int line=0;
	printf("加入比特\n");
	while(line<20000)
	{
	   printf("敲一行代码:%d\n",line);
	   line++;
	}
	if(line>=20000)
	   printf("恭喜你可以得到一个好offer\n");
	return 0;
}
//int main()
//{
//	extern int g_val;
//	printf("%d\n",g_val);
//	return 0;
//
//}


//int main()
//{
//	{
//	int num=2;
//	printf("%d\n",num);
//	}
//	
//	
//	return 0;
//}
//int main()
//{
//	////计算2个数的和
//	//int num1=0;
//	//int num2=0;
//	//int sum=0;
//	////输入数据-使用输入函数scanf
//	//scanf("%d%d",&num1,&num2);//&取地址符号
//	//
//	//sum=num1+num2;
//	//printf("sum= %d\n",sum);
//
//	/*printf("(are you ok??)\n");*/
//	/*printf("%c\n",'\'');*/
//	/*printf("%s\n","\"");*/
//	/*printf("%d\n",strlen("c:\test\32\test.c"));*///输出结果为13，解析：\t 为一个转义字符 长度为1，\32也是一个转义字符  长度为1 所以为13
//	//\32---32是2个8进制数字，32作为8进制代表的那个十进制数字，作为ASCII码值对应的字符  --->10进制为26 --->作为ASCII码值代表的字符
//	//通过查询ASCII码表，可以知道26对应的字符为->
//	//通过打印\32进行验证
//	//printf("%c\n",'\?');//输出 ?
//	//printf("%c\n",'\'');//输出 '
//	//printf("%c\n",'\"');//输出 "
//	//printf("%c\n",'\a');//输出 蜂鸣声音 叮咚
//	//printf("%c\n",'\b');//退格符
//	//printf("%c\n",'\f');//进纸符
//	//printf("%c\n",'\n');//换行符
//	//printf("%c\n",'\r');//回车符
//	//printf("%c\n",'\t');//水平制表符
//	//printf("%c\n",'\v');//垂直制表符
//	//printf("%c\n",'\200');//输出8进制 134代表的字符
//	//printf("%c\n",'\xcb');//输出16进制cb代表的字符
//	return 0;
//}
//int num2=20;//全局变量，定义在代码块main()外面的变量
//int a=100;
//int main()
//{
//	int a=10;//局部变量和全局变量的名字建议不要相同，名字相同时容易产生误会
//	//当局部变量和全局变量相同时，局部变量优先
//	int num1=10;//局部变量，定义在代码块main()里面的变量
//	printf("%d\n",a);
//
//	////年龄23 
//	//short age = 23;//向内存申请2个字节的空间=16bit 来存储变量age
//	//float weight=80.5f;
//	return 0;
//
//}

//int main()
//{
//	//char ch='A';//定义一个字符变量来存储'A'
//	//int age=20;
//	//float f=8.16;
//	//printf("%f\n",f);//%f---打印浮点小数  变量f
//	//printf("%d\n",age);//%d--- 打印整型十进制 变量age
//	//printf("%c\n",ch);//%c---打印字符变量ch存储的'A'
//
//	printf("一个字符char的长度为：");
//	printf("%d\n",sizeof(char));
//	printf("一个短整型short的长度为：");
//	printf("%d\n",sizeof(short));
//	printf("一个整型int的长度为：");
//	printf("%d\n",sizeof(int));
//	printf("一个长整型long的长度为：");
//	printf("%d\n",sizeof(long));
//	printf("一个长长整型long long的长度为：");
//	printf("%d\n",sizeof(long long));
//	printf("一个字符单浮点类型float的长度为：");
//	printf("%d\n",sizeof(float));
//	printf("一个字符双浮点型double的长度为：");
//	printf("%d\n",sizeof(double));
//	return 0;
//}
//%d---打印整型
//%c---打印字符
//%f---打印浮点数字\小数
//%p---以地址形式打印
//%x---打印16进制
//%o---......

//#include<stdio.h>
//int main( )
//{
//	printf("hallo wrold once again\n");
//	return 0;
//}



////包含一个叫stdio.h的文件
////std-标准  standard input output  标准输入输出函数
//#include<stdio.h>
//// int 是整型的意思
//// main前面的int表示main函数调用返回一个整型值
//int main( )//主函数-程序入口  main函数有且仅有一个  按F10 分步执行
//{
// printf("hi zhangwu\n");
// //函数 print function ---printf-打印函数   库函数 -c语言本身提供给我们使用的函数   别人的东西---打招呼 
// //#include 
// printf("hi zhangwu\n");
// printf("hi zhangwu\n");
// printf("hi zhangwu\n");
// printf("hi zhangwu\n");
// printf("hi zhangwu\n");
// printf("hi zhangwu\n");
// return 0;//返回 0-整数
//}

//#include <stdio.h>
// 
///*定义两个全局变量*/
//int x=1;
//int y=2;
//int addtwonum();
//int main(void)
//{
//    int result;
//    result = addtwonum();
//    printf("result 为: %d\n",result);
//    return 0;
//}
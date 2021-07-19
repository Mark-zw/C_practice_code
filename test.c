#define _CRT_SECURE_NO_WARNINGS 1 
//通讯录---静态版本
//1.通讯录能够存放1000个人的信息
//每个人的信息包含：
//名字+年龄+性别+电话+地址
//2.通讯录功能：
//1）增加人的信息
//2）删除指定人的信息
//3）查找指定人的信息
//4)修改指定人的信息
//5）排序通讯录的信息

//test.c  --- 通讯录的测试模块
//contact.h  --- 类型定义、函数声明
//contact.c --- 函数的实现

//版本2：动态增长的版本
//1.通讯录初始化后，能存放3个人的信息
//2.当我们的通讯录放满后，动态扩容2个

#include"contact.h"
void menu()
{
	printf("***********************************\n");
	printf("******  1.Add       2.Del    ******\n");
	printf("******  3.Search    4.Modify ******\n");
	printf("******  5.Sort      6.Print  ******\n");
	printf("******  0.Exit               ******\n");
	printf("***********************************\n");

}
enum Option
{
	Exit,
	Add,
	Del,
	Search,
	Modify,
	Sort,
	Print
};
int main()
{
	int input = 0;
	Contact con;//创建通讯录
	InitContact(&con);//初始化
	//在堆上给Data申请一块连续的空间 size = 0；capacity = 0
	do
	{
		menu();
		printf("请选择: >>");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			//增加人的信息
			AddContact(&con);
			break;
		case Del:
			//删除人的信息
			DelContact(&con);
			break;
		case Search:
			//查找
			SearchContact(&con);
			break;
		case Modify:
			//修改
			ModifyContact(&con);
			break;
		case Sort:
			//排序
			break;
		case Print:
			//打印
			PrintContact(&con);
			break;
		case Exit:
			//退出
			//销毁通讯录
			DestoryContact(&con);
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1 
#define _CRT_SECURE_NO_WARNINGS 1 
#include"contact.h"
void menu()
{
	printf("************************************\n");
	printf("******  1.Add       2.Del     ******\n");
	printf("******  3.Search    4.Modify  ******\n");
	printf("******  5.Sort      6.Print   ******\n");
	printf("******        0.exit          ******\n");
	printf("************************************\n");
}
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};
int main()
{
	int input = 0;
	Contact con;
	InitContact(&con);//初始化
	do
	{
		menu();
		printf("please choose:>>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//增加一个联系人
			AddContact(&con);
			break;
		case DEL:
			//删除一个联系人
			DelContact(&con);
			break;
		case SEARCH:
			//查找一个联系人---根据姓名查找
			SearchContact(&con);
			break;
		case MODIFY:
			//修改一个联系人--根据姓名修改
			ModifyContact(&con);
			break;
		case SORT:
			//排序---按照年龄
			SortContact(&con);
			break;
		case PRINT:
			//打印
			PrintContact(&con);
			break;
		case EXIT:
			//退出
			//销毁通讯录
			DestoryContact(&con);
			break;
		default:
			printf("choose wrong,please try again!\n");
		}
	} while (input);
	return 0;
}
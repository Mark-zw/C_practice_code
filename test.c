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
	InitContact(&con);//��ʼ��
	do
	{
		menu();
		printf("please choose:>>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//����һ����ϵ��
			AddContact(&con);
			break;
		case DEL:
			//ɾ��һ����ϵ��
			DelContact(&con);
			break;
		case SEARCH:
			//����һ����ϵ��---������������
			SearchContact(&con);
			break;
		case MODIFY:
			//�޸�һ����ϵ��--���������޸�
			ModifyContact(&con);
			break;
		case SORT:
			//����---��������
			SortContact(&con);
			break;
		case PRINT:
			//��ӡ
			PrintContact(&con);
			break;
		case EXIT:
			//�˳�
			//����ͨѶ¼
			DestoryContact(&con);
			break;
		default:
			printf("choose wrong,please try again!\n");
		}
	} while (input);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1 
//ͨѶ¼---��̬�汾
//1.ͨѶ¼�ܹ����1000���˵���Ϣ
//ÿ���˵���Ϣ������
//����+����+�Ա�+�绰+��ַ
//2.ͨѶ¼���ܣ�
//1�������˵���Ϣ
//2��ɾ��ָ���˵���Ϣ
//3������ָ���˵���Ϣ
//4)�޸�ָ���˵���Ϣ
//5������ͨѶ¼����Ϣ

//test.c  --- ͨѶ¼�Ĳ���ģ��
//contact.h  --- ���Ͷ��塢��������
//contact.c --- ������ʵ��

//�汾2����̬�����İ汾
//1.ͨѶ¼��ʼ�����ܴ��3���˵���Ϣ
//2.�����ǵ�ͨѶ¼�����󣬶�̬����2��

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
	Contact con;//����ͨѶ¼
	InitContact(&con);//��ʼ��
	//�ڶ��ϸ�Data����һ�������Ŀռ� size = 0��capacity = 0
	do
	{
		menu();
		printf("��ѡ��: >>");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			//�����˵���Ϣ
			AddContact(&con);
			break;
		case Del:
			//ɾ���˵���Ϣ
			DelContact(&con);
			break;
		case Search:
			//����
			SearchContact(&con);
			break;
		case Modify:
			//�޸�
			ModifyContact(&con);
			break;
		case Sort:
			//����
			break;
		case Print:
			//��ӡ
			PrintContact(&con);
			break;
		case Exit:
			//�˳�
			//����ͨѶ¼
			DestoryContact(&con);
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}
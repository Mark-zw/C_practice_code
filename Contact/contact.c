#define _CRT_SECURE_NO_WARNINGS 1 
#include"contact.h"
//��ʼ����ʵ��---��̬�汾
//void InitContact(Contact* pc)
//{
//	pc->size = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}

//��ʼ��---��̬�汾
void InitContact(Contact* pc)
{
	pc->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	if (pc->data == NULL)
	{
		perror("InitContact");
		return;
	}
	pc->size = 0;
	pc->capacity = DEFAULT_SZ;
}

//������ϵ��---��̬�汾
//void AddContact(Contact* pc)
//{
//	//�ж�ͨѶ¼����ռ��������
//	if (pc->size == MAX_PEO)
//	{
//		printf("The Contact is full! Add information failed!\n");
//		return;
//	}
//	//����һ���˵���Ϣ
//	printf("Please input name:>>");
//	scanf("%s", pc->data[pc->size].name);
//	printf("Please input age:>>");
//    scanf("%d", &pc->data[pc->size].age);
//	printf("Please input sex:>>");
//	scanf("%s", pc->data[pc->size].sex);
//	printf("Please input telephone numbers:>>");
//	scanf("%s", pc->data[pc->size].tele);
//	printf("Please input address:>>");
//	scanf("%s", pc->data[pc->size].addr);
//	printf("AddContact Suceess!\n");
//	pc->size++;
//}

//������ϵ��---��̬�汾
void AddContact(Contact* pc)
{
	//���Ƕ�̬����
	if (pc->size == pc->capacity)
	{
		PeoInfo* ptr =(PeoInfo*) realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity = pc->capacity + INC_SZ;
			printf("Increase Capacity Success!\n");
		}
		else
		{
			perror("AddContact");
			printf("Add new contact failed!\n");
			return;
		}
	}
	
	//����һ���˵���Ϣ
	printf("Please input name:>>");
	scanf("%s", pc->data[pc->size].name);
	printf("Please input age:>>");
	scanf("%d", &pc->data[pc->size].age);
	printf("Please input sex:>>");
	scanf("%s", pc->data[pc->size].sex);
	printf("Please input telephone numbers:>>");
	scanf("%s", pc->data[pc->size].tele);
	printf("Please input address:>>");
	scanf("%s", pc->data[pc->size].addr);

	pc->size++;
	printf("Add Contact Suceess!\n");
}

//����
void DestoryContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->size = 0;
	pc->capacity = 0;
}


//��ӡ
void PrintContact(const Contact* pc)
{
	int i = 0;
	//��ӡ����
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "Name", "Age", "Sex", "Tele", "Address");
	//��ӡ����
	for (i = 0; i < pc->size; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", pc->data[i].name,
			pc->data[i].age, pc->data[i].sex, 
			pc->data[i].tele, pc->data[i].addr);
	}
	return;
}

static int FindByName(Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->size; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

//ɾ��һ���˵���Ϣ
void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	//�ж�ͨѶ¼�Ƿ�����Ϣ
	if (pc->size == 0)
	{
		printf("The Contact is empty!\n");
		return;
	}
	printf("Please input the name to delete:>>");
	scanf("%s", name);

	//1.����ɾ������
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("The people that you want to delete is not exit!\n");
		return;
	}
	else
	{
		int i = 0;
		for (i = pos; i < pc->size - 1; i++)
		{
			pc->data[i] = pc->data[i + 1];
		}
		pc->size--;

		printf("Delete Success!\n");
	}
}
//����
void SearchContact(const Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	//�ж�ͨѶ¼�Ƿ�����Ϣ
	if (pc->size == 0)
	{
		printf("The Contact is empty!\n");
		return;
	}
	printf("Please input the name to search:>>");
	scanf("%s", name);

	//1.������
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("The people that you want to search is not exit!\n");
		return;
	}
	else
	{
		//��ӡ
		//��ӡ����
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "Name", "Age", "Aex", "Tele", "Tddress");
		//��ӡ����
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", pc->data[pos].name,
			pc->data[pos].age, pc->data[pos].sex,
			pc->data[pos].tele, pc->data[pos].addr);

		printf("Search Suceess!\n");
	}
}
//�޸�
void ModifyContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	//�ж�ͨѶ¼�Ƿ�����Ϣ
	if (pc->size == 0)
	{
		printf("The Contact is empty!\n");
		return;
	}
	printf("Please input the name to modify:>>");
	scanf("%s", name);

	//1.�����޸ĵ���
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("The people that you want to modify is not exit!\n");
		return;
	}
	else
	{
		printf("Please input name:>>");
		scanf("%s", pc->data[pos].name);
		printf("Please input age:>>");
		scanf("%d", &pc->data[pos].age);
		printf("Please input sex:>>");
		scanf("%s", pc->data[pos].sex);
		printf("Please input telephone numbers:>>");
		scanf("%s", pc->data[pos].tele);
		printf("Please input address:>>");
		scanf("%s", pc->data[pos].addr);

		printf("Modify Suceess!\n");
	}
}

#define _CRT_SECURE_NO_WARNINGS 1 
#include"contact.h"
void InitContact(Contact* pc)//��ʼ��
{
	pc->size = 0;
	memset(pc->data, 0, sizeof(pc->data));
}
//��ӡ
void PrintContact(Contact* pc)
{
	printf("%-20s %-4s %-8s %-12s %-20s\n",
		"name", "age",
		"sex", "telephone",
		"address");
	int i = 0;
	for (i = 0; i < pc->size; i++)
	{
		printf("%-20s %-4d %-8s %-12s %-20s\n",
			pc->data[i].name, pc->data[i].age,
			pc->data[i].sex, pc->data[i].tele,
			pc->data[i].address);
	}
}
//����һ����ϵ��
void AddContact(Contact* pc)
{
	//�ж��Ƿ��пռ������
	if (pc->size == MAX_SIZE)
	{
		printf("The contact is full!\n");
		return;
	}
	printf("please input name:>>");
	scanf("%s", pc->data[pc->size].name);
	printf("please input age:>>");
	scanf("%d", &pc->data[pc->size].age); 
	printf("please input sex:>>");
	scanf("%s", pc->data[pc->size].sex);
	printf("please input telephone:>>");
	scanf("%s", pc->data[pc->size].tele);
	printf("please input address:>>");
	scanf("%s", pc->data[pc->size].address);
	pc->size++;
	printf("Add a contact success!\n");
}
//ɾ��һ����ϵ��
void DelContact(Contact* pc)
{
	//�ж��Ƿ���Ԫ����ɾ��
	if (pc->size == 0)
	{
		printf("The contact is empty!\n");
		return;
	}
	pc->size--;
	printf("Delete a contact success!\n");
}
//����һ����ϵ��---������������
void SearchContact(Contact* pc)
{
	char Name[20] = { 0 };
	int i = 0;
	printf("please input the name you want to search:>>");
	scanf("%s", Name);
	for (i = 0; i < pc->size; i++)
	{
		if (strcmp(pc->data[i].name, Name) == 0)
			break;
	}
	if (i < pc->size)
	{
		printf("Find it!\n");
		printf("%-20s %-4s %-8s %-12s %-20s\n",
			"name", "age",
			"sex", "telephone",
			"address");
		printf("%-20s %-4d %-8s %-12s %-20s\n",
			pc->data[i].name, pc->data[i].age,
			pc->data[i].sex, pc->data[i].tele,
			pc->data[i].address);
	}
	else
	{
		printf("The name you input isn't exit!\n");
	}
}
//�޸�һ����ϵ��--���������޸�
void ModifyContact(Contact* pc)
{
	char Name[20] = { 0 };
	int i = 0;
	printf("please input the name you want to modify:>>");
	scanf("%s", Name);
	for (i = 0; i < pc->size; i++)
	{
		if (strcmp(pc->data[i].name, Name) == 0)
			break;
	}
	if (i < pc->size)
	{
		printf("Find it!\n");
		printf("please input name:>>");
		scanf("%s", pc->data[i].name);
		printf("please input age:>>");
		scanf("%d", &pc->data[i].age);
		printf("please input sex:>>");
		scanf("%s", pc->data[i].sex);
		printf("please input telephone:>>");
		scanf("%s", pc->data[i].tele);
		printf("please input address:>>");
		scanf("%s", pc->data[i].address);
		printf("Modify a contact success!\n");
		PrintContact(pc);
	}
	else
	{
		printf("The name you input isn't exit!\n");
	}
}
//����---��������
void SortContact(Contact* pc)
{
	//�ж���ϵ���Ƿ�Ϊ��
	if (pc->size == 0)
	{
		printf("The contact is empty!\n");
		return;
	}
	//������������--��ð�ݷ�--ע�⽻��ʱ��Ҫ�������ṹ��Ԫ�ؽ��н���
	PeoInfo temp = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < pc->size; i++)
	{
		for (j = 0; j < pc->size - 1 - i; j++)
		{
			if (pc->data[j].age >= pc->data[j + 1].age)
			{
				temp = pc->data[j];
				pc->data[j] = pc->data[j + 1];
				pc->data[j + 1] = temp;
			}
		}
	}
	printf("Sort a contact success!\n");
	PrintContact(pc);
}
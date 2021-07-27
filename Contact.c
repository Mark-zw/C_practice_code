#define _CRT_SECURE_NO_WARNINGS 1 
#include"contact.h"
//void InitContact(Contact* pc)//初始化
//{
//	pc->size = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}
void InitContact(Contact* pc)//初始化
{
	pc->size = 0;
	pc->capacity = INIT_SIZE;
	PeoInfo* ptr = (PeoInfo*)malloc(pc->capacity * sizeof(PeoInfo));
	if (ptr == NULL)
	{
		printf("malloc fail!\n");
		return;
	}
	pc->data = ptr;
}

//销毁通讯录
void DestoryContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->size = 0;
	pc->capacity = 0;
	printf("Destory a contact success!\n");
}
//保存信息到文件
void SaveContact(Contact* pc)
{
	FILE* pf = fopen("contact.dat", "w");
	if (pf == NULL)
	{
		perror("SaveContact");
		return;
	}
	//写文件
	int i = 0;
	for (i = 0; i < pc->size; i++)
	{
		fwrite(pc->data + 1, sizeof(PeoInfo), 1, pf);
	}
	//关闭文件
	fclose(pf);
}

//打印
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
//进行扩容检查并扩容
void CheckCapacity(Contact* pc)
{
	//判断是否需要扩容
	if (pc->size == pc->capacity)
	{
		//扩容
		pc->capacity += 2;
		PeoInfo* ptr = (PeoInfo*)realloc(pc->data, pc->capacity * sizeof(PeoInfo));
		if (ptr == NULL)
		{
			printf("realloc fail!\n");
			return;
		}
		pc->data = ptr;
		printf("Increase capacity success!\n");
	}
}
//增加一个联系人
void AddContact(Contact* pc)
{
	////判断是否有空间来添加
	//if (pc->size == pc->capacity)
	//{
	//	printf("The contact is full!\n");
	//	return;
	//}

	//进行扩容检查并扩容
	CheckCapacity(pc);
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
//删除一个联系人
void DelContact(Contact* pc)
{
	//判断是否有元素来删除
	if (pc->size == 0)
	{
		printf("The contact is empty!\n");
		return;
	}
	pc->size--;
	printf("Delete a contact success!\n");
}
//查找一个联系人---根据姓名查找
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
//修改一个联系人--根据姓名修改
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
//排序---按照年龄
void SortContact(Contact* pc)
{
	//判断联系人是否为空
	if (pc->size == 0)
	{
		printf("The contact is empty!\n");
		return;
	}
	//根据年龄排序--用冒泡法--注意交换时需要将整个结构体元素进行交换
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

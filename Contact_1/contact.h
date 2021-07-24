#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//静态的版本

typedef struct PeoInfo//存放个人信息
{
	char name[20];//姓名
	short age;//年龄
	char sex[7];//性别
	char tele[12];//电话
	char address[20];//地址
}PeoInfo;

#define MAX_SIZE 100
//创建一个通讯录
typedef struct Contact
{
	PeoInfo data[MAX_SIZE];//存放100个人信息的数组
	int size;//表示当前存储个数
}Contact;

void InitContact(Contact* pc);//初始化
//打印
void PrintContact(Contact* pc);
//增加一个联系人
void AddContact(Contact* pc);
//删除一个联系人
void DelContact(Contact* pc);
//查找一个联系人---根据姓名查找
void SearchContact(Contact* pc);
//修改一个联系人--根据姓名修改
void ModifyContact(Contact* pc);
//排序---按照年龄
void SortContact(Contact* pc);
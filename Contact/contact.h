#pragma once

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

#define MAX_PEO 1000

#define DEFAULT_SZ 3
#define INC_SZ 2

typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;
typedef struct Contact
{
	//PeoInfo data[MAX_PEO];
	PeoInfo* data;//指向动态申请的空间
	int size;//记录当前有效信息的个数
	int capacity;//记录当前通讯录的最大容量
}Contact;
void InitContact(Contact* pc);//初始化
void AddContact(Contact* pc);//增加
void PrintContact(const Contact* pc);//打印
void DelContact(Contact* pc);//删除
void SearchContact(const Contact* pc);//查找
void ModifyContact(Contact* pc);//修改
void DestoryContact(Contact* pc);//销毁

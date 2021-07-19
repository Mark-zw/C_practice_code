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
	PeoInfo* data;//ָ��̬����Ŀռ�
	int size;//��¼��ǰ��Ч��Ϣ�ĸ���
	int capacity;//��¼��ǰͨѶ¼���������
}Contact;
void InitContact(Contact* pc);//��ʼ��
void AddContact(Contact* pc);//����
void PrintContact(const Contact* pc);//��ӡ
void DelContact(Contact* pc);//ɾ��
void SearchContact(const Contact* pc);//����
void ModifyContact(Contact* pc);//�޸�
void DestoryContact(Contact* pc);//����

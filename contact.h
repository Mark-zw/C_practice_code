#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//��̬�İ汾

typedef struct PeoInfo//��Ÿ�����Ϣ
{
	char name[20];//����
	short age;//����
	char sex[7];//�Ա�
	char tele[12];//�绰
	char address[20];//��ַ
}PeoInfo;

#define MAX_SIZE 100
//����һ��ͨѶ¼
typedef struct Contact
{
	PeoInfo data[MAX_SIZE];//���100������Ϣ������
	int size;//��ʾ��ǰ�洢����
}Contact;

void InitContact(Contact* pc);//��ʼ��
//��ӡ
void PrintContact(Contact* pc);
//����һ����ϵ��
void AddContact(Contact* pc);
//ɾ��һ����ϵ��
void DelContact(Contact* pc);
//����һ����ϵ��---������������
void SearchContact(Contact* pc);
//�޸�һ����ϵ��--���������޸�
void ModifyContact(Contact* pc);
//����---��������
void SortContact(Contact* pc);
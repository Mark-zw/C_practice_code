#include <stdio.h>
#include <string.h>

//��ͨ������ int char double ��������������һ�����ӵĶ���
//�ṹ��---�������ӵĶ���
// ��   ����/�Ա�/���/���� �ȵ�
// ��   ����/����/�۸�/������  �ȵ�

//���� ���ýṹ����������
struct Book 
{
	char name[20];
	char author[20];
	short price;
};
//�ṹ����һ�����ݵĶ��巽ʽ�������� int a ;  ������Ҫ������������־�� ; ����������Ҫ



int main()
{
	//���ýṹ������---����һ�������͵Ľṹ�����
	struct Book b1 = {"C���Գ������","̷��ǿ",55};
	struct Book* p = &b1;
	/*printf("������%s\n",b1.name);
	printf("���ߣ�%s\n",b1.author);
	printf("�۸�%dԪ\n",b1.price);
	b1.price = 15;
	printf("�޸ĺ�ļ۸�%dԪ\n",b1.price);*/


	//.    �ṹ�����.��Ա
	//->   �ṹ��ָ��->��Ա
	printf("������%s\n",(*p).name);
	printf("���ߣ�%s\n",(*p).author);
	printf("�۸�%dԪ\n",(*p).price);

	//�޸����֣�strcpy---string copy �ַ�����������,��Ҫ����ͷ�ļ� string.h 
	//strcpy( ������,"�仯���ַ���" )����������
	strcpy(b1.name,"C++");
	printf("�޸ĺ��������%s\n",(*p).name);
	(*p).price = 15;
	printf("�޸ĺ�ļ۸�%dԪ\n",p->price);



	return 0;
}
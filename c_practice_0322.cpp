#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//ѭ����� 
//for���
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 6)
			/*	break;*/
			continue;
		printf("%d ", i);
	}
		return 0;
}
//while ���
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch > '0' && ch<'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
// }
////int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		if (i == 5)
//			break;
//		printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}
//��֧switch���
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d,n = %d\n", m, n);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	printf("������һ��1-7����������>>\n");
//	scanf("%d", &n);
//	switch (n)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�쳣����\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	printf("������һ��1-7����������>>\n");
//	scanf("%d", &n);
//	switch (n)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�쳣����\n");
//	}
//	return 0;
//}


//��֧if��� ������ʽ
//int main()
//{ 
//	//3.if()  elseif()  �ṹ
//	int age = 100;
//	if (age < 18)
//		printf("δ����\n");
//	else
//	{
//	 if (age >= 18 && age < 28)//����ֱ��ʹ�� 18<=age<28   (18<=age)<28 
//	printf("����\n");
//	else if (age >= 28 && age < 58)
//	printf("����\n");
//	else if (age >= 58 && age < 90)
//	printf("����\n");
//	else if (age > 90)
//	printf("�ϲ���\n");
//	}
//
//	//2.if()  else �ṹ
//	//int age = 22;
//	//if (age < 18)
//	//	printf("δ����\n");
//	//else
//	//	printf("����\n");
//
//	//1.if()�ṹ
//	//int age = 2;
//	//if (age < 18)
//	//	printf("δ����\n");
//	return 0;
//}
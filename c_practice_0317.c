//��֧��ѭ��
//c������һ�Žṹ���ĳ����������  ���ֻ����ṹ ˳��ṹ��ѡ��ṹ��ѭ���ṹ
//ѡ��ṹ --- ��֧��䣺if   |   switch
//ѭ���ṹ --- ѭ����䣺while  |  for  |do while    goto���
#include<stdio.h>

int main()
{
	//int i = 0;//��ʼ��
	//while(i<10)//�����ж�
	//{
	//	//......
	//	i++;//����
	//}

	int i = 0;
	for(i=1;i<=10;i++)
	//��ʼ��;�����ж�;����
	{
		printf("%d\n",i);
	}
	return 0;
}

//int main()
//{
//	int ch = 0;
//	while((ch=getchar())!= EOF)
//	{
//		if(ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	int rec = 0;
//	char password[20] = {0};
//	printf("���������룺>\n");
//	scanf("%s",password);
//	//��������ʣһ��'\n'
//	//getchar();//��ȡ���£���ջ�����
//	while((ch=getchar())!= '\n')
//	{
//		;
//	}
//	printf("��ȷ������Y/N:>\n");
//	rec = getchar();
//	if(rec == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("����ȷ��\n");
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while((ch=getchar())!= EOF)
//	{
//		putchar(ch);
//	}
//	/*int ch = getchar();
//	putchar(ch);
//	printf("  %c\n",ch);*/
//	return 0;
//}

//int main()
//{
//	//��ӡ1-10������
//	int i = 1;
//	while(i<=10)
//	{
//		if(i == 5)
//			/*break;*/
//			continue;//��ֱ�ӷ���while
//	printf("%d\n",i);
//	i++;
//	}
//	//while(1)
//	//	printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch(n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch(n)
//		{
//		case 1:n++;
//		case 2:m++;n++;break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d,n = %d\n",m,n);
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	printf("������1-7��������\n");
//	scanf("%d",&day);
//	switch(day)
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
//		printf("�������\n");
//	}
//	return 0;
//}

//1.�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int a = 0;
//////	printf("������һ��������\n");
//	scanf("%d",&a);
//	if(a%2 == 1)
//		printf("%d��һ������\n",a);
//	else
//		printf("%d����һ������\n",a);
//	return 0;
//}

//2.���1-100֮�������
//int main()
//{
//	int i = 1;
//	printf("1-100֮�������Ϊ��\n");
//	while(i<100)
//	{
//		printf("%d ",i);
//		i+=2;
//	}

	//while(i<=100)
	//{
	//	if(i%2 == 1)//!- 0
	//		printf("%d ",i);
	//	i++;
	//}
	//printf("\n");
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	/*if(num = 5)*/
//	if(5 == num)
//	{
//		printf("�Ǻ�\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if(a == 1)
//	{
//		if(b == 2)
//			printf("hehe\n");
//	}
//		else
//			printf("haha\n");
//	return 0;
//}
//�����д����һ�������п�����������ϰ�
//�������õĴ����񣬱����Ķ������



//int main()
//{
//	int age = 10;
//	if(age<18)
//	{
//		printf("δ����\n");
//	    printf("����̸����\n");
//	}
//	else if(age>=18 && age<28)
//		printf("׳��\n");
//	else if(age>=28 && age<50)
//		printf("����\n");
//	else
//		printf("����\n");
//	return 0;
//}

//int main()
//{
//	int a = 1; //��;�����ĳ�����ӽ������  
//	;//ֻ��һ��;û���������ݣ�Ҳ��һ����䣬���������
//	return 0;
//}

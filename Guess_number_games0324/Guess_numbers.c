//#define _CRT_SECURE_NO_WARNINGS 1 
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("***************************\n");
//	printf("****  1.play   0.exit  ****\n");
//	printf("***************************\n");
//}
////RAND_MAX
//void game()//�����ֺ���
//{
//	int guess = 0;
//	int ret = 0;
//	//��ʱ�������������������   time_t time( time_t *timer ); time_t long����
//	//��Ҫһ���仯������,�����ϵ�ʱ���Ǳ仯��
//	//1.���������
//	ret = rand()%100+1;//��������1-100֮��������
//	//printf("%d\n",ret);
//	//2.������
//	//printf("������\n");
//	while (1)
//	{
//		printf("������֣�>>\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//			printf("�´���\n");
//		else if (guess < ret)
//			printf("��С��\n");
//		else
//		{
//			printf("��������¶��ˣ�\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do//��Ϸ���ٽ���һ�Σ����Խ��ж�Σ�ѡ��do...while���
//	{
//		menu();
//		printf("��ѡ��>>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//
//	} 	while (input);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1 
#include<math.h>
#include<stdio.h>

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 1;
//	int b = 3;
//	int sum=Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

////���ν�10�������룬Ҫ�����������������
//int main()
//{
//	int arr[10] = { 5,24,44,2,55,35,36,66,27,30 };//���������10����
//	int Max = 0;//�����洢���ֵ
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[10]);//������Ԫ�صĸ���
//	for (i = 0; i < sz; i++)
//	{
//		if (Max < arr[i])
//			Max = arr[i];
//	}
//	printf("���ֵΪ��%d\n", Max);
//}

//����1����ף�0������
//int main()
//{
//	int a = 1;
//	int b = 0;
//	int temp;
//	printf("δ����֮ǰa = %d,b =%d\n", a, b);
//	temp = a;
//	a = b;
//	b = temp;
//	printf("����֮��a = %d,b =%d\n", a, b);
//	return 0;
//}

//�����ж�
//int main()
//{
//	int n = 0;
//	int i = 0;
//	printf("������һ������3����������>>\n");
//	scanf("%d", &n);
//	for (i = 2; i <= sqrt(n); i++)//sqrt()����Ϊ��ƽ��������ͷ�ļ�Ϊmath.h
//	{
//		if (0 == (n % i))
//			break;
//	}
//	if (i > sqrt(n))//�ж�����Ҳ��Ҫ��Ӧ�ĵ���
//		printf("%d�ǲ�����\n", n);
//	else
//		printf("%d������\n", n);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	printf("������һ������3����������>>\n");
//	scanf("%d", &n);
//	for (i = 2; i < n; i++)
//	{
//		if (0 == (n % i))
//			break;
//	}
//	if (i == n)
//		printf("%d��������\n", n);
//	else
//		printf("%d������\n", n);
//	return 0;
//}

//���õ���2���Ӻ��Զ��ػ���������롰��������ȡ���ػ�
//int main()
//{
//	char input[20];
//	//shutdown -s -t 120  ������120s��ػ�
//	system("shutdown -s -t 120");
//	again:
//	printf("���Խ��������Ӻ��Զ��ػ���������롰��������ȡ���ػ�\n�����룺>>\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		printf("�ɹ�ȡ���ػ�\n");
//		system("shutdown -a");
//	}
//	else
//	{
//		printf("�������,����������\n");
//		goto again;
//	}
//	return 0;
//}
//

//int main()
//{
//	printf("hallo world\n");
//	goto again;
//	printf("zhangwu\n");
//	again:
//	printf("well-done,good job,perfect\n");
//	return 0;
//}
//��֧��ѭ��
//#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	char password[20]={0};
	for(i = 0;i<3;i++)
	{
	    printf("���������룺>\n");
	    scanf("%s",password);
		/*if(password=="123456")*/
		//== ���������Ƚ������ַ����Ƿ����
		//Ӧ��ʹ��һ���⺯��strcmp
		if(strcmp(password,"123456")==0)
		// == 0 ����strcmp�������Ƚϵ������ַ������
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if(i == 3)
		printf("�����������3�Σ��˳���¼\n");
	return 0;
}

//int main()
//{
//	//welcome to bit!!!!!!   ��������Ч�����д�ӡ
//	//####################
//	//w##################!
//	//we################!!
//	//wel##############!!!
//	//......
//	//welcome to bit!!!!!!
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1)/sizeof(arr1[0])-1;//error �ַ���"welcome to bit!!!!!!"������һ��\0 
//	//����sizeof(arr1)/sizeof(arr1[0])-1��ʾ����\0��λ��  sizeof(arr1)/sizeof(arr1[0])-2�������һ������λ��
//	int right = strlen(arr1);
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//	    arr2[right] = arr1[right];
//	    printf("%s\n",arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n",arr2);
//	return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	while(left<=right)
//	{
//		int mid = (left+right)/2;
//	if(arr[mid]>k)
//	{
//		right = mid-1;
//	}
//	else if(arr[mid]<k)
//	{
//		left = mid+1;
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�Ϊ��%d\n",mid);
//		break;
//	}
//	}
//	if(left>right)
//		printf("�Ҳ���\n");
//	return 0;
//}

//����ĳһ����ǰ����׳�֮��

//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[1]);
//	for(i=0;i<sz;i++)
//	{
//		if(arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±�Ϊ%d\n",i);
//			break;
//		}
//	}
//	if(i == sz)
//		printf("�Ҳ�����\n");
//	return 0;
//}

//int main()
//{
//	int ret = 1;
//	int sum = 0;
//	int n = 0;
//	for(n=1;n<=10;n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum = %d\n",sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int MAX = 0;
//    int s = 1;
//	int Y = 0;
//	printf("������һ�����������䱾��ǰ����׳�֮�ͣ�>\n");
//	scanf("%d",&MAX);
//	for(n=1;n<=MAX;n++)
//	{
//	for(i = 1,s = 1;i<=n;i++)
//	{
//		s=s*i;
//	}
//	Y=Y+s;
//	}
//	printf("%d������ǰn��׳�֮��Ϊ��%d\n",MAX,Y);
//	return 0;
//}

//#define n  8
//����ĳһ�����Ľ׳�
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int s = 1;
//	printf("������һ����������������׳ˣ�>");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		s=s*i;
//	}
//	printf("%d�Ľ׳�Ϊ��%d\n",n,s);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		if(i == 5)
//			continue;//��ӡ 1 2 3 4 ����ѭ��
//			/*break;*///��ӡ 1 2 3 4 ����
//	printf("%d ",i);
//	i++;
//	}
//	while(i<=10);
//	return 0;
//}

//int main()
//{
//	//����Ҫѭ�����ٴΣ�
//	int i = 0;
//	int k = 0;
//	for(i = 0,k = 0;k = 0;i++,k++)
//	{
//		printf("haha ");
//		k++;
//	}
//
//	/*int x,y;
//	for(x=0,y=0;x<2&&y<5;++x,y++)
//	{
//		printf("hehe\n");
//	}
//*/
//	//int i = 0;
//	//int j = 0;
//	//for(;i<10;i++)
//	//{
//	//	for(;j<10;j++)
//	//	{
//	//		printf("haha\n");
//	//		/*printf("%d%d ",i,j);*/
//	//	}
//	//}
//	return 0;
//}

//int main()
//{
//	//int i = 0;
//	//for(i=1;i<10;i++)//�������ǰ�պ����� д��
//	//{
//	//	if(i == 5)//������forѭ�������޸�ѭ����������ֹforѭ��ʧ��
//	//		printf("haha\n");
//	//	printf("hehe\n");
//	//}
//	/*for(;;)
//	{
//		printf("haha\n");
//	}*/
//	return 0;
//}
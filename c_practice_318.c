//分支与循环
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
	    printf("请输入密码：>\n");
	    scanf("%s",password);
		/*if(password=="123456")*/
		//== 不能用来比较两个字符串是否相等
		//应该使用一个库函数strcmp
		if(strcmp(password,"123456")==0)
		// == 0 代表strcmp里面的相比较的两个字符串相等
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if(i == 3)
		printf("密码输入错误3次，退出登录\n");
	return 0;
}

//int main()
//{
//	//welcome to bit!!!!!!   按照以下效果进行打印
//	//####################
//	//w##################!
//	//we################!!
//	//wel##############!!!
//	//......
//	//welcome to bit!!!!!!
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1)/sizeof(arr1[0])-1;//error 字符串"welcome to bit!!!!!!"后面有一个\0 
//	//所以sizeof(arr1)/sizeof(arr1[0])-1表示的是\0的位置  sizeof(arr1)/sizeof(arr1[0])-2才是最后一个！的位置
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
//		printf("找到了，下标为：%d\n",mid);
//		break;
//	}
//	}
//	if(left>right)
//		printf("找不到\n");
//	return 0;
//}

//计算某一个数前几项阶乘之和

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
//			printf("找到了，下标为%d\n",i);
//			break;
//		}
//	}
//	if(i == sz)
//		printf("找不到了\n");
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
//	printf("请输入一个正整数求其本身及前几项阶乘之和：>\n");
//	scanf("%d",&MAX);
//	for(n=1;n<=MAX;n++)
//	{
//	for(i = 1,s = 1;i<=n;i++)
//	{
//		s=s*i;
//	}
//	Y=Y+s;
//	}
//	printf("%d本身及其前n项阶乘之和为：%d\n",MAX,Y);
//	return 0;
//}

//#define n  8
//计算某一个数的阶乘
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int s = 1;
//	printf("请输入一个正整数来计算其阶乘：>");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		s=s*i;
//	}
//	printf("%d的阶乘为：%d\n",n,s);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		if(i == 5)
//			continue;//打印 1 2 3 4 后死循环
//			/*break;*///打印 1 2 3 4 结束
//	printf("%d ",i);
//	i++;
//	}
//	while(i<=10);
//	return 0;
//}

//int main()
//{
//	//请问要循环多少次？
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
//	//for(i=1;i<10;i++)//建议采用前闭后开区间 写法
//	//{
//	//	if(i == 5)//不可在for循环体内修改循环变量，防止for循环失控
//	//		printf("haha\n");
//	//	printf("hehe\n");
//	//}
//	/*for(;;)
//	{
//		printf("haha\n");
//	}*/
//	return 0;
//}
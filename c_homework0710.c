#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
unsigned long g_ulGlobal = 0;
void GlobalInit(unsigned long ulArg)
{
	ulArg = 0x01;
	return;
}
void Test()
{
	GlobalInit(g_ulGlobal);
	printf("%lu", g_ulGlobal);
}
int main()
{
	Test();
	return 0;
}

//#include<stdio.h>
//int Change(int* pX)
//{
//	int y = 8;
//	y = y - *pX;
//	pX = &y;
//	return 0;
//}
//int main()
//{
//	int xx = 3;
//	int* pY = &xx;
//	Change(pY);
//	printf("%d\n", *pY);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	unsigned int x = 0;
//	int i = 0;
//	int count = 0;//累计二进制位为1的个数
//	scanf("%d", &x);
//	for (int i = 0; i < 32; i++)
//	{
//		if (x & (1 << i))
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	printf("Hello World!\n");
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#define F(X,Y) ((X)+(Y))
//int main()
//{
//	int a = 3, b = 4;
//	printf("%d\n", F(a++, b++));
//	return 0;
//}

//int main()
//{
//	char a[20];
//	char* p1 = (char*)a;
//	char* p2 = (char*)(a + 5);
//	int n = p2 - p1;
//	printf("%d\n", n);
//	return 0;
//}
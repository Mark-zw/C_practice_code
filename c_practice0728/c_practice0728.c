#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stddef.h>
struct A
{
	int a;
	short b;
	int c;
	char d;
};
#define OFFSETOF(StructType,menber_name)   (int)&(((StructType*)0)->menber_name)
main()
{
	printf("%d\n", offsetof(struct A, a));
	printf("%d\n", offsetof(struct A, b));
	printf("%d\n", offsetof(struct A, c));
	printf("%d\n", offsetof(struct A, d));

	printf("%d\n", OFFSETOF(struct A, a));
	printf("%d\n", OFFSETOF(struct A, b));
	printf("%d\n", OFFSETOF(struct A, c));
	printf("%d\n", OFFSETOF(struct A, d));


	return 0;
}

//#include<stdio.h>
////偶数位右移一位，奇数位左移一位
//#define SWAP(X) ((X&0xaaaaaaaa)>>1) +((X&0x55555555)<<1)
//int main()
//{
//	int num = 20;
//	int ret = SWAP(num);
//	printf("%d", ret);
//	return 0;
//}

//#define MAX(X,Y) ((X)>(Y))?(X):(Y) 
//int main()
//{
//	int a = 5;
//	int b = 8;
//	int m = MAX(a++, b++);//((a++)>(b++))?(a++):(b++)
//	printf("%d\n", m);
//	return 0;
//}

//#include<stdio.h>
//#define PRINT(X) printf("the value of " #X " is %d\n",X);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	PRINT(a);
//	PRINT(b);
//	PRINT(c);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("log.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//记录日志信息
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		fprintf(pf, "%s %s %s %d %s\n", __FILE__, __DATE__, __TIME__, __LINE__, __FUNCTION__);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//printf("%s\n", __FILE__);
//printf("%s\n", __DATE__);
//printf("%s\n", __TIME__);
//printf("%d\n", __LINE__);
// printf("%s\n", __FUNCTION__);






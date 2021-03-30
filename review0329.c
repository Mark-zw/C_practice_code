#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
void swap1(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
swap2(int* pa, int* pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}
int main()
{
	int a = 3;
	int b = 5;
	printf("a = %d,b = %d\n",a,b);
	//swap1(a, b);
	swap2(&a,&b);
	printf("a = %d,b = %d\n",a,b);
	return 0;
}

//int GetMax(int x, int y)
//{
//	if (x < y)
//		return y;
//	else
//		return x;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d%d", &a, &b);
//	max = GetMax(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s",arr);
//	return 0;
//}
//int Add(int a, int b)
//{
//	int z = 0;
//	z = a + b;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("please input two intgers:>>\n");
//	scanf("%d%d", &a, &b);
//	sum = Add(a, b);
//	printf("sum = %d", sum);
//	return 0;
//}
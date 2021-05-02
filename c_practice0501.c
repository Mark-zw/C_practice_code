#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//#define ROW 3
//#define COL 3
//int is_find(int arr[ROW][COL], int* px, int* py, int k)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x < *px && y >= 0)
//	{
//		if (k > arr[x][y])
//		{
//			x++;
//		}
//		else if (k < arr[x][y])
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[ROW][COL] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 0;
//	int x = ROW;
//	int y = COL;
//	scanf("%d", &k);
//	int ret = is_find(arr, &x, &y, k);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标是：%d,%d\n", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
////判断一个字符串是否由另外一个字符串左旋得到的
//// 方法二：思路 字符串abcdef后面追加字符串其本身可以得到
//// abcdefabcdef  这个追加后的字符串实际上就包含了方法一中所有左旋的结果
//int is_levor_arr(char* arr1, char* arr2)
//{
//	assert(arr1);
//	assert(arr2);
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)//两个字符串长度不相等，肯定不是左旋的结果
//	{
//		return 0;
//	}
//	//1.在字符串arr1后面追加其本身
//	strncat(arr1, arr1, len1);
//	//2.判断arr2是否为arr1的子集
//	if (strstr(arr1, arr2) == NULL)
//	{
//		return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	char arr1[30] = "abcdefgh";
//	char arr2[] = "cdefghab";
//	int ret = is_levor_arr(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}

//void reverse(char* left, char* right)
//{
//	assert(left != 0);
//	assert(right != 0);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
////3.三步翻转法（逆序三次）
////ABCDEF  --- AB CDEF
////BA CDEF 左边逆序
////BA FEDC 右边逆序
////CDEFAB  整体逆序
//void levor_arr(char arr[], int len, int k)
//{
//	assert(arr);
//	assert(k <= len);//assert断言，确保左旋字符的个数不超过字符串的长度
//	reverse(arr,arr+k-1);//左边逆序
//	reverse(arr+k,arr+len-1);//右边逆序
//	reverse(arr,arr+len-1);//整体逆序
//}
////方法一：暴力求解法（穷举法）
//int is_levor_arr(char arr1[], char arr2[])
//{
//	assert(arr1);
//	assert(arr2);
//	int len1 = strlen(arr1);
//	//判断思路：将arr1左旋1个字符、左旋2个字符....左旋len1个字符的结果均跟arr2比较
//	int i = 0;
//	for (i = 0; i < len1; i++)
//	{
//		levor_arr(arr1, len1, 1);
//		int ret = strcmp(arr1, arr2);
//		if (ret == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";//判断arr2是否由arr1左旋得到
//	int ret = is_levor_arr(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
//void print(char arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(char* left, char* right)
//{
//	assert(left != 0);
//	assert(right != 0);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
////3.三步翻转法（逆序三次）
////ABCDEF  --- AB CDEF
////BA CDEF 左边逆序
////BA FEDC 右边逆序
////CDEFAB  整体逆序
//void levor_arr(char arr[], int len, int k)
//{
//	assert(arr);
//	assert(k <= len);//assert断言，确保左旋字符的个数不超过字符串的长度
//	reverse(arr,arr+k-1);//左边逆序
//	reverse(arr+k,arr+len-1);//右边逆序
//	reverse(arr,arr+len-1);//整体逆序
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int k = 0;
//	int i = 0;
//	int len = strlen(arr);
//	print(arr, len);
//	printf("请输入左旋字符的个数：>>\n");
//	scanf("%d", &k);
//	levor_arr(arr, len, k);
//	printf("左旋后结果为：\n");
//	print(arr, len);
//	return 0;
//}

//void print(char arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	printf("\n");
//}
////2.暴力求解法
//void levor_arr(char arr[], int len, int k)//左旋函数
//{
//	assert(arr);
//	int i = 0;
//	for (i = 0; i < k; i++)//左旋k次，每次实现一个字符的左旋操作
//	{
//		//1.一次左旋操作
//		int j = 0;
//		char tmp = arr[0];
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[j] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int k = 0;
//	int i = 0;
//	int len = strlen(arr);
//	print(arr, len);
//	printf("请输入左旋字符的个数：>>\n");
//	scanf("%d", &k);
//	levor_arr(arr, len, k);
//	printf("左旋后结果为：\n");
//	print(arr, len);
//	return 0;
//}

//实现一个函数，可以左旋字符串中的k个字符。
//例如ABCD 左旋一个字符得到BCDA  左旋两个字符得到CDAB
// 
//void print(char arr[],int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	printf("\n");
//}
// 
//1.我自己写的左旋函数方法
//void levor_arr(char arr[], int len,char tmp[],int k)//左旋函数
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < len; i++)
//	{
//		if (i < len - k)
//		{
//			arr[i] = arr[i + k];
//		}
//		else
//		{
//			arr[i] = tmp[j];
//			j++;
//		}
//	}
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int k = 0;
//	int i = 0;
//	int len = strlen(arr);
//	char tmp[20] = { 0 };
//	print(arr, len);
//	printf("请输入左旋字符的个数：>>\n");
//	scanf("%d", &k);
//	for (i = 0; i < k; i++)
//	{
//		tmp[i] = arr[i];
//	}
//	levor_arr(arr, len, tmp, k);
//	printf("左旋后结果为：\n");
//	print(arr, len);
//	return 0;
//}
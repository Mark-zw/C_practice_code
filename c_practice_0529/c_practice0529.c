#define _CRT_SECURE_NO_WARNINGS 1 
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

//3种方法 1.临时数组法  2.临时变量k次法  3.三步翻转法
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
////方法一：临时数组法
//void levotor1(char* arr1,int k)
//{
//	assert(arr1 != NULL);//断言，防止传入空指针，刷题时这句可以去掉
//	char arr2[5] = { 0 };
//	int i = 0;
//	int len = strlen(arr1);//计算好字符串的长度
//	assert(k <= len);//断言，防止k大于字符串长度，刷题时这句可以去掉
//	//1.将前k个字符存放到arr2数组中
//	for (i = 0; i < k; i++)
//	{
//		arr2[i] = arr1[i];
//	}
//	//2.将字符串第k个字符后面的字符往前平移k个单位
//	for (i = k; i < len; i++)
//	{
//		arr1[i-k] = arr1[i];
//	}
//	//3.将临时数组中的内容平移回字符串
//	for (i = len - k; i < len; i++)
//	{
//		arr1[i] = arr2[i-(len-k)];
//	}
//}
////方法二：临时变量k次法
//void levotor2(char* arr1, int k)
//{
//	assert(arr1 != NULL);//断言，防止传入空指针，刷题时这句可以去掉
//	int i = 0;
//	int j = 0;
//	int len = strlen(arr1);
//	assert(k <= len);//断言，防止k大于字符串长度，刷题时这句可以去掉
//	//2.重复k遍
//	for (i = 0; i < k; i++)
//	{
//		char tmp = arr1[0];//创建临时变量存放取出来的字符
//		//1.实现左旋一次的操作
//		for (j = 0; j < len - 1; j++)
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[len - 1] = tmp;
//	}
//}
//
////方法三：三步翻转法
////翻转函数
//void reverse(char* start, char* end)//将start和end之间的字符进行翻转
//{
//	while (start < end)
//	{
//		char tmp = *start;
//		*start = *end;
//		*end = tmp;
//		start++;
//		end--;
//	}
//}
//void levotor3(char* arr1, int k)
//{
//	assert(arr1 != NULL);//断言，防止传入空指针，刷题时这句可以去掉
//	int len = strlen(arr1);
//	assert(k <= len);//断言，防止k大于字符串长度，刷题时这句可以去掉
//	reverse(arr1, arr1 + k - 1);//1.将前k个字符进行翻转
//	reverse(arr1 + k, arr1 + len - 1);//2.将第k+1到第len个字符翻转
//	reverse(arr1, arr1 + len - 1);//3.整体翻转
//}
//int main()
//{
//	char arr1[] = "ABCD";
//	int k = 0;
//	scanf("%d", &k);
//	//levotor1(arr1,k);//左旋字符函数：方法一
//	//levotor2(arr1,k);//左旋字符函数：方法二
//	levotor3(arr1, k);//左旋字符函数：方法三
//	printf("%s\n", arr1);
//	return 0;
//}
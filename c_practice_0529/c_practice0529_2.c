#define _CRT_SECURE_NO_WARNINGS 1 
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

#include<stdio.h>
#include<string.h>
#include<assert.h>

//方法三：三步翻转法
//翻转函数
void reverse(char* start, char* end)//将start和end之间的字符进行翻转
{
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
void levotor3(char* arr1, int k)
{
	assert(arr1 != NULL);//断言，防止传入空指针，刷题时这句可以去掉
	int len = strlen(arr1);
	assert(k <= len);//断言，防止k大于字符串长度，刷题时这句可以去掉
	reverse(arr1, arr1 + k - 1);//1.将前k个字符进行翻转
	reverse(arr1 + k, arr1 + len - 1);//2.将第k+1到第len个字符翻转
	reverse(arr1, arr1 + len - 1);//3.整体翻转
}
//方法一：字符串比较法
int Is_levotor1(char* s1, char* s2)
{
	assert(s1 && s2);//断言，防止传入空指针，刷题时这句可以去掉
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 != len2)
	{
		return 0;
	}
	else
	{
		int i = 0;
		for (i = 0; i < len1; i++)//左旋0个字符和左旋len1个字符的结果是一样的
		{
			levotor3(s1, 1);
			int ret = strcmp(s1, s2);
			if (ret == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

//方法二：字符串追加判断字串法
int Is_levotor2(char* s1, char* s2)
{
	assert(s1 && s2);//断言，防止传入空指针，刷题时这句可以去掉
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 != len2)
	{
		return 0;
	}
	char* s[20] = { 0 };
	strcat(s, s1);
	strcat(s, s1);//s追加两次，相当于s1自己追加自己
	if (strstr(s, s2) == NULL)
	{
		return 0;
	}
	return 1;
}

int main()
{
	char s1[] = "AABCD";
	char s2[] = "BCDAA";
	//int ret = Is_levotor1(s1, s2);//方法一：字符串比较法
	int ret = Is_levotor2(s1, s2);//方法二：字符串追加判断字串法

	if (ret == 1)
	{
		printf("s2 is a levotorsion-string of s1.\n ");
	}
	else
	{
		printf("s2 is not a levotorsion-string of s1.\n ");
	}
	return 0;
}







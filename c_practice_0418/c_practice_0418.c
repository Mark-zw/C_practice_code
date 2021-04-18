#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(++str);
	}
	else
		return 0;
}
int main()
{
	char arr[] = "bit";
	printf("%d\n", my_strlen(arr));
	return 0;
}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	return 0;
//}

//int main()
//{
//	printf("haha\n");
//	main();
//	return 0;
//}

//int main()
//{
//	int c = 0x11223344;
//	int a = 3;
//	int b = -1;
//	return 0;
//}

//int main()
//{
//    char ch = 0;
//    while ((scanf("%c", &ch)) != EOF)
//    {
//        getchar();
//        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' ||
//            ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' ||
//            ch == 'o' || ch == 'u')
//        {
//            printf("Vowel\n");
//        }
//        else
//            printf("Consonant\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int IQ = 0;
//    while (scanf("%d", &IQ) != EOF)
//    {
//        if (IQ >= 140)
//            printf("Genius");
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int num1 = 0;//统计A出现的次数
//    int num2 = 0;//统计B出现的次数
//    int i = 0;
//    char arr[20] = { 0 };//用来存储输入的字符
//    scanf("%s", arr);
//    while (arr[i] != '0')
//    {
//        if (arr[i] == 'A')
//        {
//            num1++;
//        }
//        else if (arr[i] == 'B')
//        {
//            num2++;
//        }
//        i++;
//    }
//    if (num1 > num2)
//        printf("A");
//    else if (num1 < num2)
//        printf("B");
//    else
//        printf("E");
//    return 0;
//}
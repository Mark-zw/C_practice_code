#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
////7.����쳲�������
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}

////6.��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
//double Fun(int n, int k)
//{
//	if (k >= 1)
//	{
//		return n * Fun(n, k - 1);
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return (1.0 / n) * Fun(n, k + 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	double ret = 0;
//	scanf("%d%d", &n, &k);
//	ret = Fun(n, k);
//	printf("ret = %lf\n", ret);
//	return 0;
//}

////5.����һ������ÿλ֮�ͣ��ݹ�ʵ��)
//int sum_num(int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + sum_num(n / 10);//�ݹ�ʵ��ÿλ�������
//	}
//	else
//		return n;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;//�������ռ����Ľ��
//	scanf("%d", &n);
//	ret = sum_num(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}

////4.��дһ������ reverse_string(char * string)���ݹ�ʵ��)
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//
//void reverse_string(char* string)
//{
//	int len = my_strlen(string);//���ַ����ĳ���
//	if (len <= 1)
//	{
//		return ;//����ַ�������Ϊ1���򲻷�ת
//	}
//	else
//	{
//		char temp = *string;//������ʱ�����洢ָ��ָ����ַ�
//		*string = *(string + len - 1);//�����һ���ַ���ֵ��ָ��ָ����ַ�
//		*(string + len - 1) = '\0';//�����һ���ַ���ֵΪ\0���ַ���������־��
//		reverse_string(string + 1);//�ݹ鷴ת��һ���ַ�
//		*(string + len - 1) = temp;//����һ���ַ���ֵ�����һ��
//	}
//
//}
//
//int main()
//{
//	char string[] = "abcdefgh";
//	printf("��תǰ��%s\n", string);
//	reverse_string(string);
//	printf("��ת��%s\n", string);
//	return 0;
//}


//#include<string.h>
////3.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//int my_strlen1(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen1(str + 1);
//	}
//	else
//	    return 0;
//}
//int my_strlen2(char* str)
//{
//	int count = 0;
//	while (*str != 0)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "Hello World";
//	printf("%d\n", strlen(arr));//����strlen�⺯����ʽ
//	printf("%d\n", my_strlen1(arr));//�ݹ鷽ʽʵ��
//	printf("%d\n", my_strlen2(arr));//�ǵݹ鷽ʽʵ��
//	return 0;
//}

////2.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
////int Fac1(int n)
////{
////	if (n > 1)
////	{
////		return n * Fac1(n - 1);
////	}
////	return 1;
////}
//int Fac2(int n)
//{
//	int i = 0;
//	int fac2 = 1;
//	for (i = 1; i <= n; i++)
//	{
//		fac2 *= i;
//	}
//	return fac2;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;//���ڽ��ս׳˺�������ֵ
//	scanf("%d", &n);
//	//ret = Fac1(n);//�ݹ鷽ʽʵ��
//	ret = Fac2(n);//�ǵݹ鷽ʽʵ��
//	printf("%d!=%d\n", n, ret);
//}

////1.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//void print_num(int n)
//{
//	if (n > 9)
//	{
//		print_num(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;//�������n������������
//	scanf("%d", &n);
//	print_num(n);//�����Զ��庯��ʵ�ִ�ӡ��������ÿһλ
//	return 0;
//}

//#include<string.h>
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
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(++str);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

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
//    int num1 = 0;//ͳ��A���ֵĴ���
//    int num2 = 0;//ͳ��B���ֵĴ���
//    int i = 0;
//    char arr[20] = { 0 };//�����洢������ַ�
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
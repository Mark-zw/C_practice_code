#define _CRT_SECURE_NO_WARNINGS 1 
#include<string.h>

#include <stdio.h>
int main()
{
	int arr[10] = {0}; 
	int i = 0;
	for (i = 0; i < 10; ++i)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);
	}
    return 0;
}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };//����Ĳ���ȫ��ʼ��//���������Ԫ�ظ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//���������ݸ�ֵ,������ʹ���±������ʵģ��±��0��ʼ������:int i = 0;//���±�
//	for (i = 0; i < 10; i++)//����д10���ò���?
//		arr[i] = i;
//	//������������
//	for (i = 0; i < 10; ++i)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//char ch1[5] = { 'b','i','t' };
//	char ch2[] = { 'b','i','t' };
//	//char ch3[5] = "bit";
//	char ch4[] = "bit";
//	printf("%s\n", ch2);
//	printf("%s\n", ch4);
//	printf("%d\n", strlen(ch2));
//	printf("%d\n", strlen(ch4));
//
//	return 0;
//}

//double my_pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * my_pow(n, k - 1);
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 1.0 /my_pow(n, -k);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	double ret = 0.0;
//	scanf("%d%d", &n, &k);
//	ret = my_pow(n,k);
//	printf("%lf\n", ret);
//	return 0;
//}

//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int num = 1729;
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//	return 0;
//}

////#include<string.h>
////int my_strlen(char* str)//�ǵݹ鷽�����ַ�������
////{
////	int count = 0;
////	while (*str != '\0')
////	{
////		count++;
////		str++;
////	}
////	return count;
////}
//
//int my_strlen(char* str)//�ݹ鷽�����ַ�������
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
////void reverse_string(char* str)//�ǵݹ鷽�������ַ���
////{
////	//int len = strlen(str);
////	int len = my_strlen(str);
////	int left = 0;
////	int right = len - 1;
////	while (left < right)
////	{
////		char tmp = *(str+left);
////		*(str + left) = *(str + right);
////		*(str + right) = tmp;
////		left++;
////		right--;
////	}
////
////}
//
//void reverse_string(char* str)
//{
//	int len = my_strlen(str);
//	if (len > 1)
//	{
//		char tmp = *str;
//		*str = *(str + len - 1);
//		*(str + len - 1) = '\0';
//		reverse_string(str + 1);
//		*(str + len - 1) = tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdefjh";
//	printf("����ǰ��%s\n", arr);
//	reverse_string(arr);
//	printf("�����%s\n", arr);
//
//	return 0;
//}


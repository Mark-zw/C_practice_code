#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//#include<assert.h>
//int my_strcmp(const char* p1,const char* p2)
//{
//	assert(p1 && p2);
//	while (*p1 == *p2)
//	{
//		if (*p1 == '\0')
//		{
//			return 0;
//		}
//		p1++;
//		p2++;
//	}
//
//	//����һ��vsʵ�ֵķ�ʽ
//	//if (*p1 > *p2)
//	//{
//	//	return 1;
//	//}
//	//else
//	//{
//	//	return -1;
//	//}
//
//	//��������linux��gccʵ�ַ�ʽ
//	return *p1 - *p2;
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwt";
//	if (my_strcmp(p1, p2) > 0)
//	{
//		printf("%s > %s\n", p1, p2);
//	}
//	else if (my_strcmp(p1, p2) == 0)
//	{
//		printf("%s = %s\n", p1, p2);
//	}
//	else
//	{
//		printf("%s < %s\n", p1, p2);
//	}
//	return 0;
//}

//#include<assert.h>
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* dest_start = dest;
//	//1.�ҵ�Ŀ�Ŀռ��е�'\0'
//	while (*dest != '\0')//��������'\0'���ַ�
//	{
//		dest++;
//	}
//	//2.׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return dest_start;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);//ģ��ʵ��strcat
//	printf("%s", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxx";
//	//arr1�ռ���Ҫ�㹻��������׷�ӹ���������
//	//��������Խ�����
//	char arr2[] = "world";
//	//���ַ���arr2����׷�Ӹ�arr1
//	strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* dest_start = dest;
//
//	//����srcָ���ַ��������ݵ�destָ��Ŀռ䣬����'\0'
//	//����һ������˼·��
//	//while (*src != '\0')
//	//{
//	//	*dest = *src;
//	//	dest++;
//	//	src++;
//	//}
//	//*dest = *src;
//	
//	//�����������뾫���
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return dest_start;
//}
//int main()
//{
//	char arr1[] = "abcdefghik";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);//ģ��ʵ��strcpy����
//	printf("%s", arr1);
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char arr1[] = "abcdefghik";
//	char arr2[] = "hello";
//	//���ַ���arr2������arr1
//	strcpy(arr1, arr2);
//	//�õ��Դ��ڹ۲�arr1�仯
//	return 0;
//}

//#include<assert.h>
////1.������ʵ�����ַ������Ⱥ���
//int my_strlen1(const char* str)//�������̲��ı�ָ��ָ�����ݣ�����const
//{
//	assert(str != NULL);//���϶��ԣ���ֹ���տ�ָ��
//	int count = 0;
//	while (*str != '\0')//Ҳ����ֱ����while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////2.�ݹ�ʵ�����ַ������ȣ����ô�����ʱ����
//int my_strlen2(const char* str)
//{
//	assert(str != NULL);
//	if (*str != '\0')//Ҳ����ֱ����if(*str)
//	{
//		return 1 + strlen(str + 1);//����ֱ��ʹ��str++������ʹ��++str,����ֱ����str+1
//	}
//	else
//		return 0;
//}
////3.ָ��-ָ��õ��м�Ԫ�صĸ�����ʵ�����ַ�������
//int my_strlen3(const char* str)
//{
//	assert(str != NULL);
//	const char* tmp = str;//������ʱָ���������str��ʼֵ
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - tmp;
//}
//int main()
//{
//	char arr[] = "abcdefgh";
//	int ret1 = my_strlen1(arr);//1.����������
//	int ret2 = my_strlen2(arr);//2.�ݹ鷽��
//	int ret3 = my_strlen3(arr);//3.ָ�� - ָ�뷽��
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//	printf("%d\n", ret3);
//
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<assert.h>
////ģ��ʵ�ֿ⺯��strcpy
//char* my_strcpy(char* des, const char* src)
//{
//	assert(des != NULL);
//	assert(src != NULL);
//	char* des0 = des;//��Ŀ�ĵص��ַ�������ʼ��ַ����
//	while ((*des++ = *src++) != '\0')
//	{
//		;
//	}
//	return des0;//���ؿ���֮��Ŀ�ĵ���ʼ��ַ
//}
//
//int main()
//{
//	char arr1[] = "xxxxxxxxxxxx";
//	char arr2[] = "Good job!";
//	//my_strcpy(arr1, arr2);
//	//printf("%s", arr1);
//	printf("%s", my_strcpy(arr1, arr2));
//	return 0;
//}


//#include<assert.h>
////ģ��ʵ�ֿ⺯��strlen
//size_t my_strlen(const char* p)
//{
//	const char* p0 = p;//����ָ������ĵ�ַ
//	assert(p != NULL);//���ԣ���ֹ����ָ�봫����
//	while (*p++ != '\0')//���ж�*p�Ƿ�Ϊ\0��Ȼ�����������Ϊ\0,ֱ������ѭ�����ôβ���������
//	{
//		;
//	}
//	return (p-p0-1);//�����ַ��ĳ���
//}
//int main()
//{
//	//char arr[] = "abcd";
//	char arr[] = "I am a student";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* p)
//{
//	assert(p != NULL);
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	//printf("%c",'\0');
//	return 0;
//}
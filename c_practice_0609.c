#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
struct S
{
	int data[1000];
	int num;
};
struct S s = { {1, 2, 3, 4}, 1000 };
//�ṹ�崫��
void print1(struct S s)
{
	printf("%d \n", s.num);
}
// �ṹ���ַ����
void print2(struct S* ps)
{
	printf("%d \n", ps->num);
}
int main()
{
	print1(s);//���ṹ��
	print2(&s);//���ṹ���ַ
	return 0;
}

#pragma pack(8)//����Ĭ�϶�����Ϊ8
//struct s1
//{
//	char c1; 
//	int i; 
//	char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//
//#pragma pack(1)//����Ĭ�϶�����Ϊ1
//struct s2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//int main()
//{
//	printf("%d\n", sizeof(struct s1));
//	printf("%d\n", sizeof(struct s2));
//	return 0;
//}


//#include<stdio.h>
//struct s3
//{
//	double d;
//	char c;
//	int i;
//};
//struct s4
//{
//	char c1;
//	struct s3 s3;
//	double d;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct s4));
//	return 0;
//}

//struct s1
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct s1));
//	return 0;
//}

//struct Point
//{
//	int x;
//	int y;
//}p1;//�����ṹ�����͵�ͬʱ�������p1
//
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10,{4,5},NULL };//�ṹ��Ƕ�׳�ʼ��
//
//struct Node n2 = { 20,{1,2},NULL };//�ṹ��Ƕ�׳�ʼ��
//
//struct Stu//��������
//{
//	char name[20];//����
//	int age;//����
//};
//struct Stu s = { "Student_zhang",20 };//��ʼ��


//
//struct Point p2;//����ṹ�����p2
//
//struct Point p3 = { 1,1 };//��ʼ�������������ͬʱ��������ֵ

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;

////����2
//struct Node
//{
//	int data;//������
//	struct Node* next;//ָ����
//};


//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}* p;
//
//int main()
//{
//	p = &x;
//	return 0;
//}
//struct Student
//{
//	char name[20];//����
//	char id[20];//ѧ��
//	int age;//����
//	char sex[5];//�Ա�
//};//�ֺŲ��ܶ���

//struct tag
//{
//	member_list;
//}variable_list;

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "abcdefg";
//	memset(arr, '*', 4);
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//	int arr1[4] = { 1,2,3,5 };
//	int arr2[4] = { 1,2,3,4 };
//	int ret = memcmp(arr1, arr2, sizeof(arr1));
//	if (ret > 0)
//	{
//		printf("arr1 > arr2");
//	}
//	else if (ret == 0)
//	{
//		printf("arr1 == arr2");
//	}
//	else
//	{
//		printf("arr1 < arr2");
//	}
//	return 0;
//}

//void* my_memmove(void* dest, void* src, size_t num)
//{
//	assert(dest && src);
//	void* dest_start = dest;
//	if (dest < src)
//	{
//		//��ǰ���
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//�Ӻ���ǰ
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return dest_start;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr1 + 2, arr1, 5 * sizeof(int));
//	return 0;
//}

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* dest_start = dest;//����Ŀ�ĵ���ʼλ��
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return dest_start;
//}



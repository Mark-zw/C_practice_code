#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
int cmp_int(const void* elem1, const void* elem2)
{

	return (*(int*)elem1 - *(int*)elem2);
}
void Swap(char* e1, char* e2, int width)
{
	int i = 0;
	//����ֽڽ���
	for (i = 0; i < width; i++)
	{
		//����һ��
		//char tmp = *(e1 + i);
		//*(e1 + i) = *(e2 + i);
		//*(e2 + i) = tmp;

		//��������
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}

void Bubble_sort(void* base, int num, int width, int (*cmp)(void* e1, void* e2))
{
	int i = 0;//size_t����unsigned int�޷������͵������ض��壬�������ֱ����int����
	//ȷ�����������
	for (i = 0; i < num - 1; i++)
	{
		int j = 0;
		//ȷ��ÿ������Ķ���
		for (j = 0; j < num - 1 - i; j++)
		{
			//�Ƚϴ�С
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//Ԫ��λ�ý���
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}

		}
	}
}

//void qsort(void* base,//������Ŀ���������ʼλ��
//	       size_t num,//�����Ԫ�ظ���
//	       size_t width,//ÿ��Ԫ��ռ�õ��ֽ���
//	       int(__cdecl* compare)(const void* elem1, const void* elem2)//����ָ�룬
//������ʹ�õıȽϺ���
//   //�򻯣�int(* cmp)(const void* elem1, const void* elem2) 
//   //����ָ�룬ָ��ָ��Ĳ������������������Ͷ���const void*,��������������int
//   //��ͬ���͵����ݱȽϵķ����ǲ�һ���ģ�������Ҫ���ȽϷ���д�ɺ������ݸ�qsort
//           );

void test4()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	Bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

struct Stu
{
	char name[20];
	int age;
};
int cmp_Stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_Stu_by_name(const void* e1, const void* e2)
{
	//�ַ����Ƚ���Ҫ�õ��ַ����ȽϿ⺯��strcmp
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test3()
{
	struct Stu s[] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	int i = 0;
	qsort(s, sz, sizeof(s[0]), cmp_Stu_by_age);
	printf("����������\n");
	for (i = 0; i < sz; i++)
	{
		printf("%s,%d\n", s[i].name, s[i].age);
	}
	Bubble_sort(s, sz, sizeof(s[0]), cmp_Stu_by_name);
	printf("����������\n");
	for (i = 0; i < sz; i++)
	{
		printf("%s,%d\n", s[i].name, s[i].age);
	}
}
int main()
{
	test3();//����ģ������������struct Stu�������ݲ���ӡ
	test4();//����ģ������������int�������ݲ���ӡ
	return 0;
}


//int main()
//{
//	//һά����
//	int a[] = { 1,2,3,4 };
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(a + 0));
//	//printf("%d\n", sizeof(*a));
//	//printf("%d\n", sizeof(a + 1));
//	//printf("%d\n", sizeof(a[1]));
//	//printf("%d\n", sizeof(&a));
//	printf("%d\n", sizeof(*&a));
//	//printf("%d\n", sizeof(&a + 1));
//	//printf("%d\n", sizeof(&a[0]));
//	//printf("%d\n", sizeof(&a[0] + 1));
//	return 0;
//}
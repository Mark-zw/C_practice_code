#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int cmp_int(const void* elem1, const void* elem2)
//{
//
//	return (*(int*)elem1 - *(int*)elem2);
//}
//void Swap(char* e1, char* e2, int width)
//{
//	int i = 0;
//	//����ֽڽ���
//	for (i = 0; i < width; i++)
//	{
//		//����һ��
//		//char tmp = *(e1 + i);
//		//*(e1 + i) = *(e2 + i);
//		//*(e2 + i) = tmp;
//
//		//��������
//		char tmp = *e1;
//		*e1 = *e2;
//		*e2 = tmp;
//		e1++;
//		e2++;
//	}
//}
//
//void Bubble_sort(void* base, int num, int width, int (*cmp)( void* e1 ,  void* e2))
//{
//	int i = 0;//size_t  ���� unsigned int �޷������� �������ض���
//	//ȷ�����������
//	for (i = 0; i < num - 1; i++)
//	{
//		int j = 0;
//		//ȷ��ÿ������Ķ���
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			//�Ƚϴ�С
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//Ԫ��λ�ý���
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//			
//		}
//	}
//}
//
////void qsort(void* base,//������Ŀ���������ʼλ��
////	       size_t num,//�����Ԫ�ظ���
////	       size_t width,//ÿ��Ԫ��ռ�õ��ֽ���
////	       int(__cdecl* compare)(const void* elem1, const void* elem2)//����ָ�룬������ʹ�õıȽϺ���
////   //�򻯣�int(* cmp)(const void* elem1, const void* elem2) 
////   //����ָ�룬ָ��ָ��Ĳ������������������Ͷ���const void*,��������������int
////   //��ͬ���͵����ݱȽϵķ����ǲ�һ���ģ�������Ҫ���ȽϷ���д�ɺ������ݸ�qsort
////           );
//
//void test4()
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	Bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_Stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int cmp_Stu_by_name(const void* e1, const void* e2)
//{
//	//�ַ����Ƚ���Ҫ�õ��ַ����ȽϿ⺯��strcmp
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test3()
//{
//	struct Stu s[] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	int i = 0;
//	qsort(s, sz, sizeof(s[0]), cmp_Stu_by_age);
//	printf("����������\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s,%d\n", s[i].name, s[i].age);
//	}
//	Bubble_sort(s, sz, sizeof(s[0]), cmp_Stu_by_name);
//	printf("����������\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s,%d\n", s[i].name, s[i].age);
//	}
//}
//int main()
//{
//	test3();//����ģ������������struct Stu�������ݲ���ӡ
//	test4();//����ģ������������int�������ݲ���ӡ
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_Stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int cmp_Stu_by_name(const void* e1, const void* e2)
//{
//	//�ַ����Ƚ���Ҫ�õ��ַ����ȽϿ⺯��strcmp
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void test3()
//{
//	struct Stu s[] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	int i = 0;
//	qsort(s, sz, sizeof(s[0]), cmp_Stu_by_age);
//	printf("����������\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s,%d\n", s[i].name, s[i].age);
//	}
//	qsort(s, sz, sizeof(s[0]), cmp_Stu_by_name);
//	printf("����������\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s,%d\n", s[i].name, s[i].age);
//	}
//}
//int main()
//{
//	test3();//����ṹ�����鲢��ӡ
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int cmp_float(const void* e1, const void* e2)
//{
//	////����һ���жϴ�С����������
//	//if (*(float*)e1 == *(float*)e2)
//	//{
//	//	return 0;
//	//}
//	//else if (*(float*)e1 - *(float*)e2 > 0)
//	//{
//	//	return 1;
//	//}
//	//else
//	//{
//	//	return -1;
//	//}
//
//	//��������ǿ������ת����int����
//	return (int)(*(float*)e1 - *(float*)e2);
//}
//void test2()
//{
//	float arr2[] = { 4.0, 5.0, 1.0, 2.0, 3.0, 9.0 };
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	int i = 0;
//	qsort(arr2, sz, sizeof(arr2[0]), cmp_float);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%lf ", arr2[i]);
//	}
//}
//int main()
//{
//	test2();//���򸡵������鲢��ӡ
//	return 0;
//}

////Ϊ�˵���qsort����Ҫ���ȽϺ�������qsort
////����qsort�������������ͣ�д����Ҫʹ�õıȽϺ���
//int cmp_int(const void* elem1, const void* elem2)
//{
//
//	return *(int*)elem1 - *(int*)elem2;
//}
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	test1();//�����������鲢��ӡ
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	void* p = &a;
//	*p = 0;
//	p++;
//	return 0;
//}

//void qsort(void* base,//������Ŀ���������ʼλ��
//	       size_t num,//�����Ԫ�ظ���
//	       size_t width,//ÿ��Ԫ��ռ�õ��ֽ���
//	       int(__cdecl* compare)(const void* elem1, const void* elem2)//����ָ�룬������ʹ�õıȽϺ���
//   //�򻯣�int(* cmp)(const void* elem1, const void* elem2) 
//   //����ָ�룬ָ��ָ��Ĳ������������������Ͷ���const void*,��������������int
//   //��ͬ���͵����ݱȽϵķ����ǲ�һ���ģ�������Ҫ���ȽϷ���д�ɺ������ݸ�qsort
//           );

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };//����
//	int(*p)[10] = &arr;//����ָ��
//	char* arr1[5] = { 0 };//�ַ�����
//	char* (*p1)[5] = &arr1;//�ַ�����ָ��
//	int(*p2)(int, int) = Add;//&Add;//����ָ��
//	int(*p3[4])(int, int) = { 0 };//����ָ������
//	//ȥ��������p3������[4]ʣ�µľ������������ int(*)(int,int)
//	int(*(*p4)[4])(int, int) = &p3;//ָ����ָ�������ָ��
//	//p4��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ÿ��Ԫ�ص����Ͷ��Ǻ���ָ�룬����ָ��������int(*)(int,int)
//	return 0;
//}
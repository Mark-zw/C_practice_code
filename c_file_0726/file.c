#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int main()
{
	FILE* pfread = fopen("test.txt", "r");
	if (pfread == NULL)
	{
		perror("fopne");
		return 1;
	}
	FILE* pfwrite = fopen("test2.txt", "w");
	if (pfwrite == NULL)
	{
		//�˳�ǰҪ�ȹرմ򿪵�pfread
		fclose(pfread);
		pfread = NULL;
		perror("fopen");
		return 1;
	}
	if (feof(pfread))
	{
		printf("�����ļ�������־����������\n");
	}
	else if(ferror(pfread))
	{
		printf("�ļ���ȡʧ�ܽ�����\n");
	}
	//�ļ���������
	int ch = 0;
	while ((ch = fgetc(pfread)) != EOF)
	{
		//д�ļ�
		fputc(ch, pfwrite);
	}
	return 0;
}

//#include<stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fwrite(&a, sizeof(int),1, pf);
//	fclose(pf);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	//�ڵ�ǰλ�ý���ƫ��
//	fseek(pf, -1, SEEK_CUR);
//	ch = fgetc(pf);
//	printf("%c\n", ch); 
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//ʹ��ftell��ȷ����ǰλ������ʼ��֮���ƫ����
//	int ret = ftell(pf);
//	printf("%d\n", ret);
//	
//	//���ļ�ָ��ص���ʼλ��
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//�ر��ļ�
//	fclose(pf);
//	return 0;
//}
////#include<stdio.h>
//#include<stdio.h>
//struct S
//{
//	char ch[15];
//	int age;
//	float f;
//};
//int main()
//{
//	//��һ���ṹ�������ת����һ���ַ���
//	struct S s = { "Hello_world",20,5.5 };
//	struct S temp = { 0 };
//	char buffer[100] = { 0 };
//	sprintf(buffer, "%s %d %f", s.ch, s.age, s.f);
//	printf("%s\n", buffer);
//	//��buffer���ַ������ݻ�ԭ��һ���ṹ��
//	sscanf(buffer, "%s %d %f", temp.ch, &(temp.age), &(temp.f));
//	printf("%s %d %f\n", temp.ch, temp.age, temp.f);
//
//	return 0;
//}

//int main()
//{
//	struct S s = { 0 };
//	//���ļ�
//	FILE* pf = fopen("file3.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//������
//	fread(&s, sizeof(struct S), 1, pf);
//	//��ӡ����
//	printf("%s %d %f\n", s.ch, s.a, s.f);
//	//�ر��ļ�
//	fclose(pf);
//	return 0;
//}

//struct S
//{
//	char ch[10];
//	int a;
//	float f;
//};
//int main()
//{
//	struct S s = { 0 };
//	//���ļ�
//	FILE* pf = fopen("file3.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//������
//	fscanf(pf, "%s %d %f", s.ch, &(s.a), &(s.f));
//
//	//��ӡ����
//	fprintf(stdout,"%s %d %f\n",s.ch,s.a,s.f);
//	//�ر��ļ�
//	fclose(pf);
//	return 0;
//}


//int main()
//{
//	char arr[10] = { 0 };
//	FILE* pf = fopen("file2.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	////д�ļ� һ��һ��д
//	//fputs("Hello world\n", pf);
//	//fputs("File open\n", pf);
//	//���ļ�
//	fgets(arr, 6, pf);
//	printf("%s", arr);
//	//�ر��ļ�
//	fclose(pf);
//	return 0;
//}

//int main()
//{
//	fputc('F', stdout);//stdout -- ��׼�����
//	fputc('i', stdout);
//	fputc('l', stdout);
//	fputc('e', stdout);
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("file1.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	int ret = fgetc(pf);
//	printf("%c", ret);
//	ret = fgetc(pf);
//	printf("%c", ret);
//	ret = fgetc(pf);
//	printf("%c", ret); 
//	ret = fgetc(pf);
//	printf("%c", ret);
//
//	ret = fgetc(pf);
//	printf("%c", ret); 
//	ret = fgetc(pf);
//	printf("%c", ret);
//
//
//	//printf("open file success!\n");
//	//�ر��ļ�
//	fclose(pf);
//}

//int main()
//{
//	//���ļ�
//	FILE* pf1 = fopen("D:\\QiYiCat\\c practice\\c_class_code\\c_file_0726\\c_file_0726\\test.txt", "r");
//	if (pf1 == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	//......
//	printf("file open success!\n");
//	//�ر��ļ�
//	fclose(pf1);
//	return 0;
//}
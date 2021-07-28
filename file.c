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
		//退出前要先关闭打开的pfread
		fclose(pfread);
		pfread = NULL;
		perror("fopen");
		return 1;
	}
	if (feof(pfread))
	{
		printf("遇到文件结束标志，正常结束\n");
	}
	else if(ferror(pfread))
	{
		printf("文件读取失败结束！\n");
	}
	//文件都正常打开
	int ch = 0;
	while ((ch = fgetc(pfread)) != EOF)
	{
		//写文件
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
//	//在当前位置进行偏移
//	fseek(pf, -1, SEEK_CUR);
//	ch = fgetc(pf);
//	printf("%c\n", ch); 
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//使用ftell来确定当前位置与起始点之间的偏移量
//	int ret = ftell(pf);
//	printf("%d\n", ret);
//	
//	//让文件指针回到起始位置
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//关闭文件
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
//	//将一个结构体的数据转换成一个字符串
//	struct S s = { "Hello_world",20,5.5 };
//	struct S temp = { 0 };
//	char buffer[100] = { 0 };
//	sprintf(buffer, "%s %d %f", s.ch, s.age, s.f);
//	printf("%s\n", buffer);
//	//将buffer的字符串内容还原成一个结构体
//	sscanf(buffer, "%s %d %f", temp.ch, &(temp.age), &(temp.f));
//	printf("%s %d %f\n", temp.ch, temp.age, temp.f);
//
//	return 0;
//}

//int main()
//{
//	struct S s = { 0 };
//	//打开文件
//	FILE* pf = fopen("file3.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读数据
//	fread(&s, sizeof(struct S), 1, pf);
//	//打印数据
//	printf("%s %d %f\n", s.ch, s.a, s.f);
//	//关闭文件
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
//	//打开文件
//	FILE* pf = fopen("file3.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读数据
//	fscanf(pf, "%s %d %f", s.ch, &(s.a), &(s.f));
//
//	//打印数据
//	fprintf(stdout,"%s %d %f\n",s.ch,s.a,s.f);
//	//关闭文件
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
//	////写文件 一行一行写
//	//fputs("Hello world\n", pf);
//	//fputs("File open\n", pf);
//	//读文件
//	fgets(arr, 6, pf);
//	printf("%s", arr);
//	//关闭文件
//	fclose(pf);
//	return 0;
//}

//int main()
//{
//	fputc('F', stdout);//stdout -- 标准输出流
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
//	//读文件
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
//	//关闭文件
//	fclose(pf);
//}

//int main()
//{
//	//打开文件
//	FILE* pf1 = fopen("D:\\QiYiCat\\c practice\\c_class_code\\c_file_0726\\c_file_0726\\test.txt", "r");
//	if (pf1 == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	//......
//	printf("file open success!\n");
//	//关闭文件
//	fclose(pf1);
//	return 0;
//}
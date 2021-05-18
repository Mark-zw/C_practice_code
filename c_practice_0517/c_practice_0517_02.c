#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3, c + 2, c + 1, c };
	char*** cpp = cp;
    printf("%s\n",**++cpp); 
	//"POINT"
	printf("%s\n",*--*++cpp+3); 
	//"ER"
	printf("%s\n",*cpp[-2]+3); 
	//"ST"
	printf("%s\n", cpp[-1][-1]+1);
	//"EW"

	return 0;
}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	//pa指向a[1]的地址，a[1]存放"at"常量字符串的首地址
//	printf("%s\n", *pa);
//	//*pa找到a[1]，打印 at
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	//&aa + 1 跳过整个数组，指向数组后面的地址
//	int* ptr2 = (int*)(*(aa + 1));
//	//*(aa + 1) 等价与aa[1]，第二行首元素地址
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	//10,5
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//指针-指针得到两者之间元素的个数
//	//&p[4][2] - &a[4][2]之间相差4个元素，且p<a 得到-4 用%p打印就是FFFFFFFC
//	//用%d打印就是-4
//	printf("%p,%d\n", &a[4][2] - &p[4][2], &a[4][2] - &p[4][2]);
//
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	//初始化{}内部的( )是逗号表示式，结果是最后一个表达式的结果
//	//相当于{1,3,5}
//	int* p;
//	p = a[0];
//	//将二维数组第一行第一个元素的地址赋值给p
//	printf("%d", p[0]);
//	//1
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	//&a表示取出数组的地址，&a+1表示跳过数组，到数组后面的地址
//	//(int*)(&a+1)将这个地址强制类型转换成int*，放到ptr1里面
//	int* ptr2 = (int*)((int)a + 1);
//	//a表示数组首元素地址，（int）a将这个地址强制类型转换成int类型
//	//(int)a + 1,就是地址+1
//	//(int*)((int)a + 1)将这个地址强制类型转换成int*，放到ptr2里面
//	printf("%x,%x", ptr1[-1], *ptr2);
//	//4 ptr[-1]==>*(ptr-1)得到数组最后一个元素，即4，%x八进制打印结果也是4
//	//02 00 00 00 *ptr2得到的就是被强制类型转换为int类型的地址的值+1，地址的单位是字节
//	//ptr2解引用就是访问 00 00 00 02 （小端字节序存储），打印的时候就是 02 00 00 00
//	return 0;
//}

////由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。如下表表达式的值分别为多少?
//  int main()
//  {
//	  p = (struct Test*)0x100000;
//	  printf("%p\n",p + 0x1);
//	  //0x1---十六进制的1，对应到十进制也是1
//	  //0x100014 此时p是结构体指针，结构体大小是20个字节，p+1其地址+20
//	  printf("%p\n",(unsigned long)p + 0x1);
//	  //0x100001，此时p被强制类型转换成 unsigned long 类型，p+1就是地址+1
//	  printf("%p\n",(unsigned int*)p + 0x1);
//	  //0x100004,p被强制类型转换成unsigned int*类型，p+1就是跳过一个int类型，地址+4
//	  return 0;
//  }

//int main()
//{
//    int a[5] = { 1,2,3,4,5}; 
//    int* ptr = (int*)(&a + 1);
//    //&a表示取出数组a的地址，&a+1表示跳过该数组，指向数组后面的地址
//	printf("%d,%d",* (a + 1), * (ptr - 1)); 
//    //此时a表示首元素地址，a+1表示第二个元素地址，* (a + 1)表示第二个元素---2
//    // ptr表示数组后面的地址，ptr - 1表示数组末尾的地址，* (ptr - 1)表示数组最后一个元素---5
// 
//    //程序的结果是什么?
//    //2,5
//	return 0;
//}
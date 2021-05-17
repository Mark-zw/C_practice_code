#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//int main()
//{
//	//二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));
//	//3*4*4=48
//	printf("%d\n", sizeof(a[0][0]));
//	//4
//	printf("%d \n",sizeof(a[0]));
//	//4*4=16  a[0]相当于第一行作为一维数组的数组名，
//	//sizeof(arr[0])把数组名单独放在sizeof()内，计算的是第一行的大小
//	printf("%d\n", sizeof(a[0] + 1)); 
//	//4/8 a[0]+1， a[0]放到表达式中了，是第一行作为数组的数组名，此时表示首元素地址
//	//a[0]+1表示第一行第二个元素的地址，地址的大小为4/8
//	printf("%d\n", sizeof(*(a[0] + 1))); 
//	//4  a[0]+1表示第一行第二个元素的地址 *(a[0] + 1)表示第一行第二个元素，类型是int
//	printf("%d\n", sizeof(a + 1));
//	//4/8 a表示首元素地址，即第一行数组的地址，a + 1表示第二行的地址，地址的大小为4/8
//	printf("%d\n", sizeof(*(a + 1))); 
//	//4*4=16 a + 1表示第二行的地址,*(a + 1)表示第二行数组，数组有4个元素，均为int类型
//	printf("%d\n", sizeof(&a[0] + 1)); 
//	//4/8  a[0]放到表达式中了，是第一行作为数组的数组名，此时表示首元素地址
//	//&a[0] + 1表示第二行数组的地址，地址的大小是4/8
//	printf("%d\n", sizeof(*(&a[0] + 1))); 
//	//4*4=16 &a[0] + 1表示第二行数组的地址,*(&a[0] + 1)表示第二行数组，数组有4个元素，均为int类型
//	printf("%d\n", sizeof(*a));
//	//4*4=16 a表示二维数组首元素地址，即第一行数组的地址，*a表示第一行数组，大小为4*4
//	printf("%d \n",sizeof(a[3]));
//	//4*4=16 假设有第四行的数组，此时第四行数组的大小是4*4=16
//	//sizeof操作符()内部不参与真实运算，所以实际上没有去越界访问
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char* p = "abcdef";
//	//指针变量p存放的不是常量字符串"abcdef"本身，而是存放其首元素的地址,
//	//即字符串"abcdef"中字符'a'的地址
//	printf("%d \n", sizeof(p)); 
//	//4/8 p是一个指针，指针大小32位/64位平台为4/8
//	printf("%d\n", sizeof(p + 1)); 
//	//4/8 p+1是一个地址，字符'b'的地址，地址大小为4/8
//	printf("%d\n", sizeof(*p));
//	//1  *p表示字符'a',类型是char，大小为1个字节
//	printf("%d\n", sizeof(p[0])); 
//	//1  p[0]常量字符串第一个元素，即'a',类型是char，大小为1个字节
//	printf("%d\n", sizeof(&p)); 
//	//4/8 &p表示取出p的地址，地址大小为4/8
//	printf("%d\n", sizeof(&p + 1)); 
//	//4/8 &p+1表示取出p后面的地址，地址大小为4/8
//	printf("%d\n",sizeof(&p[0] + 1));
//	//4/8 &p[0] + 1表示第二个元素的地址，即'b'的地址，地址大小为4/8
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char* p = "abcdef";
//	//指针变量p存放的不是常量字符串"abcdef"本身，而是存放其首元素的地址,
//	//即字符串"abcdef"中字符'a'的地址
//	printf("%d\n", strlen(p));
//	//6 p存储的是'a'的地址，strlen从a开始往后找6个字符，找到'\0'
//	//所以strlen计算的字符串长度为6
//	printf("%d\n", strlen(p + 1));
//	//5 p + 1是'b'的地址,strlen从b开始往后找5个字符，找到'\0'
//	//printf("%d \n", strlen(*p));
//	//错误写法 *p为字符‘a’，ASCII码是97，strlen会将97当作地址来处理
//    //此时会造成越界访问，运行时会报错
//	//printf("%d\n", strlen(p[0]));
//	//错误写法 p[0]为字符‘a’，ASCII码是97，strlen会将97当作地址来处理
//    //此时会造成越界访问，运行时会报错
//	printf("%d\n", strlen(&p));
//	//随机值 取出p的地址，传给strlen，strlen在往后寻找'\0',不知道什么时候遇到'\0'
//	printf("%d\n", strlen(&p + 1));
//	//随机值 取出p后面的地址，传给strlen，strlen在往后寻找'\0',不知道什么时候遇到'\0'
//	printf("%d \n", strlen(&p[0] + 1));
//	//5 p[0]表示首元素，&p[0]表示首元素地址，&p[0] + 1表示第二个元素'b'的地址
//	//strlen从'b'开始计算字符串长度
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));
//	//6 数组arr中实际包含"abcdef \0"，strlen在往后找\0的时候，经过6个char刚好找到\0
//	//strlen在计算字符串长度的时候，'\0'不计算到长度中
//	printf("%d\n", strlen(arr + 0));
//	//6 arr + 0表示首元素地址，与'\0'差6个字符，所以strlen计算长度为6
//	//printf("%d\n", strlen(*arr)); 
//	//错误写法 *arr表示首元素，为字符‘a’，ASCII码是97，strlen会将97当作地址来处理
//	//此时会造成越界访问，运行时会报错
//	//printf("%d\n", str1en(arr[1])); 
//	//错误写法 arr[1]表示第二个元素，为字符‘b’，ASCII码是98，strlen会将98当作地址来处理
//	//此时会造成越界访问，运行时会报错
//	printf("%d\n", strlen(&arr)); 
//	//6 &arr取出数组的地址，strlen在接收地址的时候是char*,会将数组的地址当作char*来使用
//	//往后寻找'\0',经过6个char刚好找到\0
//	printf("%d\n", strlen(&arr + 1));
//	//随机值 &arr + 1跳过数组得到数组后面的地址，什么时候会遇到'\0'不确定，所以是随机值
//	printf("%d\n", strlen(&arr[0] + 1));
//	//5  &arr[0] + 1表示第二个元素的地址，经过5个char遇到'\0'，所以strlen计算长度为5
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr)); 
//	//7 用字符串来初始化字符串数组时，最后会自动添加字符串结束标志'\0'
//	//数组arr中实际存放 abcdef+\0 7个元素 所以sizeof(arr)求数组的长度是 1*7=7个字节
//	printf("%d\n",sizeof(arr + 0)); 
//	//4/8  arr + 0表示首元素地址，地址的大小是4/8个字节
//	printf("%d\n", sizeof(*arr)); 
//	//1 *arr表示首元素，arr首元素是一个字符char类型'a',大小是1个字节
//	printf("%d\n", sizeof(arr[1]));
//	//1 arr[1]表示第二个元素，arr首元素是一个字符char类型'a',大小是1个字节
//	printf("%d \n", sizeof(&arr)); 
//	//4/8 &arr表示取出数组的地址，地址的大小是4/8个字节
//	printf("%d\n", sizeof(&arr + 1)); 
//	//4/8   &arr + 1表示跳过数组的地址，得到数组后面的地址，地址的大小是4/8个字节
//	printf("%d\n", sizeof(&arr[0] + 1));
//	//4/8   &arr[0]表示首元素地址，&arr[0] + 1表示第二个元素的地址，地址的大小是4/8个字节
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	//字符数组
//	char arr[] = {'a ', 'b', 'c', 'd', 'e', 'f'};
//	printf("%d\n", strlen(arr));
//	//随机值，arr表示首元素地址，数组中没有\0，所以用strlen计算长度的时候不知道会在哪里停止，所以是随机值
//	printf("%d\n", strlen(arr + 0));
//	//随机值，arr+0表示首元素地址，数组中没有\0，所以用strlen计算长度的时候不知道会在哪里停止，所以是随机值
//	//printf("%d\n", str1en(*arr));
//	//错误写法 ,strlen后面需要传递一个地址，*arr表示首元素，首元素是字符'a',其ASCII码是97，strlen会将97当作地址来处理
//	//此时会造成越界访问，运行时会报错
//	//printf("%d\n", strlen(arr[1]));
//	//错误写法 ,strlen后面需要传递一个地址，arr[1]表示第二个元素，首元素是字符'b',其ASCII码是98，strlen会将97当作地址来处理
//	//此时会造成越界访问，运行时会报错
//	printf("%d\n", strlen(&arr));
//	//随机值,&arr表示数组的地址，数组中没有\0，所以用strlen计算长度的时候不知道会在哪里停止，所以是随机值
//	printf("%d\n", strlen(&arr + 1));
//	//随机值，&arr+1表示跳过数组后的地址，后面不知道什么时候遇到'\0',所以是随机值
//	printf("%d\n", strlen(&arr[0] + 1));
//	//随机值，&arr[0] + 1表示第二个元素的地址，后面不知道什么时候遇到'\0',所以是随机值
//	return 0;
//}

//int main()
//{
//	//字符数组
//	char arr[] = {'a ', 'b', 'c', 'd', 'e', 'f'};
//	printf("%d \n", sizeof(arr));//6 
//	printf("%d\n", sizeof(arr + 0));//4/8 arr+0还是表示首元素地址，地址大小是4/8个字节
//	printf("%d\n", sizeof(*arr));//1 *arr表示首元素，类型是char，char大小是1个字节
//	printf("%d\n",sizeof(arr[1]));//1 arr[1]表示第二个元素，类型是char，char大小是1个字节
//	printf("%d\n", sizeof(&arr));//4/8 &arr表示取出数组的地址，地址大小是4/8个字节
//	printf("%d\n", sizeof(&arr + 1));
//	//4/8 &arr表示取出数组的地址,&arr+1表示跳过整个数组，到数组后面的地址，地址大小是4/8个字节 
//	printf("%d \n", sizeof(&arr[0] + 1));
//	//4/8 &arr[0]表示取出首元素的地址，&arr[0]+1表示取出第二个元素的地址，地址大小是4/8个字节
//
//
//
//	return 0;
//}


//int main()
//{
//	//一维数组
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a)); // 16 sizeof(数组名)，数组名表示整个数组，大小为4*4=16个字节
//	printf("%d\n", sizeof(a + 0));//4/8 此时数组名表示首元素地址，a+0首元素地址+0仍表示首元素地址，地址大小为4/8个字节
//	printf("%d\n", sizeof(*a));// 4  此时数组名表示首元素地址,*a表示首元素，为int类型，大小为4个字节
//	printf("%d\n", sizeof(a + 1));//4/8 此时数组名表示首元素地址，a+1 首元素地址+1表示第二个元素地址，地址大小为4/8个字节
//	printf("%d\n", sizeof(a[1])); //4 此时数组名表示首元素地址 a[1]表示第二个元素，为int类型，大小为4个字节
//	printf("%d\n", sizeof(&a)); //4/8 &数组名表示取出数组的地址，地址大小为4/8个字节
//	printf("%d\n", sizeof(*&a)); //16 &a是取出数组地址，*&a是对数组地址解引用，得到是数组，sizeof(数组)计算数组大小--16
//	printf("%d\n", sizeof(&a + 1)); //4/8 &a是取出数组地址,&a+1表示跳过整个数组，指向整个数组后面的地址，地址大小为4/8个字节
//	printf("%d\n", sizeof(&a[0])); //4/8 &a[0]表示取出第一个元素的地址，地址大小为4/8个字节
//	printf("%d\n", sizeof(&a[0] + 1));//4/8 &a[0]表示取出第一个元素的地址，&a[0] + 1表示第二个元素的地址，地址大小为4/8个字节
//	return 0;
//}
#include <stdio.h>
#include <string.h>

//普通的类型 int char double 都不足以来描述一个复杂的对象
//结构体---描述复杂的对象
// 人   名字/性别/身高/体重 等等
// 书   名字/作者/价格/出版社  等等

//举例 运用结构体来描述书
struct Book 
{
	char name[20];
	char author[20];
	short price;
};
//结构体是一种数据的定义方式，类似于 int a ;  后面需要跟上语句结束标志符 ; 而函数不需要



int main()
{
	//利用结构体类型---创建一个该类型的结构体变量
	struct Book b1 = {"C语言程序设计","谭浩强",55};
	struct Book* p = &b1;
	/*printf("书名：%s\n",b1.name);
	printf("作者：%s\n",b1.author);
	printf("价格：%d元\n",b1.price);
	b1.price = 15;
	printf("修改后的价格：%d元\n",b1.price);*/


	//.    结构体变量.成员
	//->   结构体指针->成员
	printf("书名：%s\n",(*p).name);
	printf("作者：%s\n",(*p).author);
	printf("价格：%d元\n",(*p).price);

	//修改名字，strcpy---string copy 字符串拷贝函数,需要声明头文件 string.h 
	//strcpy( 变量名,"变化后字符串" )两个参数，
	strcpy(b1.name,"C++");
	printf("修改后的书名：%s\n",(*p).name);
	(*p).price = 15;
	printf("修改后的价格：%d元\n",p->price);



	return 0;
}
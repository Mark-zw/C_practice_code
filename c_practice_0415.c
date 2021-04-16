#define _CRT_SECURE_NO_WARNINGS 1
//5.编写代码实现，模拟用户登录情景，并且只能登陆三次。
//（只允许输入三次密码，如果密码正确则提示登陆成功，如果三次均输入错误，则退出程序）
//#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	printf("please input your password:>>\n");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", password);
//		if (strcmp(password,"123456") == 0)
//		{
//			printf("Successful login!\n");
//		}
//		else
//		{
//			printf("Login failed,you will have %d times chance input password again!\n", 3 - i);
//		}
//	}
//	printf("Log out!\n");
//	return 0;
//}

//#include<stdio.h>
//#include<Windows.h>
////welcome to new world!
////*********************
////w*******************!
////we*****************d!
////......
////welcome to new world!
//int main()
//{
//	char arr1[] = "welcome to new world!";
//	char arr2[] = "*********************";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	scanf("%d", &k);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("Find it,subscript is %d!\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("Can't find it!\n");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//way2:
//	for (i = 1;i <= 10; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//
//	//way1:
//	//for (i = 1; i <= 10; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 1,ret = 1; j <= i; j++)
//	//	{
//	//		ret *= j;
//	//	}
//	//	sum += ret;
//	//}
//
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//
//	//i = 1;//方法一：while语句结构
//	//ret = 1;
//	//while (i <= n)
//	//{
//	//	ret *= i;
//	//	i++;
//	//}
//
//	//方法二：for语句结构
//	//for (i = 1, ret = 1; i <= n; i++)
//	//{
//	//	ret *= i;
//	//}
//
//	//方法三：do while语句结构
//	i = 1;
//	ret = 1;
//	do
//	{
//		ret *= i;
//		i++;
//	} while (i <= n);
//
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
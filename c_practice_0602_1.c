#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
//int* singleNumbers(int* nums, int numsSize, int* returnSize) {
//    int i = 0;
//    int XOR = 0;//让XOR等于数组nums的首项
//    int m = 1;//用来保存二进制位为1的位置
//    for (i = 0; i < numsSize; i++)
//    {
//        XOR ^= nums[i];//XOR从第二项开始异或并将结果存到XOR中
//    }
//    while ((XOR & m) == 0)
//    {
//        m <<= 1;
//    }
//    int* pArr = (int*)malloc(2 * sizeof(int));//动态开辟两个int大小的数组
//    pArr[0] = 0;//对动态开辟的数组进行初始化
//    pArr[1] = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        if ((nums[i] & m) == 0)
//        {
//            pArr[0] ^= nums[i];//将第一组异或的结果放到pArr[0]中
//        }
//        else
//        {
//            pArr[1] ^= nums[i];//将第二组异或的结果放到pArr[1]中
//        }
//    }
//    *returnSize = 2;
//    return pArr;
//}
//int main()
//{
//    int nums[] = { 4,1,4,6,5,6 };
//    int numsSize = sizeof(nums) / sizeof(nums[0]);
//    int returnSize = 0;
//    int* pArr = 0;
//    int i = 0;
//    pArr = singleNumbers(nums, numsSize, &returnSize);
//    for (i = 0; i < returnSize; i++)
//    {
//        printf("%d\n", pArr[i]);
//    }
//    free(pArr);
//    pArr = NULL;
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("%d", 1 << 2);
//
//	return 0;
//}

//int missingNumber(int* nums, int numsSize)
//{
//	int n = numsSize + 1;//从0-numsSize中真实的数字个数为nums数组元素个数+1
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)//产生0-numsSize的数字
//	{
//		int flag = 1;//记录某个数字是否缺少的标记
//		for (j = 0; j < numsSize; j++)//用来访问数组nums中的每个元素
//		{
//			if (i == nums[j])
//			{
//				flag = 0;//只要在nums中找到对应的数字，就将flag赋值为0
//			}
//		}
//		//j所在循环结束表示i此时代表的数字跟数组nums中所有元素都比较过
//		if (flag == 1)//表示nums中找不到这个数字
//		{
//			return i;//函数直接结束，返回缺少的数字i
//			//因为已知仅缺少一个数字
//		}
//	}
//	return exit(-1);//如果程序执行到这一步，表示数组nums中不缺少数字，函数崩溃并给出相应提示
//}
//int missingNumber(int* nums, int numsSize)
//{
//	int n = numsSize + 1;//从0-numsSize中真实的数字个数为nums数组元素个数+1
//	int i = 0;
//	int XOR = 0;//用来保存异或之后的结果
//	//将0-numsSize所有的数字异或
//	for (i = 1; i < n; i++)
//	{
//		XOR ^= i;
//	}
//	//将异或的结果再与nums中所有元素异或
//	for (i = 0; i < numsSize; i++)
//	{
//		XOR ^= nums[i];
//	}
//	return XOR;
//}
//
//int main()
//{
//	int nums[] = { 0,1,2,5,4,6,7,8 };//假设数组为这个
//	int numsSize = sizeof(nums) / sizeof(nums[0]);//这个用来计算数组元素的个数
//	int ret = missingNumber(nums, numsSize);
//	printf("%d\n", ret);
//	return 0;
//}
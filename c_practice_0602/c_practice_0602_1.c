#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
//int* singleNumbers(int* nums, int numsSize, int* returnSize) {
//    int i = 0;
//    int XOR = 0;//��XOR��������nums������
//    int m = 1;//�������������λΪ1��λ��
//    for (i = 0; i < numsSize; i++)
//    {
//        XOR ^= nums[i];//XOR�ӵڶ��ʼ��򲢽�����浽XOR��
//    }
//    while ((XOR & m) == 0)
//    {
//        m <<= 1;
//    }
//    int* pArr = (int*)malloc(2 * sizeof(int));//��̬��������int��С������
//    pArr[0] = 0;//�Զ�̬���ٵ�������г�ʼ��
//    pArr[1] = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        if ((nums[i] & m) == 0)
//        {
//            pArr[0] ^= nums[i];//����һ�����Ľ���ŵ�pArr[0]��
//        }
//        else
//        {
//            pArr[1] ^= nums[i];//���ڶ������Ľ���ŵ�pArr[1]��
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
//	int n = numsSize + 1;//��0-numsSize����ʵ�����ָ���Ϊnums����Ԫ�ظ���+1
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)//����0-numsSize������
//	{
//		int flag = 1;//��¼ĳ�������Ƿ�ȱ�ٵı��
//		for (j = 0; j < numsSize; j++)//������������nums�е�ÿ��Ԫ��
//		{
//			if (i == nums[j])
//			{
//				flag = 0;//ֻҪ��nums���ҵ���Ӧ�����֣��ͽ�flag��ֵΪ0
//			}
//		}
//		//j����ѭ��������ʾi��ʱ��������ָ�����nums������Ԫ�ض��ȽϹ�
//		if (flag == 1)//��ʾnums���Ҳ����������
//		{
//			return i;//����ֱ�ӽ���������ȱ�ٵ�����i
//			//��Ϊ��֪��ȱ��һ������
//		}
//	}
//	return exit(-1);//�������ִ�е���һ������ʾ����nums�в�ȱ�����֣�����������������Ӧ��ʾ
//}
//int missingNumber(int* nums, int numsSize)
//{
//	int n = numsSize + 1;//��0-numsSize����ʵ�����ָ���Ϊnums����Ԫ�ظ���+1
//	int i = 0;
//	int XOR = 0;//�����������֮��Ľ��
//	//��0-numsSize���е��������
//	for (i = 1; i < n; i++)
//	{
//		XOR ^= i;
//	}
//	//�����Ľ������nums������Ԫ�����
//	for (i = 0; i < numsSize; i++)
//	{
//		XOR ^= nums[i];
//	}
//	return XOR;
//}
//
//int main()
//{
//	int nums[] = { 0,1,2,5,4,6,7,8 };//��������Ϊ���
//	int numsSize = sizeof(nums) / sizeof(nums[0]);//���������������Ԫ�صĸ���
//	int ret = missingNumber(nums, numsSize);
//	printf("%d\n", ret);
//	return 0;
//}
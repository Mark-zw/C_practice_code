#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//#include<math.h>
////3.���0��100000֮������С�ˮ�ɻ������������
////��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//int Narciss_Number(int i)//�ж��Ƿ�Ϊˮ�ɻ�������-1 ��-0
//{
//	//1.�ж�nλ��
//	int tmp = i;
//	int count = 1;
//	int sum = 0;
//	while (tmp /= 10)
//	{
//		count++;
//	}
//	tmp = i;
//	//2.�жϸ�λ����n�η�֮���Ƿ���ڸ�������
//	while (tmp)
//	{
//		sum += pow(tmp % 10, count);
//		tmp /= 10;
//	}
//	if (sum == i)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		ret = Narciss_Number(i);
//		if (ret == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////2.��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
////���磺2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int i = 0;
//	int m = 0;
//	int Sn = 0;
//	scanf("%d%d", &n,&k);
//	for (i = 0; i < k; i++)
//	{
//		m = m * 10 + n;
//		Sn += m;
//	}
//	printf("Sn = %d\n", Sn);
//	return 0;
//}


////1.дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
////arr��һ������һά���顣
//void print_arr(int* pa, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr,sz);
//	return 0;
//}

#include<stdio.h>
//��������ʱ����ʵ���������Ľ���
int main()
{
	int a = 3;
	int b = 5;
	printf("before swap:a = %d,b = %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("after swap:a = %d,b = %d", a, b);
	return 0;
}

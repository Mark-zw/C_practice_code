#include<stdio.h>


//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 5;
//	int c = a && b;
//	printf("%d\n", c);
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//int main()
//{
//	int a =(int) 3.14;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);//ǰ��++,��++�����ӡ
//	//printf("%d\n", a++);//����++,�ȴ�ӡ����++
//	//printf("%d\n", --a);//ǰ��--,��--�����ӡ
//	printf("%d\n", a--);////����--,�ȴ�ӡ����--
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int i = 11;
//	//00000000 00000000 00000000 00001011 �õ�������λ���1�����಻��
//	//00000000 00000000 00000000 00000100  ��λ��  ���ܵõ�
//	//1 << 2 1����2λ�õ� 00000000 00000000 00000000 00000100
//
//	//int j = i | 4;
//	int j = i | (1 << 2);
//	printf("%d\n", j);
//	//��j���ԭ����i  ֻ��Ҫ��λ�����
//	//00000000 00000000 00000000 00001111
//	//11111111 11111111 11111111 11111011
//	//00000000 00000000 00000000 00001011
////��  11111111 11111111 11111111 11111011 �����ɰ�λȡ���õ�
////    00000000 00000000 00000000 00000100  ������ֿ���ͨ��1����2λ�õ�
//	j = j & (~(1 << 2));
//	printf("%d\n", j);
//	//int a = 0;
//	//printf("%d\n", ~a);
//	return 0;
//}
//int main()
//{
//	short i = 0;
//	int j = 10;
//	printf("%d\n", sizeof(i = j + 5));//sizeof������ռ�ռ�Ĵ�С
//	//���������j��ʲô����  j+5�Ľ�����Ƿŵ����� i����  ��i����short����
//	//sizeof(i=j+5)���� sizeof(i)����sizeof(short)����2
//	printf("%d\n", i);
//	//sizeof����ŵı��ʽ��������ʵ�������㣬ֻ��һ������
//	//Ҳ����˵ i=j+5 ��һ��������δ��ʵִ�У�����i����ԭ����ֵ��0
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	char b = 'A';
//	int arr[20] = {0};
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof ( int));
//
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [20]));
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	printf("%d\n", a += 1);
//	printf("%d\n", a -= 1);
//	printf("%d\n", a *= 2);
//	printf("%d\n", a /= 2);
//	printf("%d\n", a %= 2);
//	printf("%d\n", a <<= 1);
//	printf("%d\n", a >>= 1);
//	printf("%d\n", a &= -1);
//	printf("%d\n", a |= 1);
//	printf("%d\n", a ^= 1);
//	return 0;
//}
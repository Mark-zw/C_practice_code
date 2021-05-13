#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
//int main()
//{
//	int x1 = 2, y1 = 2;
//	int x2 = -1, y2 = 2;
//	int x3 = -2, y3 = -2;
//	int x4 = 2, y4 = -2;
//	double x, y;
//	double dis1, dis2, dis3, dis4;
//	int height;
//	scanf("%lf%lf", &x, &y);
//	dis1 = (x - x1) * (x - x1) + (y - y1) * (y - y1);
//	dis2 = (x - x2) * (x - x2) + (y - y2) * (y - y2);
//	dis3 = (x - x3) * (x - x3) + (y - y3) * (y - y3);
//	dis4 = (x - x4) * (x - x4) + (y - y4) * (y - y4);
//	if (dis1 <= 1 || dis2 <= 1 || dis3 <= 1 || dis4 <= 1)
//	{
//		height = 10;
//	}
//	else
//	{
//		height = 0;
//	}
//	printf("height = %d\n", height);
//	return 0;
//}

//int main()
//{
//	int a, b, c, d;
//	int tmp = 0;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	if (a > b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if(a > c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (a > d)
//	{
//		tmp = a;
//		a = d;
//		d = tmp;
//	}
//	if (b > c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	if (b > d)
//	{
//		tmp = b;
//		b = d;
//		d = tmp;
//	}
//	if (c > d)
//	{
//		tmp = c;
//		c = d;
//		d = tmp;
//	}
//	printf("%d,%d,%d,%d\n", a, b, c, d);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int count = 1;//记录n的位数
//	scanf("%d", &n);
//	//if (n / 10)
//	//{
//	//	count++;
//	//	n = n / 10;
//	//}
//	//if (n / 10)
//	//{
//	//	count++;
//	//	n = n / 10;
//	//}
//	//if (n / 10)
//	//{
//	//	count++;
//	//	n = n / 10;
//	//}
//	//if (n / 10)
//	//{
//	//	count++;
//	//	n = n / 10;
//	//}
//	while (n / 10)
//	{
//		printf("%d", n % 10);
//		count++;
//		n /= 10;
//	}
//	printf("%d", n % 10);
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int score = 0;
//	int grade = 0;
//	scanf("%d", &score);
//	grade = score / 10;
//	switch (grade)
//	{
//	case 10:
//	case 9:
//		printf("A\n");
//		break;
//	case 8:
//		printf("B\n");
//		break;
//	case 7:
//		printf("C\n");
//		break;
//	case 6:
//		printf("D\n");
//		break;
//	case 5:
//	case 4:
//	case 3:
//	case 2:
//	case 1:
//	case 0:
//		printf("E\n");
//		break;
//	default:
//		printf("Wrong score!\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	double x, y;
//	scanf("%lf", &x);
//	if (x < 0)
//		y = -1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = 1;
//	printf("y = %lf\n", y);
//	return 0;
//}

//int main()
//{
//	double x, y;
//	scanf("%lf", &x);
//	if (x < 1)
//		y = x;
//	else if (x >= 1 && x < 10)
//		y = 2 * x - 1;
//	else
//		y = 3 * x - 11;
//	printf("y = %lf\n", y);
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int i = 0;
//	int my_sqrt = 0;
//	scanf("%d", &i);
//	my_sqrt = (int)sqrt(i);
//	printf("%d\n", my_sqrt);
//	return 0;
//}


//int main()
//{
//	int a, b, c;
//	int max = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		max = a;
//	}
//	else
//	{
//		max = b;
//	}
//	if (max < c)
//	{
//		max = c;
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	if (x < 0)
//		y = -1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = 1;
//	printf("y = %d\n", y);
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	//if (ch >= 'A' && ch <= 'Z')
//	//{
//	//	ch += 32;
//	//}
//	ch = ch >= 'A' && ch <= 'Z' ? ch + 32 : ch;
//	putchar(ch);
//	return 0;
//}

//int main()
//{
//	char c1, c2;
//	c1 = getchar();
//	c2 = getchar();
//	putchar(c1); 
//	putchar(c2);
//	printf("\n%c%c\n", c1, c2);
//	return 0;
//}


//#define PI 3.14
//int main()
//{
//	double r = 1.5;//半径
//	double h = 3.0;//圆柱高
//	double L1 = 2 * PI * r;//圆周长
//	double S1 = PI * r * r;//圆面积
//	double S = 4 * PI * r * r;//圆球表面积
//	double V1 = 4 * (PI * r * r * r) / 3;//圆球体积
//	double V2 = PI * r * r * h;//圆柱体积
//	printf("圆周长 L1 = %.2lf\n", L1);
//	printf("圆面积 S1 = %.2lf\n", S1);
//	printf("圆球表面积 S = %.2lf\n", S);
//	printf("圆球体积 V1 = %.2lf\n", V1);
//	printf("圆柱体积 V2 = %.2lf\n", V2);
//
//	return 0;
//}

//int main()
//{
//	char c1 = 'C';
//	char c2 = 'h';
//	char c3 = 'i';
//	char c4 = 'n';
//	char c5 = 'a';
//	c1 = c1 + 4;
//	c2 = c2 + 4;
//	c3 = c3 + 4;
//	c4 = c4 + 4;
//	c5 = c5 + 4;
//	putchar(c1);
//	putchar(c2);
//	putchar(c3);
//	putchar(c4);
//	putchar(c5);
//	printf("\nc1 = %c,c2 = %c,c3 = %c,c4 = %c,c5 = %c\n", c1, c2, c3, c4, c5);
//	return 0;
//}


//int main()
//{
//	int a, b;
//	double x, y;
//	char c1, c2;
//	scanf("%d%d", &a, &b);
//	scanf("%lf%lf", &x, &y);
//	scanf("%c%c", &c1, &c2);
//	printf("a = %d,b = %d\n",a,b);
//	printf("x = %.2lf,y = %.2lf\n", x, y);
//	printf("c1 = %c,c2 = %c\n", c1, c2);
//	return 0;
//}

//int main()
//{
//	int c1 = 97;
//	int c2 = 98;
//	printf("c1 = %c,c2 = %c\n", c1, c2);
//	printf("c1 = %d,c2 = %d\n", c1, c2);
//	c1 = 197;
//	c2 = 198;
//	printf("c1 = %c,c2 = %c\n", c1, c2);
//	printf("c1 = %d,c2 = %d\n", c1, c2);
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	double d = 300000;
//	double p = 6000;
//	double r = 0.01;
//	double m = log10(p / (p - d * r)) / log10(1 + r);
//	printf("%lf\n", m);
//	printf("%lf\n", m * p);
//	printf("%lf\n", m * p - d);
//	return 0;
//}


//int main()
//{
//	double p = 0;
//	double r = 0.03;
//	double incre = 0;
//	int n = 0;
//	scanf("%d", &n);
//	p = pow((1 + r), n);
//	incre = p - 1;
//	printf("%lf\n", p);
//	printf("increase is %lf\n", incre);
//	return 0;
//}

//int main()
//{
//	//float f = 10000 / 3.0;
//	//double d = 10000 / 3.0;
//	//printf("%f\n", f);
//	//printf("%20.15f\n", f);
//	//printf("%8.3e\n", f);
//	//printf("%lf\n", d);
//	//printf("%20.15lf\n", d);
//	//printf("%8.3e\n", d);
//	//printf("%8.3E\n", d);
//	//printf("%o\n", -1);
//	//printf("%x\n", -1);
//
//	char a = 'B';
//	char b = 'O';
//	char c = 'Y';
//	putchar(a);
//	putchar(b);
//	putchar(c);
//	putchar('\n');
//
//	return 0;
//}
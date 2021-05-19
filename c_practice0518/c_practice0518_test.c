#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

main()

{
	int x = 2, y = -1, z = 5;

	if (x < y)

		if (y < 0)

			z = 0;

		else

			z = z + 1;

	printf("%d\n", z);

}

//int main()
//{
//	int i = 0;
//	if (1 || i++)
//	{
//		;
//	}
//	printf("%d", i);
//	return 0;
//}
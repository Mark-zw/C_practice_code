#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
void game_menu()
{
	printf("**********************************\n");
	printf("********   1.play game   *********\n");
	printf("********   0.exit game   *********\n");
	printf("**********************************\n");
}
int main()
{
	int input;
	do
	{
		game_menu();
		printf("Please choose:>>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("Game playing......\n");
			break;
		case 0:
			printf("Exit game!\n");
			break;
		default:
			printf("Choose wrong ! Please try again!\n");
			break;
		}
	} while (input);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS




#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("********************\n");
	printf("*        1.Play    *\n");
	printf("*        2.Exit    *\n");
	printf("********************\n");


}
void game()
{
	int guess = 0;
	int ret = rand()%100+1;
	/*printf("%d\n", ret);*/
	while (1)
	{
		printf("猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		
		menu();
		printf("是否开始游戏:>1/0<");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入有误，重新输入\n");
			break;
		}
		
	} while (input);
	return 0;
}
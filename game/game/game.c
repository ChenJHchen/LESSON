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
		printf("������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶���\n");
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
		printf("�Ƿ�ʼ��Ϸ:>1/0<");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������\n");
			break;
		}
		
	} while (input);
	return 0;
}
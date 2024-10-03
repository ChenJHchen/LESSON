#define _CRT_SECURE_NO_WARNINGS


#include"game.h"
void menu()
{
	printf("******************************\n");
	printf("******1.Play 0.Exit***********\n");
	printf("******************************\n");

}
void game()
{
	char board[ROW][COL];// ROW * COL 棋盘
	InitBoard(board,ROW,COL);//初始化棋盘
	DisPlayboard(board, ROW, COL);//打印棋盘
	//开始下棋
	//0表示棋盘棋盘状态
	//玩家先下 *
	//电脑后下 #
	char ret = 0;
	////玩家下棋
	while (1)
	{
		
		PlayMove(board, ROW, COL);
		DisPlayboard(board, ROW, COL);
		//判断玩家是否输赢 
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
			break;
		ComputerMove(board, ROW, COL);
		DisPlayboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);//判断电脑输赢
		if (ret != 'C')
			break;
		
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
	DisPlayboard(board, ROW, COL);
	
}
int main()
{
	//生成电脑随机坐标
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{

		printf("请输入数字开始游戏:>\n");
		menu();
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();//游戏开始
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}
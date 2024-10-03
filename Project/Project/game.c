#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	//初始化空格棋盘 3*3 
	

	int i = 0;//行
	for (i = 0; i < row; i++)
	{
		int j = 0;//列
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}	
}

void DisPlayboard(char board[ROW][COL], int row, int col)
{

	//打印棋盘
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");

		}
		printf("\n");

		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");

		}
	}


}


void PlayMove(char board[ROW][COL], int row, int col)
{
	//初始化两坐标
	int x = 0;
	int y = 0;
	printf("玩家输入\n");

	while (1)
	{
		printf("请输入坐标:\n");
		scanf("%d %d", &x, &y);
		/*判断输入坐标是否合法*/
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				/*开始下棋*/
				board[x - 1][y - 1] = '*';
				break;

			}
			else
			{
				printf("坐标占用，请输入其他坐标\n");
			}

		}
		else
		{
			printf("坐标错误，请重新输入\n");
		}
	}
}


void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑输入\n");
	while (1)
	{
		//生成0-2的坐标范围
		int x = rand() % row;
		int y = rand() % col;

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}

	}
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for(j=0;j<col;j++)
			//棋盘没满
			if (board[i][j] == ' ')
			{
				return 0;
			}

	}
	return 1;
}
char Iswin(char board[ROW][COL], int row, int col)
{
		int i = 0;
		//判断三行
		for (i = 0; i < row; i++)
		{
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			{
				return  board[i][1];//
			}
		}

		//判断三列
		for (i = 0; i < col; i++)
		{
			if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			{
				return board[1][i];
			}
		}

		//判断对角线
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		{
			return board[1][1];
		}
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		{
			return board[1][1];
		}
	//判断三行是否相等
	//int i = 0;
	//for (i = 0; i < row; i++)
	//{
	//	if (board[i][0] && board[i][1] && board[i][2] && board[i][1] != ' ')
	//	{
	//		return board[i][1];

	//	}
	//}
	//int j = 0;
	//for (j = 0; j< col; j++)
	//{
	//	if (board[0][j] && board[1][j] && board[1][j] && board[2][j] != ' ')
	//	{
	//		return board[1][j];
	//	}
	//}
	////判断对角线
	//if (board[0][0] && board[1][1] && board[2][2] && board[1][1] != ' ')
	//{
	//	return board[1][1];
	//}
	//if (board[0][2] && board[2][2] && board[1][2] && board[0][2] != ' ')
	//{
	//	return board[1][2];
	//}
	//平局状态
   // 如果棋盘满了返回1 否则0
	int ret = IsFull(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}
	else
	{
		return 'C';//继续
	}

}





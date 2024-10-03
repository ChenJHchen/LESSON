#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	//��ʼ���ո����� 3*3 
	

	int i = 0;//��
	for (i = 0; i < row; i++)
	{
		int j = 0;//��
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}	
}

void DisPlayboard(char board[ROW][COL], int row, int col)
{

	//��ӡ����
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
	//��ʼ��������
	int x = 0;
	int y = 0;
	printf("�������\n");

	while (1)
	{
		printf("����������:\n");
		scanf("%d %d", &x, &y);
		/*�ж����������Ƿ�Ϸ�*/
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				/*��ʼ����*/
				board[x - 1][y - 1] = '*';
				break;

			}
			else
			{
				printf("����ռ�ã���������������\n");
			}

		}
		else
		{
			printf("�����������������\n");
		}
	}
}


void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("��������\n");
	while (1)
	{
		//����0-2�����귶Χ
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
			//����û��
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
		//�ж�����
		for (i = 0; i < row; i++)
		{
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			{
				return  board[i][1];//
			}
		}

		//�ж�����
		for (i = 0; i < col; i++)
		{
			if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			{
				return board[1][i];
			}
		}

		//�ж϶Խ���
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		{
			return board[1][1];
		}
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		{
			return board[1][1];
		}
	//�ж������Ƿ����
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
	////�ж϶Խ���
	//if (board[0][0] && board[1][1] && board[2][2] && board[1][1] != ' ')
	//{
	//	return board[1][1];
	//}
	//if (board[0][2] && board[2][2] && board[1][2] && board[0][2] != ' ')
	//{
	//	return board[1][2];
	//}
	//ƽ��״̬
   // ����������˷���1 ����0
	int ret = IsFull(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}
	else
	{
		return 'C';//����
	}

}





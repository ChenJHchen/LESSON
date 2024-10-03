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
	char board[ROW][COL];// ROW * COL ����
	InitBoard(board,ROW,COL);//��ʼ������
	DisPlayboard(board, ROW, COL);//��ӡ����
	//��ʼ����
	//0��ʾ��������״̬
	//������� *
	//���Ժ��� #
	char ret = 0;
	////�������
	while (1)
	{
		
		PlayMove(board, ROW, COL);
		DisPlayboard(board, ROW, COL);
		//�ж�����Ƿ���Ӯ 
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
			break;
		ComputerMove(board, ROW, COL);
		DisPlayboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);//�жϵ�����Ӯ
		if (ret != 'C')
			break;
		
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	DisPlayboard(board, ROW, COL);
	
}
int main()
{
	//���ɵ����������
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{

		printf("���������ֿ�ʼ��Ϸ:>\n");
		menu();
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();//��Ϸ��ʼ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include<time.h>
#include<stdlib.h>


#define ROW 3
#define COL 3 

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char rboard[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row,int col);
void ComputerMove(char board[ROW][COL], int row, int col);


char Iswin(char board[ROW][COL], int row, int col);



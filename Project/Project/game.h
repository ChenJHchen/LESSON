#pragma once

#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL], int row, int col);

void DisPlayboard(char board[ROW][COL], int row, int col);

void PlayMove(char board[ROW][COL], int row, int col);

void ComputerMove(char board[ROW][COL], int row, int col);

char Iswin(char board[ROW][COL], int row, int col);

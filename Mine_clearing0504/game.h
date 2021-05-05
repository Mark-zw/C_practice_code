/*******************/
//以下是头文件game.h内容
/*******************/
#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//布置雷的个数
#define EASY_COUNT 10
#define MIDDLE_COUNT 20
#define HARD_COUNT 50

//棋盘的行号、列号
//#define ROW 9
//#define COL 9

#define ROW 15
#define COL 15

#define ROWS  ROW+2
#define COLS  COL+2

//初始化棋盘声明
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//打印棋盘声明
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//布置雷声明
void SetMine(char mine[ROWS][COLS], int row, int col);

//排查雷声明
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);



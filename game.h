/*******************/
//������ͷ�ļ�game.h����
/*******************/
#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//�����׵ĸ���
#define EASY_COUNT 10
#define MIDDLE_COUNT 20
#define HARD_COUNT 50

//���̵��кš��к�
//#define ROW 9
//#define COL 9

#define ROW 15
#define COL 15

#define ROWS  ROW+2
#define COLS  COL+2

//��ʼ����������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//��ӡ��������
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//����������
void SetMine(char mine[ROWS][COLS], int row, int col);

//�Ų�������
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);



#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void Initborad(char borad[ROW][LO], int row, int lo)
{
	int i=0;
	int j = 0;
	for (i = 0; i <row; i++)
	{
		for (j = 0; j <lo; j++)
		{
			borad[i][j] = ' ';

		}
	}
}
void Displyaborad(char borad[ROW][LO], int row, int lo)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < lo; j++)
		{
			printf(" %c ", borad[i][j]);
			if (j<lo-1)
			  printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < lo; j++)
			{
				printf("---");
				if (j < lo - 1)
					printf("|");

			}
		}printf("\n");
	}
}
	
void player(char borad[ROW][LO], int row, int  lo)
{
	printf("玩家走->\n");
	int x = 0;
	int y = 0;
	while (1){
		printf("请输入坐标:");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y>=1 && y <=lo)
		{
			if (borad[x-1][y-1] == ' ')
			{
				borad[x-1][y-1] = '*';
				break;
			}
			else
				printf("该坐标已经被占用");
		}
		else
		{
			printf("坐标非法，请从新输入坐标\n");
		}

	}
}

void computer(char borad[ROW][LO], int row, int lo){
	int x = 0;
	int y = 0;
	printf("电脑走：\n");
	while(1)
	{
		x = rand() % row;
		y = rand() % lo;
		if (borad[x][y] = ' ')
		{
			borad[x][y] = '#';
			break;

		}
		else
			;
	}
}
int isfull(char borad[ROW][LO],int row,int lo)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < lo; j++)
		{
			if (borad[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char win(char borad[ROW][LO], int row, int lo)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (borad[i][0] == borad[i][1] && borad[i][1] == borad[i][2] && borad[i][1] != ' ')
		{
			return borad[i][0];
		}
	}
	for (i = 0; i < lo; i++)
	{
		if (borad[0][i] == borad[1][i] && borad[1][i] == borad[2][i] && borad[1][i] != ' ')
		{
			return borad[1][i];
		}
	}
	if (borad[0][0] == borad[1][1] & borad[1][1] == borad[2][2] && borad[2][2] != ' ')
		return borad[0][0];
	if (borad[0][2] == borad[1][1] & borad[1][1] == borad[2][0] && borad[2][0] != ' ')
		return borad[0][2];
	if (1 == isfull(borad, ROW, LO))
	{
		return 'p';
	}
	return 'j';
}
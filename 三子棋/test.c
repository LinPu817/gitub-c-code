#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "game.h"
void meum(){
	printf("*****************************************\n");
	printf("**********1.play  2.退出游戏*************\n");
	printf("*****************************************\n");
}
void game(){
	char ret = 0;
	char borad[ROW][LO] = { 0 };
	Initborad(borad, ROW, LO);
	Displyaborad(borad, ROW, LO);
	while (1)
	{
		player(borad, ROW, LO);
		Displyaborad(borad, ROW, LO);
		ret = win(borad,ROW,LO);
		if (ret != 'j')
		{
			break;
		}
		computer(borad, ROW, LO);
		Displyaborad(borad, ROW, LO);
		ret = win(borad, ROW, LO);
		if (ret != 'j')
		{
			break;
		}


	}
	if (ret = '*')
	{
		printf("玩家赢\n");
	}
	else if (ret = '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void palay()
{
	int input;
	srand((unsigned int) time(NULL));
	do
	{

		meum();
		printf("请输入0或者1:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1: 
			printf("开始游戏->\n");
			game();
			break;
		case 0:
			printf("推出游戏->");
			break;
		default:
			printf("输入错误");
			break;
		}

	} while (input);
}

int main()
{
	palay();
	return 0;
}
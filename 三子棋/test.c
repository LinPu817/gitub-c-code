#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "game.h"
void meum(){
	printf("*****************************************\n");
	printf("**********1.play  2.�˳���Ϸ*************\n");
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
		printf("���Ӯ\n");
	}
	else if (ret = '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
void palay()
{
	int input;
	srand((unsigned int) time(NULL));
	do
	{

		meum();
		printf("������0����1:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1: 
			printf("��ʼ��Ϸ->\n");
			game();
			break;
		case 0:
			printf("�Ƴ���Ϸ->");
			break;
		default:
			printf("�������");
			break;
		}

	} while (input);
}

int main()
{
	palay();
	return 0;
}
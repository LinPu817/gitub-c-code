#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[] = { 0 };
	system("shutdown -s -t 100");
	again:
	printf("������������������Խ���100���ػ�");
	scanf("%s",input);
	if (strcmp("input", "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;

}
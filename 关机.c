#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[] = { 0 };
	system("shutdown -s -t 100");
	again:
	printf("请输入我是猪，否则电脑将在100秒后关机");
	scanf("%s",input);
	if (strcmp("input", "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;

}
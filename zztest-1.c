#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	const char* p = "abcdef";
	const char* p1 = "abcdef";
	char* p3 = arr1;
	char* p4 = arr2;
	if (p3 == p4){
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	if (arr1 == arr2){
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	if (p == p1){
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	return 0;
}
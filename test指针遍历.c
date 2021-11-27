#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	int arr[10] = { 0 };
	int *p = &arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + 1) = p;

		printf("%p ", p[i]);
	}
	return 0;
}
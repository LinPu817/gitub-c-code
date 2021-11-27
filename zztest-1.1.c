#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	int arr[] = { 1, 2, 3, 4, 5 };
	int arr1[] = { 2, 3, 4, 5, 6 };
	int arr2[] = { 3, 4, 5, 6, 7 };
	int*parr[] = { arr, arr1, arr2 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d", *(parr[i] + j));
		}
		printf("\n");
	}
	return 0;
}
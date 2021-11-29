#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Max(int a, int b, int c)
{
	if (a > b&&a>c)
	{
		return a;
	}
	else if (b > a&&b > c)
	{
		return b;
	}
	else
	{
		return c;
	}
}
void paixu(int arr[3],int x)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x - 1; i++)
	{
		for (int j = 0; j<x - i - 1; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	int max = 0;
	scanf("%d%d%d", &a, &b, &c);
	int arr[] = { a, b, c };
	max=Max(a, b, c);
	paixu(arr,3);
	printf("×î´óÖµ%d ", max);
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}
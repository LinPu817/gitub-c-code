#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdio.h>
void  print(int arr[3][5],int x,int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

}
void print2(int(*p)[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", *(*(*p + i) + j));
		}
		printf("\n");
	}
}
int main()
{
	//int* arr[10] = { 0 };//指针数组
	//char* arr1[5];
	//int* (*pa)[10] = &arr;//数组指针
	//char* (*pa1)[5] = &arr1;//&arr表示取数组，而不是取首元素地址
	/*int arr[3][5] = { { 1, 2, 3, 4, 5 },{2, 3, 4, 5, 6},{3, 4, 5, 6, 7} };
	print(arr,3,5);
	print2(arr, 3, 5);*/
	int arr3[] = { 1, 2, 3, 4, 5, 6, 7 };
	int i = 0;
	int* p = &arr3;
	for (i = 0; i < 7; i++)
	{
		printf("%d ", arr3[i]);
		printf("%d ", p[i]);
		printf("%d ", *(arr3+i));
		printf("%d ", *(p+i));
	}
	return 0;
}
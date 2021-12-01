#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define maxSize 5
typedef struct
{
	int *data;
	int length;
}Sqlist;
Sqlist initsqlist(){
	Sqlist L;
	L.data = (int*)malloc(maxSize*sizeof(int));
	L.length = 0;
	return L;
}
void display(Sqlist L){
	int i = 0;
	for (i = 0; i < L.length; i++)
	{
		printf("%d", L.data[i]);
	}
	printf("\n");

}
int main()
{
	Sqlist L = initsqlist ();
	int n;
	printf("请输入要输入元素的个数:");
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d ", &L.data[i]);
		L.length++;
	}
	display(L);
	return 0;
}
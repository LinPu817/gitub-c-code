#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int mp(int arr[],int sz){
	int i = 0;
	int j = 0;
	for (i = 0; i < sz-1; i++)
	{
		int flag = 1;
		for (j = 0; j < sz - i-1; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}

}
int main(){
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	mp(arr,sz);
	int i = 0;
	for (i = 0; i < sz; i++){
		printf("%d", arr[i]);
	}
	return 0;
}
#define  ROW 3
#define  LO 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

 void Initborad(char borad[ROW][LO],int row,int lo);
 void Displyaborad(char borad[ROW][LO], int row, int lo);
 void player(char borad[ROW][LO], int row, int  lo);
 void computer(char borad[ROW][LO],int row,int lo);
 char win(char borad[ROW][LO], int row,int lo);
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include "Header.h"


void show()
{
	gotoxy(0, 0); //回到原點
	int i, j;
	for (i = 1; i <= high; i++)//用迴圈跑遊戲畫面
	{
		for (j = 1; j <= width; j++)
		{
			switch (map[i][j])
			{
			case 0:
				printf(" ");
				break;
			case 1:
				printf("@");
				break;
			case 2:
				printf("*");
				break;
			case 3:
				printf("~");
				break;
			case 4:
				printf("|");
				break;
			}
		}
		printf("\n");
	}
	printf("你的分數是:%d\n\n", score);
	printf("操作說明:空格鍵向上移動\n");
}
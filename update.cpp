#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include "Header.h"
#define MAX 100

extern int high, width;//地圖高度與寬度 
extern int bird_x, bird_y;//小鳥的位置 
extern int through, wall;//通道的x座標和牆的起始座標y 
extern int map[MAX][MAX];//記錄頁面的顯示 
/*0代表空白，1代表小鳥的位置，2代表牆
3代表上下圍牆，4代表左右圍牆*/
extern bool book[MAX][MAX];//代表改點有圍牆
extern int score;//記錄得分 
extern bool result = 0;//遊戲結果1代表失敗，0代表勝利，不過永遠贏不了~~ #pragma once


void UPdatewithOutinput()//與輸入無關的更新 
{
	bird_x++;
	wall--;
	if (book[bird_x][bird_y] == 1 || bird_x > high)//當小鳥死亡時 
	{
		result = 1;
	}
	if (wall == bird_y - 1)//當小鳥走過牆時得一分 
		score++;
	if (wall < 1)
	{
		srand(time(NULL));
		through = rand() % high;
		while (through <= 3 || through >= high - 2)
		{
			through = rand() % high;
		} 
	}
	if (wall < 1)
	{
		wall = width / 4 * 3;
	}

	memset(book, 0, sizeof(book));
	Sleep(100);
}
void UPdatewithinput()
{
	char input;
	if (_kbhit())//判斷是否有鍵盤輸入 
	{
		input = _getch();
		if (input == ' ')
			bird_x -= 2;//小鳥向上蹦兩格 
	}
	if (result == 1)
	{
		system("cls");
		printf("你輸了");
		getchar();
		getchar();
		system("pause");
	}
}

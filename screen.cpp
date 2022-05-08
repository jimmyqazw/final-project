//#include<stdio.h>
//#include<string.h>
//#include<conio.h>
//#include<windows.h>
//#include<stdlib.h>
//#include<time.h>
#include "Header.h"
#define MAX 100



#include<stdio.h>
#include<string.h>
#include<windows.h>
void HideCursor()//隱藏游標 
{
	CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };//設定光標訊息變量  高度為1 可見度為0   
	//GetStdHandle(STD_OUTPUT_HANDLE)  獲取標準輸出 
	//SetConsoleCursorInfo 用來檢索有關指定控制台螢幕緩衝區的光標大小和可見性的信息

	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);//設置光標輸出和變量
	
}
void gotoxy(int x, int y)//清理一部分螢幕 
{
	// 接收x , y 為  0 , 0 
	COORD pos; 
	pos.X = x;//給x軸賦值
	pos.Y = y;//給y軸賦值
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);//設定指定控制台螢幕幕緩衝區中的光標位置
}
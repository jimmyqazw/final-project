#include "Header.h"
#define MAX 100

int high, width;//地圖高度與寬度 
int bird_x, bird_y;//小鳥的位置 
int through, wall;//通道的x座標和牆的起始座標y 
int map[MAX][MAX];//記錄頁面的顯示 
/*0代表空白，1代表小鳥的位置，2代表牆
3代表上下圍牆，4代表左右圍牆*/
bool book[MAX][MAX];//代表改點有圍牆
int score;//記錄得分 


void startup()
{
	score = 0;
	high = 20;
	width = 50;
	bird_x = high / 2;
	bird_y = width / 4;
	through = high / 2;
	wall = width / 4 * 3;
}
void startMap()
{
	int i, j;
	for (i = 1; i <= high - 1; i++)
	{
		map[i][1] = 4;
		for (j = 2; j <= width - 1; j++)
			map[i][j] = 0;
		map[i][width] = 4;
	}
	//下方圍牆的初始化 
	i = high;
	for (j = 1; j <= width; j++)
		map[i][j] = 3;
	//小鳥位置的初始化 
	map[bird_x][bird_y] = 1;

	//牆的初始化
	for (i = 1; i <= high - 1; i++)
	{
		map[i][wall] = 2;
		book[i][wall] = 1;
	}
	//通道的初始化
	for (i = through - 2; i <= through + 2; i++)//通道的大小可以自定義.
	{
		map[i][wall] = 0;
		book[i][wall] = 0;
	}
}
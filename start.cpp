#include "Header.h"
#define MAX 100

int high, width;//�a�ϰ��׻P�e�� 
int bird_x, bird_y;//�p������m 
int through, wall;//�q�D��x�y�ЩM�𪺰_�l�y��y 
int map[MAX][MAX];//�O����������� 
/*0�N��ťաA1�N��p������m�A2�N����
3�N��W�U����A4�N���k����*/
bool book[MAX][MAX];//�N����I������
int score;//�O���o�� 


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
	//�U����𪺪�l�� 
	i = high;
	for (j = 1; j <= width; j++)
		map[i][j] = 3;
	//�p����m����l�� 
	map[bird_x][bird_y] = 1;

	//�𪺪�l��
	for (i = 1; i <= high - 1; i++)
	{
		map[i][wall] = 2;
		book[i][wall] = 1;
	}
	//�q�D����l��
	for (i = through - 2; i <= through + 2; i++)//�q�D���j�p�i�H�۩w�q.
	{
		map[i][wall] = 0;
		book[i][wall] = 0;
	}
}
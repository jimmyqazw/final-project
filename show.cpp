#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include "Header.h"


void show()
{
	gotoxy(0, 0); //�^����I
	int i, j;
	for (i = 1; i <= high; i++)//�ΰj��]�C���e��
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
	printf("�A�����ƬO:%d\n\n", score);
	printf("�ާ@����:�Ů���V�W����\n");
}
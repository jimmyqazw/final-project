#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include "Header.h"
#define MAX 100

extern int high, width;//�a�ϰ��׻P�e�� 
extern int bird_x, bird_y;//�p������m 
extern int through, wall;//�q�D��x�y�ЩM�𪺰_�l�y��y 
extern int map[MAX][MAX];//�O����������� 
/*0�N��ťաA1�N��p������m�A2�N����
3�N��W�U����A4�N���k����*/
extern bool book[MAX][MAX];//�N����I������
extern int score;//�O���o�� 
extern bool result = 0;//�C�����G1�N���ѡA0�N��ӧQ�A���L�û�Ĺ���F~~ #pragma once


void UPdatewithOutinput()//�P��J�L������s 
{
	bird_x++;
	wall--;
	if (book[bird_x][bird_y] == 1 || bird_x > high)//��p�����`�� 
	{
		result = 1;
	}
	if (wall == bird_y - 1)//��p�����L��ɱo�@�� 
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
	if (_kbhit())//�P�_�O�_����L��J 
	{
		input = _getch();
		if (input == ' ')
			bird_x -= 2;//�p���V�W�ۨ�� 
	}
	if (result == 1)
	{
		system("cls");
		printf("�A��F");
		getchar();
		getchar();
		system("pause");
	}
}

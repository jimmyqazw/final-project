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
void HideCursor()//���ô�� 
{
	CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };//�]�w���аT���ܶq  ���׬�1 �i���׬�0   
	//GetStdHandle(STD_OUTPUT_HANDLE)  ����зǿ�X 
	//SetConsoleCursorInfo �Ψ��˯��������w����x�ù��w�İϪ����Фj�p�M�i���ʪ��H��

	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);//�]�m���п�X�M�ܶq
	
}
void gotoxy(int x, int y)//�M�z�@�����ù� 
{
	// ����x , y ��  0 , 0 
	COORD pos; 
	pos.X = x;//��x�b���
	pos.Y = y;//��y�b���
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);//�]�w���w����x�ù����w�İϤ������Ц�m
}
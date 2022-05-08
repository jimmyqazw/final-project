#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include "Header.h"
#define MAX 100

int main(void)
{
	startup();
	while (1)
	{
		HideCursor();
		startMap();
		show();
		UPdatewithOutinput();
		
		UPdatewithinput();
	}
	
}
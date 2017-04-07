#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#include<time.h>
#pragma warning(disable:4996)
//³²Àº µ·À» °è»êÇÏ´Â ÇÔ¼ö
int MinusMoney(int bet, short mo)//bet-°Ç µ· mo-°¡Áø µ·
{
	if (mo >= bet)
	{
		mo = mo-bet;
	}
	else
		mo = mo;

	return mo;
}
void gotoxy(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
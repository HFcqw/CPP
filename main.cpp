#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<graphics.h>
#include<conio.h>
using namespace std;

int main() {
	initgraph(1920, 1080,SHOWCONSOLE);
	setbkcolor(WHITE);
	cleardevice();
	IMAGE mage;
	loadimage(&mage, "D://ͼƬ//Camera Roll//550W.jpg");
	putimage(0, 0, &mage);
	/*
	settextcolor(BLACK);
	settextstyle(20, 0, "����");
	outtextxy(100, 100, "��ã�����");

	setlinecolor(BLACK);
	setfillcolor(BLUE);
	circle(50, 50, 50);
	fillcircle(50, 150, 50);
	*/
	getchar();
	closegraph();
	return 0;
}
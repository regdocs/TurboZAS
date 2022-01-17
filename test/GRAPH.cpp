#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>

//void titlebox() { cout<<"************************ZOMBIE APOCALYPSE SURVIVOR ver1.1***********************"<<endl<<endl; }

void bitmaplogo(int x, int y)
{
	int gd = DETECT, gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	int points[]=
	{
		x-75,y+125,x-100,y-75,x-75,y-67,x-72,y-84,x-69,y-94,x-50,y-119,
		x-8,y-140,x+40,y-138,x+64,y-127,x+78,y-115,x+90,y-99,x+100,y-75,
		x+125,y-60,x+100,y+125,x+35,y+125,x+35,y+100,x+30,y+5,x+25,y+18,
		x+32,y-75,x+19,y-87,x+24,y-76,x+18,y-48,x+18,y-75,x-8,y-89,x+3,
		y-75,x+3,y-46,x-13,y-80,x-45,y-78,x-23,y-75,x-10,y-48,x-35,y-65,
		x-52,y-50,x-33,y-52,x-15,y-30,x-15,y-10,x-32,y-5,x-50,y-18,x-36,
		y+9,x-13,y+13,x-13,y+27,x-16,y+23,x-18,y+125,x-75,y+125
	};
	setcolor(8);
	setfillstyle(SOLID_FILL,DARKGRAY);
	bar(x-115,y-155,x+138,y+190);
	setcolor(15);
	//cout<<"check";
	setfillstyle(SOLID_FILL,15);
	fillpoly(43,points);
	setcolor(8);
	setfillstyle(SOLID_FILL,8);
	fillellipse(x-40,y+125,25,25);
	fillellipse(x-10,y+120,25,25);
	fillellipse(x+25,y+135,25,25);
	fillellipse(x+55,y+125,25,25);
	setcolor(15);
	settextstyle(0,HORIZ_DIR,4);
	outtextxy(x-82,y+145,"ZOMBIE");
	settextstyle(0,HORIZ_DIR,1);
	outtextxy(x-78,y+178,"APOCALYPSE SURVIVOR 1.1");
	line(x-115,y+135,x+138,y+135);
}

void main()
{
clrscr();
//int gd = DETECT, gm;
//initgraph(&gd, &gm, "c:\\turboc3\\bgi");
bitmaplogo(430,220);
//titlebox();
//setbkcolor(RED);
//titlebox();
//bitmaplogo(430,220);
getch();
//smenu();
}
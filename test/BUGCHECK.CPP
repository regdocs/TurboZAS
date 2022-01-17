#include<conio.h>
#include<iostream.h>
#include<graphics.h>

void dog()
{
cout<<"sdfsdf";
getch();
closegraph();
setbkcolor(BLUE);
getch();
}

void main()
{
int gd = DETECT, gm, i;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setbkcolor(GREEN);
cin>>i;
dog();
}

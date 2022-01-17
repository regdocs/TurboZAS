#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
int count=400;
clrscr();
while(count--)
{
sound(count);
delay(20);
nosound();
textattr(random(16)+'a'+BLINK);
cprintf("*");
}
}
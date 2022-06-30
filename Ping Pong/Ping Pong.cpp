#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<graphics.h>
int a[3],b[3];
int w=0;
int v=0;
int dirx=1;
int diry=1;
void disp()
{
setbkcolor(BLUE);
setlinestyle(1,0,2);
setcolor(WHITE);
line(10,10,630,10);
line(10,10,10,430);
line(10,430,630,430);
line(630,10,630,430);
setlinestyle(0,0,2);
line(20,a[1],20,a[2]);
line(620,b[1],620,b[2]);
setcolor(LIGHTGREEN);
circle(100+w,100+0.5*v,10);
setfillstyle(SOLID_FILL,GREEN);
floodfill(100+w,100+0.5*v,LIGHTGREEN);
}
int check()
{
if(100+w == 20 || 100+w == 620 )
{return 0;}
else
return 1;
}
void main()
{
clrscr();
char p='p';
char c;
int gd=DETECT,gm;
cout<<"Controls are w,s for left pad and i,k for right pad and its a single player game .";
getch();
clrscr();
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
cleardevice();

a[1]=10;a[2]=70;b[1]=10;b[2]=70;
cout<<"\n\n\n\n\n\n\n\n\n\n\n                              Press any key to start";
getch();
while(p!='u')
{
if(100+w == 610 && b[1]<=100+0.5*v && b[2]>=100+0.5*v)
{dirx=-1;}
else if(100+w == 30 && a[1]<=100+0.5*v && a[2]>=100+0.5*v)
{dirx= 1;}

if(100+0.5*v == 420)
{diry=1;}
else if(100+0.5*v == 20)
{diry=-1;}

if(diry==1)
{v--;}
else if(diry==-1)
{v++;}

if(dirx==1)
{w++;}
else if(dirx==-1)
{w--;}
cleardevice();
disp();
delay(6);
if(kbhit())
{p=getch();}
switch(p)
{
case 's':
	  a[2]=a[2]+10;a[1]=a[1]+10;
	  disp();
	  p='p';
	  break;
case 'w':
	  a[1]=a[1]-10;a[2]=a[2]-10;
	  disp();
	  p='p';
	  break;
case 'i':
	  b[1]=b[1]-10;b[2]=b[2]-10;
	  disp();
	  p='p';
	  break;
case 'k':
	  b[1]=b[1]+10;b[2]=b[2]+10;
	  disp();
	  p='p';
	  break;

}
if(check()==0)
{goto s;}
}

s:settextstyle(GOTHIC_FONT,LEFT_TEXT,10);
outtextxy(40,80,"OVER : (");
getch();
closegraph();
}


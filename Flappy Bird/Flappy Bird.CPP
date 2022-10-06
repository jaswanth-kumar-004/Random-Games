#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>
#include<time.h>
int x=100,y=150,a=-10;                           //BIRD KINEMATIC
int midx[3],midy[3];
float w=3.14/3;
int semiwidth=20 , semiheight=80;
int check()
{
if(y+14>405)
return 0;
if(midx[1]-semiwidth-x < 14 && x-(semiwidth+midx[1]) <14 && midy[1]+semiheight-y<14)
return 0;
if(x-(midx[1]+semiwidth)< 14 && midx[1]-semiwidth-x < 14 && y-(midy[1]-semiheight)<14)
return 0;
if(y-14<0)
return 0;
return 1;
}
void bird()                                      //BIRD
{
circle(x+4,y-2,1);
circle(x+4,y-4,3);
circle(x,y,14);
//rectangle(x-14,y-14,x+14,y+14);
line(x+(14*cos(w)),y-(14*sin(w)),x+(23*cos(w)),y-(23*sin(w)));
line(x+(14*cos(w+0.3925)),y-(14*sin(w+0.3925)),x+(23*cos(w)),y-(23*sin(w)));
line(x+(14*cos(w-0.3925)),y-(14*sin(w-0.3925)),x+(23*cos(w)),y-(23*sin(w)));
w=w-0.06;
}

void obstacles()
{

rectangle(midx[1]-semiwidth,midy[1]-semiheight,midx[1]+semiwidth,0);
rectangle(midx[1]-semiwidth,midy[1]+semiheight,midx[1]+semiwidth,405);
rectangle(midx[2]-semiwidth,midy[2]-semiheight,midx[2]+semiwidth,0);
rectangle(midx[2]-semiwidth,midy[2]+semiheight,midx[2]+semiwidth,405);

}

void main()                                      //MAIN
{
int q=1;
int points=0;
int temp;
int count=0;
char p;
char r[3];
r[0]=48;
r[1]=48;
r[2]='\0';
midx[1]=800;
midx[2]=1200;
randomize();
midy[1]=(rand()%(405-2*semiheight))+semiheight;
midy[2]=(rand()%(405-2*semiheight))+semiheight;
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
cleardevice();
while(p!='u')                                    //END OF GAME
{
						 //KEYBOARD HIT CONDITION
if(kbhit())
{
w=3.14/3;
p=getch();
switch(p)

{ default :count++;a=-10; }

}

if(midx[1]<-semiwidth)
{
temp=midx[1];
midx[1]=midx[2];
midy[1]=midy[2];
midy[2]=(rand()%(405-(2*semiheight))+semiwidth);
midx[2]=temp+800;
q=1;
}

obstacles();

line(0,405,640,405);                             //GROUND
bird();
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(30,440,r);
delay(20);
cleardevice();
y=y+a;
a++;
midx[1]=midx[1]-2;
midx[2]=midx[2]-2;
if(check()==0)
goto l;
if(q==1 && x-(midx[1]+semiwidth)>14)
{
points++;
r[0]=(int)(points/10)+48;
r[1]=(points%10)+48;
q=0;}
}
l:outtextxy(100,200,"YOUR SCORE IS : ");
outtextxy(380,200,r);
getch();
closegraph();
getch();
}
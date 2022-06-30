#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>
char p='p';
int l[3];
int m=0,d;
int pos[3];
void lanegen()
{
randomize();

for(int i=1;i<=2;i++)
{
 l[i]=(rand()%3);
 pos[i]=(rand()%30)-30;
}
if(l[1]==l[2])
{
if(l[1]==0)
{l[2]=l[1]+2;}
else
{l[2]=l[1]-1;}
}
}
void initi(char a[100][100],int x,int y)
{
int i,j;
int p1,p2;
for(i=0;i<100;i++)
{
for(j=0;j<100;j++)
 {a[i][j]=0;}
}
a[x][y]=219;
for(i=1;i<=3;i++)
{a[x][y+i]=a[x][y-i]=219;}
for(i=0;i<=4;i++)
{
a[x+1][y+i]=a[x+1][y-i]=219;
a[x+2][y+i]=a[x+2][y-i]=219;
a[x+3][y+i]=a[x+3][y-i]=219;
}

a[x+4][y]=a[x+4][y+3]=a[x+4][y-3]=a[x+4][y-3]=239;
for(i=0;i<100;i++)
{
a[i][0]=a[i][28]=179;
}
for(int k=1;k<=2;k++)
{

for(i=0;i<=3;i++)
{a[pos[k]][5+9*l[k]+i]=a[pos[k]][5+9*l[k]-i]=31;}

for(i=0;i<=4;i++)
{
a[pos[k]-1][5+9*l[k]+i]=a[pos[k]-1][5+9*l[k]-i]=178;
a[pos[k]-2][5+9*l[k]+i]=a[pos[k]-2][5+9*l[k]-i]=178;
a[pos[k]-3][5+9*l[k]+i]=a[pos[k]-3][5+9*l[k]-i]=178;
}
}
}
void disp(char a[100][100])
{
clrscr();
for(int i=0;i<24;i++)
{
cout<<"              ";
for(int j=0;j<=28;j++)
{
cout<<a[i][j];
}
cout<<"\n";
}
}

void main()
{
clrscr();
char c;
char a[100][100];
int x,y;
x=19;y=5;
int points=0;
cout<<"Controls are asdw .";
getch();
clrscr();
lanegen();
initi(a,x,y);
disp(a);
while(p!='u')
{
if(kbhit())
{
p=getch();

switch(p)
{
case 'a':
	  if(y==5)
	  {y=y+9;}
	  y=y-9;
	  initi(a,x,y);
	  disp(a);
	  break;
case 'd':
	  if(y==23)
	  {y=y-9;}
	  y=y+9;
	  initi(a,x,y);
	  disp(a);
	  break;
}
}
if(((x==pos[1]+1) && (9*l[1]+5==y)) || ((x==pos[2]+1) && (9*l[2]+5==y)) || ((x==pos[1]+0) && (9*l[1]+5==y)) || ((x==pos[2]+0) && (9*l[2]+5==y)) || ((x==pos[1]-1) && (9*l[1]+5==y)) || ((x==pos[2]-1) && (9*l[2]+5==y)) || ((x==pos[1]-2) && (9*l[1]+5==y)) || ((x==pos[2]-2) && (9*l[2]+5==y)) || ((x==pos[1]-3) && (9*l[1]+5==y)) || ((x==pos[2]-3) && (9*l[2]+5==y)) || ((x==pos[1]-4) && (9*l[1]+5==y)) || ((x==pos[2]-4) && (9*l[2]+5==y)))
{cout<<"OUT";goto s;}
if(pos[1]>=20 && pos[2] >=24)
{lanegen();points=points+2;}
pos[1]++;pos[2]++;
initi(a,x,y);
disp(a);
delay(50);
m++;
}
s:cout<<"POINTS : "<<points;
getch();
}


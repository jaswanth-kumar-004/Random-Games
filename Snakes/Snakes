#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<time.h>
#include<stdlib.h>
int g=0;
int n1=15;
int n2=15;
int e=1;
int points=0;
int size=5;
int b[3][100];
char dir='p';
char a[100][100];
void body(int x,int y)
{

if(dir=='p')
{
b[1][1]=10;b[2][1]=9;
b[1][2]=10;b[2][2]=8;
b[1][3]=10;b[2][3]=7;
b[1][4]=10;b[2][4]=6;
b[1][5]=10;b[2][5]=5;

}


else
{

for(int i=size;i>=2;i--)
{b[1][i]=b[1][i-1];b[2][i]=b[2][i-1];}


switch(dir)
{
case 'd':b[1][1]=x;b[2][1]=y-1;break;
case 'a':b[1][1]=x;b[2][1]=y+1;break;
case 'w':b[1][1]=x+1;b[2][1]=y;break;
case 's':b[1][1]=x-1;b[2][1]=y;break;
}

}
for(int i=1;i<=size;i++)
{
a[b[1][i]][b[2][i]]=111;
}

}
void foodgen()
{
if(g!=0)
{
unsigned int sval;
time_t t;
sval=(unsigned)time(&t);
srand(sval);
n1=(rand()%17)+1;
n2=(rand()%69)+1;
a[n1][n2]=254;
}
g=0;
}
void check1(int x,int y)
{
if(a[x][y]=='o' || x==0 || y==0 || x==19 ||y==71)
{
clrscr();
cout<<"GAME OVER";
e=0;
}
if(x==n1 && y==n2)
{g=1;points++;size++;}
}
void initi(int x,int y)
{
for(int i=0;i<100;i++)
{
for(int j=0;j<100;j++)
{a[i][j]=0;}

}

for(i=1;i<71;i++)
{a[0][i]=a[19][i]=a[i][0]=a[i][71]=219;}
a[0][0]=a[0][71]=a[19][71]=a[19][0]=219;
a[n1][n2]=254;
a[x][y]=1;
}
void disp()
{
clrscr();
cout<<"                                  SNAKE GAME\n" ;
cout<<"    ";
for(int i=0;i<20;i++)
{
for(int j=0;j<72;j++)
{
cout<<a[i][j];
}
cout<<"\n    ";
}
}

void main()
{
clrscr();
cout<<"Controls are asdw . ";
getch();
clrscr();
char c;
char a[100][100];
int x,y;
x=10;y=10;
initi(x,y);

disp();
while(dir!='u')
{
check1(x,y);
if(e==0)
{goto t;}
foodgen();
if(kbhit())
{
dir=getch();
}
switch(dir)
{
case 'p':initi(x,y);
	 body(x,y);
	 disp();
	 cout<<dir;
	 delay(900);
	 break;
case 'a':
	  y--;
	  initi(x,y);
	  body(x,y);
	  disp();
	  cout<<dir;
	  delay(150-3*points);
	  break;
case 's':
	  x++;
	  initi(x,y);
	  body(x,y);
	  disp();
	  cout<<dir;
	  delay(150-3*points);
	  break;
case 'd':
	  y++;
	  initi(x,y);
	  body(x,y);
	  disp();
	  cout<<dir;
	  delay(150-3*points);
	  break;
case 'w':
	  x--;
	  initi(x,y);
	  body(x,y);
	  disp();
	  cout<<dir;
	  delay(150-3*points);
	  break;
}
}

t:disp();
cout<<"\nSUCCESS\n";
cout<<points;
getch();
getch();

}


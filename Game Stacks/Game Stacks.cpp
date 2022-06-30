#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<fstream.h>
#include<string.h>
#include<dos.h>
#include<time.h>
void initarr(char a[100][100])
{
int i,j;
for(i=1;i<=100;i++)
{
	for(j=1;j<=100;j++)
	{ a[i][j]=0;
	}
}
}
void opdisp(char a[100][100])
{
for(int i=1;i<=22;i++)
{	for(int j=1;j<=75;j++)
	{ cout<<a[i][j];
	}
cout<<"\n";
}
}
void funcg(char a[100][100],int q,int p)
{
a[q+1][p+1]=a[q+2][p+1]=a[q+3][p+1]=a[q+4][p+1]=a[q+5][p+1]=a[q+1][p+2]=a[q+1][p+3]=a[q+1][p+4]=a[q+1][p+5]=a[q+5][p+2]=a[q+5][p+3]=a[q+5][p+4]=a[q+5][p+5]=a[q+4][p+5]=a[q+3][p+5]=a[q+3][p+4]=219;
}
void funca(char a[100][100],int q,int p)
{
a[q+1][p+1]=a[q+1][p+2]=a[q+1][p+3]=a[q+1][p+4]=a[q+1][p+5]=a[q+2][p+1]=a[q+3][p+1]=a[q+2][p+5]=a[q+3][p+2]=a[q+3][p+3]=a[q+3][p+4]=a[q+3][p+5]=a[q+4][p+1]=a[q+4][p+5]=a[q+5][p+1]=a[q+5][p+5]=219;
}
void funcm(char a[100][100],int q,int p)
{
a[q+1][p+1]=a[q+1][p+2]=a[q+1][p+3]=a[q+1][p+4]=a[q+1][p+5]=a[q+2][p+1]=a[q+2][p+3]=a[q+2][p+5]=a[q+3][p+1]=a[q+3][p+3]=a[q+3][p+5]=a[q+4][p+1]=a[q+4][p+5]=a[q+4][p+3]=a[q+5][p+1]=a[q+5][p+3]=a[q+5][p+5]=219;
}
void funce(char a[100][100],int q,int p)
{
a[q+1][p+1]=a[q+1][p+2]=a[q+1][p+3]=a[q+1][p+4]=a[q+1][p+5]=a[q+2][p+1]=a[q+3][p+1]=a[q+3][p+2]=a[q+3][p+4]=a[q+3][p+3]=a[q+3][p+5]=a[q+4][p+1]=a[q+5][p+1]=a[q+5][p+2]=a[q+5][p+3]=a[q+5][p+4]=a[q+5][p+5]=219;
}
void funcs(char a[100][100],int q,int p)
{
a[q+1][p+1]=a[q+1][p+2]=a[q+1][p+3]=a[q+1][p+4]=a[q+1][p+5]=a[q+2][p+1]=a[q+3][p+1]=a[q+3][p+2]=a[q+3][p+3]=a[q+3][p+4]=a[q+3][p+5]=a[q+4][p+5]=a[q+5][p+1]=a[q+5][p+2]=a[q+5][p+3]=a[q+5][p+4]=a[q+5][p+5]=219;
}
void funct(char a[100][100],int q,int p)
{
a[q+1][p+1]=a[q+1][p+2]=a[q+1][p+3]=a[q+1][p+4]=a[q+1][p+5]=a[q+2][p+3]=a[q+3][p+3]=a[q+4][p+3]=a[q+5][p+3]=219;
}
void funcc(char a[100][100],int q,int p)
{
a[q+1][p+1]=a[q+1][p+2]=a[q+1][p+3]=a[q+1][p+4]=a[q+1][p+5]=a[q+2][p+1]=a[q+3][p+1]=a[q+4][p+1]=a[q+5][p+1]=a[q+5][p+2]=a[q+5][p+3]=a[q+5][p+4]=a[q+5][p+5]=219;
}
void funck(char a[100][100],int q,int p)
{
a[q+1][p+1]=a[q+2][p+1]=a[q+3][p+1]=a[q+4][p+1]=a[q+5][p+1]=a[q+1][p+4]=a[q+2][p+3]=a[q+3][p+2]=a[q+4][p+3]=a[q+5][p+4]=a[1+q][5+p]=a[5+q][5+p]=219;
}
int result=-1;
void push(int a[100],int b[100],int r,int c,int &cr,int &cc)
{
cr++;
a[cr]=r;
cc++;
b[cc]=c;
}
void pop(int a[100],int b[100],int &p,int &q,int &cr,int &cc)
{
cr--;
p=a[cr];
cc--;
q=b[cc];
}
void disp(char c[25][25])
{
clrscr();
int i,j;
cout<<"                                      MAZE\n";
for(i=1;i<=19;i++)
{
cout<<"                              ";
for(j=1;j<=19;j++)
{
cout<<c[i][j];
}
cout<<"\n";
}
}
void main1()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\nYou have selected maze. asdw are the controls. Enter 0 if you want to give up."; getch();
char c[25][25],v;
int i,j,k,r,p,q,a[100],b[100],cr,cc,o;
cr=0;cc=0;o=0;
a[0]=2;b[0]=2;
c[1][1]=218;c[19][19]=217;c[1][19]=191;c[19][1]=192;
for(i=2;i<=18;i=i+2)
{
for(j=1;j<=19;j=j+2)
{
c[i][j]=179;c[j][i]=196;
}
}
for(i=3;i<=17;i=i+2)
{
c[i][1]=195;
c[1][i]=194;
c[19][i]=193;
c[i][19]=180;
}
for(i=3;i<=17;i=i+2)
{
for(j=3;j<=17;j=j+2)
{
c[i][j]=197;
}
}
for(i=2;i<=18;i=i+2)
{
for(j=2;j<=18;j=j+2)
{
c[i][j]=0;
}
}
p=2;q=2;
for(i=0;i<=20;i=i+2)
{
c[0][i]=5;
c[20][i]=5;
c[i][0]=5;
c[i][20]=5;
}
c[2][2]=5;
srand(time(0));
for(k=1;k<=81;k++)
{
o=0;
u:if(c[p+2][q]==5 && c[p][q+2]==5 && c[p-2][q]==5 && c[p][q-2]==5)
{pop(a,b,p,q,cr,cc);goto u;}
t:r=rand()%4+1;
if(r==1 && c[p-2][q]==0)
{c[p-2][q]=5;c[p-1][q]=0;push(a,b,p-2,q,cr,cc);p=p-2;}
else if(r==2 && c[p][q+2]==0)
{c[p][q+2]=5;c[p][q+1]=0;push(a,b,p,q+2,cr,cc);q=q+2;}
else if(r==3 && c[p+2][q]==0)
{c[p+2][q]=5;c[p+1][q]=0;push(a,b,p+2,q,cr,cc);p=p+2;}
else if(r==4 && c[p][q-2]==0)
{c[p][q-2]=5;c[p][q-1]=0;push(a,b,p,q-2,cr,cc);q=q-2;}
else
{goto t;}
for(i=2;i<=18;i=i+2)
{
for(j=2;j<=18;j=j+2)
{
if(c[i][j]==5)
{o++;}
}
}
if(o==81)
{goto y;}
}
y:for(i=2;i<=18;i=i+2)
{
for(j=2;j<=18;j=j+2)
{
c[i][j]=0;
}
}
c[19][18]=0;
c[2][2]=1;
int g,h;
g=2;h=2;
for(int w=0;w<100;w++)
{
s:disp(c);
cout<<"Player where do you want to move?";
cin>>v;
switch(v)
{
case '0':
goto x;
case 'w':
{
if(g==2 || c[g-1][h]!=0)
{goto s;}
c[g-2][h]=1;
c[g][h]=0;
g=g-2;
}
break;
case 'd':
{
if(h==18 || c[g][h+1]!=0)
{goto s;}
c[g][h+2]=1;
c[g][h]=0;
h=h+2;
}
break;
case 's':
{
if(g==18 || c[g+1][h]!=0)
{goto s;}
c[g+2][h]=1;
c[g][h]=0;
g=g+2;
}
break;
case 'a':
{
if(h==2 || c[g][h-1]!=0)
{goto s;}
c[g][h-2]=1;
c[g][h]=0;
h=h-2;
}
break;
DEFAULT:{goto s;}
}
if(c[18][18]==1)
{
disp(c);
cout<<"                               ESCAPED!!!";result=1;goto md;}
}
x:result=0;
md:getch();
}

void disp(char a[20][20])
{
clrscr();
char c[11];int i,j,k;
cout<<"\n                                  CONNECT 4\n\n";
c[0]=179;c[1]=180;c[2]=192;c[3]=193;c[4]=194;c[5]=195;c[6]=196;c[7]=197;c[8]=217;c[9]=218;c[10]=191;
  cout<<"                              "<<c[9];
for(i=0;i<7;i++)
{ cout<<c[6]<<c[4];}
  cout<<c[6]<<c[10]<<"\n                              ";
for(i=0;i<7;i++)
{
 for(k=0;k<8;k++)
 {cout<<c[0]<<a[i+4][k+4];}
  cout<<c[0];
  cout<<"\n                              "<<c[5];
 for(j=0;j<7;j++)
 {cout<<c[6]<<c[7];}
  cout<<c[6]<<c[1]<<"\n                              ";
}
for(i=0;i<9;i++)
{cout<<c[0]<<" ";}
cout<<"\n                              "<<c[2];
for(i=0;i<7;i++)
{cout<<c[6]<<c[3];}
cout<<c[6]<<c[8]<<"\n";
}
int check(char a[20][20])
{
int i,j;
for(i=4;i<=11;i++)
{
for(j=4;j<=11;j++)
{
if((a[i][j]==a[i][j+1] && a[i][j]==a[i][j+2] && a[i][j]==a[i][j+3] && a[i][j]==1) || (a[i][j]==a[i+1][j] && a[i][j]==a[i+2][j] && a[i][j]==a[i+3][j] && a[i][j]==1) || (a[i][j]==a[i+1][j+1] && a[i][j]==a[i+2][j+2] && a[i][j]==a[i+3][j+3] && a[i][j]==1) || (a[i][j]==a[i-1][j+1] && a[i][j]==a[i-2][j+2] && a[i][j]==a[i-3][j+3] && a[i][j]==1))
return 1;
if((a[i][j]==a[i][j+1] && a[i][j]==a[i][j+2] && a[i][j]==a[i][j+3] && a[i][j]==2) || (a[i][j]==a[i+1][j] && a[i][j]==a[i+2][j] && a[i][j]==a[i+3][j] && a[i][j]==2) || (a[i][j]==a[i+1][j+1] && a[i][j]==a[i+2][j+2] && a[i][j]==a[i+3][j+3] && a[i][j]==2) || (a[i][j]==a[i-1][j+1] && a[i][j]==a[i-2][j+2] && a[i][j]==a[i-3][j+3] && a[i][j]==2))
return 2;
}
}
return 0;
}
void main2()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\nYou have selected connect4. Here from the top the symbols will be placed on the next free space on the desired column. The first player to get 4 of their symbols in a straight line (horizonta or vertical or diagonal) wins. If any player wants to give up he can press 0."; getch();;
char a[20][20];
int t[20],i,j,ch;
for(i=0;i<20;i++)
{
 for(j=0;j<20;j++)
 {a[i][j]=0;}
 t[i]=4;
}
for(int e=1;e<=64;e++)
{
 if(e%2==1)
 {
  disp(a);
  p:cout<<"Player 1 which column do you want to keep your character\nCOLUMN : ";
  cin>>ch;
  if(ch==0)
  {goto z;}
  if(t[ch+3]==11)
  {cout<<"\n                             <<Space is filled!!!>>\n";goto p;}
  a[t[ch+3]][ch+3]=1;
  t[ch+3]++;
  if(check(a)==1)
  {goto y;}
 }
 else if(e%2==0)
 {
  disp(a);
  h:cout<<"Player 2 which column do you want to keep your character\nCOLUMN : ";
  cin>>ch;
  if(ch==0)
  {goto y;}
  if(t[ch+3]==11)
  {cout<<"\n                             <<Space is filled!!!>>\n";goto h;}
  a[t[ch+3]][ch+3]=2;
  t[ch+3]++;
  if(check(a)==2)
  {goto z;}
 }
}
  disp(a);cout<<"\n\n                                DRAW";result=0;goto l;
y:disp(a);cout<<"\n\n                               PLAYER 1 WINS!!!";result=1;goto l;
z:disp(a);cout<<"\n\n                               PLAYER 2 WINS!!!";result=2;goto l;
l:getch();
}

int  checkrules(char a[11][11])
{
if(a[1][2]==6 || a[2][1]==6 || a[2][2]==6 || a[2][3]==6 || a[3][1]==6 || a[3][2]==6 || a[3][3]==6 || a[4][1]==6 || a[4][2]==6 || a[4][3]==6 || a[5][2]==6)
{return 1;}
return 0;
}
int check(char a[11][11])
{
if(a[1][2]==2)
{return 2;}
return 1;
}
int  checkrules1(char a[11][11])
{
if(a[1][2]==2 || a[2][1]==2 || a[2][2]==2 || a[2][3]==2 || a[3][1]==2 || a[3][2]==2 || a[3][3]==2 || a[4][1]==2 || a[4][2]==2 || a[4][3]==2 || a[5][2]==2)
{return 1;}
return 0;
}
void swap(char &a,char &b)
{
b=a;
a=0;
}
void disp(char a[11][11])
{
char c[12];
clrscr();
c[0]=179;c[1]=180;c[2]=192;c[3]=193;c[4]=194;c[5]=195;c[6]=196;c[7]=197;c[8]=217;c[9]=218;c[10]=191;
cout<<"                                 1 2 3\n";
cout<<"                                  "<<c[9]<<c[6]<<c[10]<<"\n";
cout<<"                               1  "<<c[0]<<a[1][2]<<c[0]<<"\n";
cout<<"                                "<<c[9]<<c[6]<<c[7]<<c[6]<<c[7]<<c[6]<<c[10]<<"\n";
cout<<"                               2"<<c[0]<<a[2][1]<<c[0]<<a[2][2]<<c[0]<<a[2][3]<<c[0]<<"\n";
cout<<"                                "<<c[5]<<c[6]<<c[7]<<c[6]<<c[7]<<c[6]<<c[1]<<"\n";
cout<<"                               3"<<c[0]<<a[3][1]<<c[0]<<a[3][2]<<c[0]<<a[3][3]<<c[0]<<"\n";
cout<<"                                "<<c[5]<<c[6]<<c[7]<<c[6]<<c[7]<<c[6]<<c[1]<<"\n";
cout<<"                               4"<<c[0]<<a[4][1]<<c[0]<<a[4][2]<<c[0]<<a[4][3]<<c[0]<<"\n";
cout<<"                                "<<c[2]<<c[6]<<c[7]<<c[6]<<c[7]<<c[6]<<c[8]<<"\n";
cout<<"                               5  "<<c[0]<<a[5][2]<<c[0]<<"\n";
cout<<"                                  "<<c[2]<<c[6]<<c[8]<<"\n";
}
void main3()
{
clrscr();
int num,r,c;
cout<<"\n\n\n\n\n\n\n\n\n\n\nYou have selected harevshound.\nHere are the game conrols: 1-up,2-right,3-down,4-left,5-leftup,6-rightup,7-rightdown,8-leftdown\n";
cout<<"The game rules are: The hare can move in any direction one step if it is not in 2,2 or 3,1 or 3,3 or 4,2. If it is in those square then it can't move diagonally. Hound can't move up or diagonally up. Hare can't get out of the game but hound can and once it does it can't come back into the game area. If hare reaches the top square then it wins, if it is cornered in a way it can't make he next move then hounds win. If player 1 (hare) wants to give up then enter 0. If the game does not end in 25 moves then it is a draw game";
char a[11][11];
for(int i=0;i<=10;i++)
{
for(int j=0;j<=10;j++)
{
a[i][j]=0;
}
}
a[5][2]=2;a[1][2]=6;a[2][1]=6;a[2][3]=6;
disp(a);
int p=5,q=2;
for(int e=1;e<=50;e++)
{
if(e%2==1)
{
o:;cout<<"Player 1 where do you want to run?\n";
cin>>num;
if((p==2 && q==2 && (num==8 || num==2)) || (p==4 && q==2 && (num==6 || num==5)))
{cout<<"<<Not possible!!!>>\n";goto o;}
switch(num)
{
case 0:goto l;
case 1:if(a[p-1][q]==6)
       {cout<<"<<Wanna get killed by a hound if you can run?>>\n";goto o;}
       swap(a[p][q],a[p-1][q]);
       if(checkrules1(a)==0)
       {cout<<"<<Not possible!!!>>\n";swap(a[p-1][q],a[p][q]);goto o;}
       p=p-1;
       break;
case 2:if(a[p][q+1]==6)
       {cout<<"<<Wanna get killed by a hound if you can run?>>\n";goto o;}
       swap(a[p][q],a[p][q+1]);
       if(checkrules1(a)==0)
       {cout<<"<<Not possible!!!>>\n";swap(a[p][q+1],a[p][q]);goto o;}
       q=q+1;
       break;
case 3:if(a[p+1][q]==6)
       {cout<<"<<Wanna get killed by a hound if you can run?>>\n";goto o;}
       swap(a[p][q],a[p+1][q]);
       if(checkrules1(a)==0)
       {cout<<"<<Not possible!!!>>\n";swap(a[p+1][q],a[p][q]);goto o;}
       p=p+1;
       break;
case 4:if(a[p][q-1]==6)
       {cout<<"<<Wanna get killed by a hound if you can run?>>\n";goto o;}
       swap(a[p][q],a[p][q-1]);
       if(checkrules1(a)==0)
       {cout<<"<<Not possible!!!>>\n";swap(a[p][q-1],a[p][q]);goto o;}
       q=q-1;
       break;
case 5:if(a[p-1][q-1]==6)
       {cout<<"<<Wanna get killed by a hound if you can run?>>\n";goto o;}
       swap(a[p][q],a[p-1][q-1]);
       if(checkrules1(a)==0)
       {cout<<"<<Not possible!!!>>\n";swap(a[p-1][q-1],a[p][q]);goto o;}
       p=p-1;q=q-1;
       break;
case 6:if(a[p-1][q+1]==6)
       {cout<<"<<Wanna get killed by a hound if you can run?>>\n";goto o;}
       swap(a[p][q],a[p-1][q+1]);
       if(checkrules1(a)==0)
       {cout<<"<<Not possible!!!>>\n";swap(a[p-1][q+1],a[p][q]);goto o;}
       p=p-1;q=q+1;
       break;
case 7:if(a[p+1][q+1]==6)
       {cout<<"<<Wanna get killed by a hound if you can run?>>\n";goto o;}
       swap(a[p][q],a[p+1][q+1]);
       if(checkrules1(a)==0)
       {cout<<"<<Not possible!!!>>\n";swap(a[p+1][q+1],a[p][q]);goto o;}
       p=p+1;q=q+1;
       break;
case 8:if(a[p+1][q-1]==6)
       {cout<<"<<Wanna get killed by a hound if you can run?>>\n";goto o;}
       swap(a[p][q],a[p+1][q-1]);
       if(checkrules1(a)==0)
       {cout<<"<<Not possible!!!>>\n";swap(a[p+1][q-1],a[p][q]);goto o;}
       p=p+1;q=q-1;
       break;
default:cout<<"<<Wrong entry>>\n";goto o;
}
disp(a);
if(check(a)==2)
{goto m;}
}
if(e%2==0)
{
u:;cout<<"Player 2 hound at which position do you want to move?\n";
cout<<"ROW : ";
cin>>r;
cout<<"COLUMN : ";
cin>>c;
if(a[r][c]==0 || a[r][c]==2)
{cout<<"<<You cannot move air or hare in this game!!!>>\n";goto u;}
cout<<"Where do you want to move the hound?\n";
cin>>num;
if((r==2 && c==2 && (num==8 || num==7)) || (r==4 && c==2 && (num==6 || num==5)))
{cout<<"<<Not possible!!!>>\n";}
switch(num)
{
case 2:if(a[r][c+1]==2)
       {cout<<"<<You cannot let a hound to eat the hare alone !!>>\n";goto u;}
       swap(a[r][c],a[r][c+1]);
       if(checkrules(a)==0)
       {cout<<"<<Not possible!!!>>\n";swap(a[r][c+1],a[r][c]);goto u;}
       break;
case 7:if(a[r+1][c+1]==2)
       {cout<<"<<You cannot let a hound to eat the hare alone !!>>\n";goto u;}
       swap(a[r][c],a[r+1][c+1]);
       if(checkrules(a)==0)
       {cout<<"<<Not possible!!!>>\n";swap(a[r+1][c],a[r][c]);goto u;}
       break;
case 3:if(a[r+1][c]==2)
       {cout<<"<<You cannot let a hound to eat the hare alone !!>>\n";goto u;}
       swap(a[r][c],a[r+1][c]);
       if(checkrules(a)==0)
       {cout<<"<<Not possible!!!>>\n";swap(a[r+1][c],a[r][c]);goto u;}
       break;
case 8:if(a[r+1][c-1]==2)
       {cout<<"<<You cannot let a hound to eat the hare alone !!>>\n";goto u;}
       swap(a[r][c],a[r+1][c-1]);
       if(checkrules(a)==0)
       {cout<<"<<Not possible!!!>>\n";swap(a[r+1][c-1],a[r][c]);goto u;}
       break;
case 4:if(a[r][c-1]==2)
       {cout<<"<<You cannot let a hound to eat the hare alone !!>>\n";goto u;}
       swap(a[r][c],a[r][c-1]);
       if(checkrules(a)==0)
       {cout<<"<<Not possible!!!>>\n";swap(a[r][c-1],a[r][c]);goto u;}
       break;
default:cout<<"\n<<Wrong entry>>";goto u;
}
disp(a);
}
}
disp(a);
goto m;
l:;cout<<"                             Hound wins!!!";result=2;goto x;
m:;cout<<"                             Hare escapes!!!";result=1;
x:;getch();
}

void disp(char a[8][8])
{
clrscr();
char c[11];
c[0]=185;c[1]=186;c[2]=187;c[3]=188;c[4]=200;c[5]=201;c[6]=202;c[7]=203;c[8]=204;c[9]=205;c[10]=206;
cout<<"                                 TIC TAC TOE\n";
cout<<"\n\n\n\n";
cout<<"                                  "<<c[5]<<c[9]<<c[7]<<c[9]<<c[7]<<c[9]<<c[2]<<"\n";
cout<<"                                  "<<c[1]<<a[1][1]<<c[1]<<a[1][2]<<c[1]<<a[1][3]<<c[1]<<"\n";
cout<<"                                  "<<c[8]<<c[9]<<c[10]<<c[9]<<c[10]<<c[9]<<c[0]<<"\n";
cout<<"                                  "<<c[1]<<a[2][1]<<c[1]<<a[2][2]<<c[1]<<a[2][3]<<c[1]<<"\n";
cout<<"                                  "<<c[8]<<c[9]<<c[10]<<c[9]<<c[10]<<c[9]<<c[0]<<"\n";
cout<<"                                  "<<c[1]<<a[3][1]<<c[1]<<a[3][2]<<c[1]<<a[3][3]<<c[1]<<"\n";
cout<<"                                  "<<c[4]<<c[9]<<c[6]<<c[9]<<c[6]<<c[9]<<c[3]<<"\n";
}
int check(char a[8][8])
{
if((a[1][1]==88 && a[1][2]==88 && a[1][3]==88) || (a[2][1]==88 && a[2][2]==88 && a[2][3]==88) || (a[3][1]==88 && a[3][2]==88 && a[3][3]==88) || (a[1][1]==88 && a[2][1]==88 && a[3][1]==88) || (a[1][2]==88 && a[2][2]==88 && a[3][2]==88) || (a[1][3]==88 &&a[2][3]==88 && a[3][3]==88) || (a[1][1]==88 && a[2][2]==88 && a[3][3]==88) || (a[3][1]==88 && a[2][2]==88 && a[1][3]==88))
{return 1;}
if((a[1][1]==79 && a[1][2]==79 && a[1][3]==79) || (a[2][1]==79 && a[2][2]==79 && a[2][3]==79) || (a[3][1]==79 && a[3][2]==79 && a[3][3]==79) || (a[1][1]==79 && a[2][1]==79 && a[3][1]==79) || (a[1][2]==79 && a[2][2]==79 && a[3][2]==79) || (a[1][3]==79 &&a[2][3]==79 && a[3][3]==79) || (a[1][1]==79 && a[2][2]==79 && a[3][3]==79) || (a[3][1]==79 && a[2][2]==79 && a[1][3]==79))
{return 2;}
return 0;
}
void main4()
{
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\nYou have selected TicTacToe. Player who gets 3 of his symbol in a straight line (horizontal or vertical or diagonal) first wins."; getch();
char a[8][8];
int r,c;
for(int i=0;i<8;i++)
{
 for(int j=0;j<8;j++)
 {
 a[i][j]=0;
 }
}
disp(a);
for(int e=1;e<=9;e++)
{
 if(e%2==1)
 {
p:cout<<"\n\n\n   Player 1 where do you want to keep X\n";
  cout<<"ROW : ";
  cin>>r;
  cout<<"COLUMN : ";
  cin>>c;
  if(a[r][c]==0)
  {a[r][c]=88;}
  else
  {cout<<"<<Already used the box>>";goto p;}
  disp(a);
  if(check(a)==1)
  goto la;
 }
 else
 {
  o:cout<<"\n\n\n   Player 2 where do you want to keep O\n";
  cout<<"ROW : ";
  cin>>r;
  cout<<"COLUMN : ";
  cin>>c;
  if(a[r][c]==0)
  {a[r][c]=79;}
  else
  {cout<<"<<Already used the box>>";goto o;}
  a[r][c]=79;
  disp(a);
  if(check(a)==2)
  goto lb;
 }
}
   clrscr();

   cout<<"\n\n\n\n\n\n\n\n\n                                      DRAW";result=0;goto k;
la:clrscr();cout<<"\n\n\n\n\n\n\n\n\n                                  PLAYER 1 WINS!!!";result=1;goto k;
lb:clrscr();cout<<"\n\n\n\n\n\n\n\n\n                                  PLAYER 2 WINS!!!";result=2;
k:getch();
}
class gaming
{
public:
char pname[10];
char pword[10];
int  xogames;
int  xopoints;
int  hvshgames;
int  hvshpoints;
int  cgames;
int  cpoints;
int  mazegames;
int  mazepoints;
void getdata();
void modifywin(int);
void modifylose(int);
void initi();
}s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,temp1,temp2,temp3,temp4,temp5,temp6;
void gaming::getdata()
{
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\tPLAYER NAME: ";
cin>>pname;
cout<<"\t\t\tPASSWORD: ";
cin>>pword;
}
void gaming::modifywin(int q)
{
switch(q)
{
case 1:mazegames++;mazepoints++;break;
case 2:cgames++;cpoints++;break;
case 3:hvshgames++;hvshpoints++;break;
case 4:xogames++;xopoints++;break;
}
}
void gaming::modifylose(int q)
{
switch(q)
{
case 1:mazegames++;break;
case 2:cgames++;break;
case 3:hvshgames++;break;
case 4:xogames++;break;
}
}
void gaming::initi()
{
xogames=0;
xopoints=0;
hvshgames=0;
hvshpoints=0;
cgames=0;
cpoints=0;
mazegames=0;
mazepoints=0;
}
void main()
{
clrscr();
int i,j,k,m,n,z[20];
for(i=0;i<20;i++)
{
z[i]=i;
}
char a[100][100];
initarr(a);
for(i=0;i<10;i++)
{
clrscr();
funcm(a,i+z[1],10);
funca(a,i+z[2],16);
funcg(a,i+z[3],22);
funce(a,i+z[4],28);
funcs(a,i+z[5],38);
funct(a,i+z[6],44);
funca(a,i+z[7],50);
funcc(a,i+z[8],56);
funck(a,i+z[9],62);
funcs(a,i+z[10],68);
opdisp(a);
delay(110);
initarr(a);
}
clrscr();
funcm(a,9,10);
funca(a,9,16);
funcg(a,9,22);
funce(a,9,28);
funcs(a,9,38);
funct(a,9,44);
funca(a,9,50);
funcc(a,9,56);
funck(a,9,62);
funcs(a,9,68);
opdisp(a);
delay(300);
for(i=0;i<=6;i++)
{
clrscr();
funcm(a,9+i,10);
funca(a,9,16);
funcg(a,9-i,22);
funce(a,9,28);
funcs(a,9,38);
funct(a,9,44);
funca(a,9,50);
funcc(a,9,56);
funck(a,9,62);
funcs(a,9,68);
opdisp(a);
delay(20);
initarr(a);
}
for(i=0;i<=12;i++)
{
clrscr();
funcm(a,15,10+i);
funca(a,9,16);
funcg(a,3,22-i);
funce(a,9,28);
funcs(a,9,38);
funct(a,9,44);
funca(a,9,50);
funcc(a,9,56);
funck(a,9,62);
funcs(a,9,68);
opdisp(a);
delay(40);
initarr(a);
}
for(i=0;i<=6;i++)
{
clrscr();
funcm(a,15-i,22);
funca(a,9,16);
funcg(a,3+i,10);
funce(a,9,28);
funcs(a,9,38);
funct(a,9,44);
funca(a,9,50);
funcc(a,9,56);
funck(a,9,62);
funcs(a,9,68);
opdisp(a);
delay(20);
initarr(a);
}
getch();
 clrscr();
 ifstream fin;
 fstream fig;
 int ch,gh,uj=0;
 long pos;
 char found='n';
 char nemp4[10];
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\tDO YOU ALREADY HAVE AN ACCOUNT?\n\t\t\t     1.NO\n\t\t\t     2.YES\n";
 cout<<"Choice: ";
 cin>>gh; clrscr();
 switch(gh)
 {
	  case 1:
	  ofstream fo("m.dat",ios::app|ios::binary);
	  temp1.getdata();
	  temp1.initi();
	  fo.write((char*)&temp1,sizeof(temp1));
	  fo.close();getch();break;
       case 2:
fu:	  fin.open("m.dat",ios::in|ios::binary);
	  temp1.getdata();
	  while(!fin.eof())
	  {
	  fin.read((char*)&s1,sizeof(s1));
       if(strcmp(s1.pname,temp1.pname)==0 && strcmp(s1.pword,temp1.pword)==0)
	  {cout<<"SUCCESFULL LOGIN!!!\nPress any key to continue";getch();uj++;goto jo;}
	  }

	fin.close();
	  if(uj==0)
	  {clrscr();goto fu;}
jo:	fin.close();break;
 }
 uj=0;
 char rep='y';
 while(rep=='y'||rep=='Y')
 {clrscr();
  cout<<"\n\n\n\n\n\n\n\n           To play the game enter the number assosciated with it\n";
  cout<<"\t\t\tMAZE - 1\n\t\t\tCONNECT4 - 2\n\t\t\tHARE VS HOUND - 3\n\t\t\tTICTACTOE - 4\n\t\t\tGAMING PROFILE - 5 ";
f:cout<<"\nChoice: ";cin>>ch; clrscr();
    if(ch==2 || ch==3 || ch==4)
    {
     fui: fin.open("m.dat",ios::in|ios::binary);
	  temp2.getdata();
	  while(!fin.eof())
	  {
	  fin.read((char*)&s1,sizeof(s1));
       if(strcmp(s1.pname,temp2.pname)==0 && strcmp(s1.pword,temp2.pword)==0)
	  {cout<<"SUCCESFULL LOGIN!!!\nPress any key to continue";getch();uj++;goto joi;}
	  }

	fin.close();
	  if(uj==0)
	  {clrscr();goto fui;}
joi:fin.close();
    }
uj=0;
  switch(ch)
  {
   case 1: clrscr();
	   main1();
	   fstream fio("m.dat",ios::in|ios::out|ios::binary);
	   while(!fio.eof())
	   {
	    pos=fio.tellg();
	    fio.read((char*)&s1,sizeof(s1));
	    if(strcmp(s1.pname,temp1.pname)==0 && strcmp(s1.pword,temp1.pword)==0 && result==1)
	    {s1.modifywin(1);
	    fio.seekg(pos);
	    fio.write((char*)&s1,sizeof(s1));}
	    if(strcmp(s1.pname,temp1.pname)==0 && strcmp(s1.pword,temp1.pword)==0 && result==0)
	    {s1.modifylose(1);
	    fio.seekg(pos);
	    fio.write((char*)&s1,sizeof(s1));}
	   }
	   fio.seekg(0);
	   fio.close();
	   result=-1;
	   break;
   case 2: clrscr();
	   main2();
	   fig.open("m.dat",ios::in|ios::out|ios::binary);
	   while(!fig.eof())
   {       pos=fig.tellg();
	   fig.read((char*)&s2,sizeof(s2));
	   if(strcmp(s2.pname,temp1.pname)==0 && strcmp(s2.pword,temp1.pword)==0 && result==1)
	   {s2.modifywin(2);
	    fig.seekg(pos);
	    fig.write((char*)&s2,sizeof(s2));

	   }
	   if(strcmp(s2.pname,temp2.pname)==0 && strcmp(s2.pword,temp2.pword)==0 && result==1)
	   {s2.modifylose(2);
	    fig.seekg(pos);
	    fig.write((char*)&s2,sizeof(s2));

	   }
	   if(strcmp(s2.pname,temp1.pname)==0 && strcmp(s2.pword,temp1.pword)==0 && result==2)
	   {s2.modifylose(2);
	    fig.seekg(pos);
	    fig.write((char*)&s2,sizeof(s2));

	   }
	   if(strcmp(s2.pname,temp2.pname)==0 && strcmp(s2.pword,temp2.pword)==0 && result==2)
	   {s2.modifywin(2);
	    fig.seekg(pos);
	    fig.write((char*)&s2,sizeof(s2));

	   }
	   if(strcmp(s2.pname,temp1.pname)==0 && strcmp(s2.pword,temp1.pword)==0 && result==0)
	   {s2.modifylose(2);
	    fig.seekg(pos);
	    fig.write((char*)&s2,sizeof(s2));

	   }
	   if(strcmp(s2.pname,temp2.pname)==0 && strcmp(s2.pword,temp2.pword)==0 && result==0)
	   {s2.modifylose(2);
	    fig.seekg(pos);
	    fig.write((char*)&s2,sizeof(s2));

	   }
    }
	   fig.seekg(0);
	   fig.close();
	   result=-1;

	   break;

   case 3: clrscr();
	   main3();
	   fig.open("m.dat",ios::in|ios::out|ios::binary);
	   while(!fig.eof())
   {       pos=fig.tellg();
	   fig.read((char*)&s2,sizeof(s2));
	   if(strcmp(s2.pname,temp1.pname)==0 && strcmp(s2.pword,temp1.pword)==0 && result==1)
	   {s2.modifywin(3);
	    fig.seekg(pos);
	    fig.write((char*)&s2,sizeof(s2));

	   }
	   if(strcmp(s2.pname,temp2.pname)==0 && strcmp(s2.pword,temp2.pword)==0 && result==1)
	   {s2.modifylose(3);
	    fig.seekg(pos);
	    fig.write((char*)&s2,sizeof(s2));

	   }
	   if(strcmp(s2.pname,temp1.pname)==0 && strcmp(s2.pword,temp1.pword)==0 && result==2)
	   {s2.modifylose(3);
	    fig.seekg(pos);
	    fig.write((char*)&s2,sizeof(s2));

	   }
	   if(strcmp(s2.pname,temp2.pname)==0 && strcmp(s2.pword,temp2.pword)==0 && result==2)
	   {s2.modifywin(3);
	    fig.seekg(pos);
	    fig.write((char*)&s2,sizeof(s2));

	   }
	   if(strcmp(s2.pname,temp1.pname)==0 && strcmp(s2.pword,temp1.pword)==0 && result==0)
	   {s2.modifylose(3);
	    fig.seekg(pos);
	    fig.write((char*)&s2,sizeof(s2));

	   }
	   if(strcmp(s2.pname,temp2.pname)==0 && strcmp(s2.pword,temp2.pword)==0 && result==0)
	   {s2.modifylose(3);
	    fig.seekg(pos);
	    fig.write((char*)&s2,sizeof(s2));

	   }
    }
	   fig.seekg(0);
	   fig.close();
	   result=-1;

	   break;
   case 4:  clrscr();
	   main4();
	   fig.open("m.dat",ios::in|ios::out|ios::binary);
	   while(!fig.eof())
   {       pos=fig.tellg();
	   fig.read((char*)&s2,sizeof(s2));
	   if(strcmp(s2.pname,temp1.pname)==0 && strcmp(s2.pword,temp1.pword)==0 && result==1)
	   {s2.modifywin(4);
	    fig.seekg(pos);
	    fig.write((char*)&s2,sizeof(s2));

	   }
	   if(strcmp(s2.pname,temp2.pname)==0 && strcmp(s2.pword,temp2.pword)==0 && result==1)
	   {s2.modifylose(4);
	    fig.seekg(pos);
	    fig.write((char*)&s2,sizeof(s2));

	   }
	   if(strcmp(s2.pname,temp1.pname)==0 && strcmp(s2.pword,temp1.pword)==0 && result==2)
	   {s2.modifylose(4);
	    fig.seekg(pos);
	    fig.write((char*)&s2,sizeof(s2));

	   }
	   if(strcmp(s2.pname,temp2.pname)==0 && strcmp(s2.pword,temp2.pword)==0 && result==2)
	   {s2.modifywin(4);
	    fig.seekg(pos);
	    fig.write((char*)&s2,sizeof(s2));

	   }
	   if(strcmp(s2.pname,temp1.pname)==0 && strcmp(s2.pword,temp1.pword)==0 && result==0)
	   {s2.modifylose(4);
	    fig.seekg(pos);
	    fig.write((char*)&s2,sizeof(s2));

	   }
	   if(strcmp(s2.pname,temp2.pname)==0 && strcmp(s2.pword,temp2.pword)==0 && result==0)
	   {s2.modifylose(4);
	    fig.seekg(pos);
	    fig.write((char*)&s2,sizeof(s2));

	   }
    }
	   fig.seekg(0);
	   fig.close();
	   result=-1;

	   break;
   case 5: ifstream fit("m.dat",ios::in);
	   cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\tENTER USERNAME TO KNOW HIS DETAILS: ";
	   cin>>nemp4;
	   while(!fit.eof())
	   {fit.read((char*)&s1,sizeof(s1));
	   if(strcmp(s1.pname,nemp4)==0)
	   {clrscr();
	    cout<<"\t\t\t\tUSERNAME: "<<s1.pname<<"\n";
	    cout<<"\t\t\t\tMAZE GAMES: "<<s1.mazegames<<"\n";
	    cout<<"\t\t\t\tMAZEPOINTS: "<<s1.mazepoints<<"\n";
	    cout<<"\t\t\t\tHARE VS HOUND GAMES: "<<s1.hvshgames<<"\n";
	    cout<<"\t\t\t\tHARE VS HOUND POINTS: "<<s1.hvshpoints<<"\n";
	    cout<<"\t\t\t\tCONNECT4 GAMES: "<<s1.cgames<<"\n";
	    cout<<"\t\t\t\tCONNECT4 POINTS: "<<s1.cpoints<<"\n";
	    cout<<"\t\t\t\tTICTACTOE GAMES: "<<s1.xogames<<"\n";
	    cout<<"\t\t\t\tTICTACTOE POINTS: "<<s1.xopoints<<"\n";
	    found='y';
	    getch();
	    goto yu;
	   }
	   }
	   if(found=='n')
	   {
	   clrscr();
	   cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\tNOT FOUND";
	   getch();
	   }
yu:	   fit.close();

	   break;
   default: cout<<"Invalid choice enter another choice\n"; goto f;
  }
  result=-1;
 clrscr();
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\tIf you want to continue press y : "; cin>>rep;}
  clrscr();
  cout<<"\n\n\n\n\n\n\n\n\n\t\t\tThank you for playing GAME STACKS\n\n\t\t\tGame Stacks will return with more games\n\n\t\t\tDeveloped by:\n\t\t\tM.Jaswanth Kumar\n\t\t\tL.Uma Maheshwaran\n\t\t\tA.Cheralathan\n\t\t\tVisesh Baratam";getch();}
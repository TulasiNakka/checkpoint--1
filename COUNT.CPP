#include<stdio.h>
#include<conio.h>
#include<math.h>
int count(int ,int);
int main()
{
int x,y,z;
clrscr();
scanf("%d%d",&x,&y);
if(x<y)
{
z=floor(y/x);
}
else
{
printf("-1");
}
printf("%d",z);

getch();
}
int count(int x,int y)
{
int k;
k=count(x,y);
if(x<y)
 return k;
}



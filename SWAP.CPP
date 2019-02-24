#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
printf("%d %d",*a,*b);
}
void main()
{
int x,y;
clrscr();
scanf("%d %d",&x,&y);
swap(&x,&y);
getch();
}
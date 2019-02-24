#include<stdio.h>
#include<conio.h>
int nthfibonacci(int n)
{
int fno;
if(n==1)
{
return 0;
}
else if(n==2)
{
return 1;
}
else
{
fno=nthfibonacci(n-1)+nthfibonacci(n-2);
}
return fno;
}
int nthfibonacci(int n);
void main()
{
int n,c;
clrscr();
scanf("%d",&n);
c=nthfibonacci(n);
printf("%d",c);
getch();
}

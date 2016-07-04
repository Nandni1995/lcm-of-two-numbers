#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,x,y,t,lcm,gcd;
clrscr();
printf("enter the two numbers:");
scanf("%d%d",&x,&y);
a=x;
b=y;
while(b!=0)
{
t=b;
b=a%b;
a=t;
}
gcd=a;
lcm=(x*y)/gcd;
printf("lcm=%d",lcm);
getch();
}

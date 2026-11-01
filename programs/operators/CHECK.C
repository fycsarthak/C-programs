#include<stdio.h>
#include<conio.h>
void main()
{
int x;
clrscr();
printf("enter the number");
scanf("%d",&x);
if(x>0)
printf("the number is positive");
else if(x<0)
printf("the number is negative");
else
printf("the number is zero");
}
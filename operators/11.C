#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,avg,fnl;
clrscr();
printf("enter the marks:");
scanf("%d",&a);
printf("\nenter the marks:");
scanf("%d",&b);
printf("\nenter the marks:");
scanf("%d",&c);
printf("\nenter the marks:");
scanf("%d",&d);
printf("\nenter the marks:");
scanf("%d",&e);
avg=a+b+c+d+e;
printf("the average of marks %d",avg/5);
}
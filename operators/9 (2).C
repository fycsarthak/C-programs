#include<stdio.h>
#include<conio.h>
void main()
{
float x,p;
int i,r;
clrscr();
printf("enter the number: ");
scanf("%f",&x);
i=x;
p=x-i;
if(p>0.5)r=i+1;
else r=i;
printf("Round off for your number is: %d",r);
getch();
}

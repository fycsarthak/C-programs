#include<stdio.h>
#include<conio.h>
void main()
{
float p,r,t,interest;
clrscr();
printf("enter principle");
scanf("%f",&p);
printf("enter rate");
scanf("%f",&r);
printf("enter time");
scanf("%f",&t);
interest=(p*r*t)/100;
printf("%f",interest);
getch();
}

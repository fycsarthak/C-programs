#include<stdio.h>
#include<conio.h>
void main()
{
int x;
float y;
clrscr();
printf("enter the number: ");
scanf("%f",&y);
x=y;
y=y-x;
printf("the number is %f",y);
getch();
}
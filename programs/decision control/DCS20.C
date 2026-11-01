#include <stdio.h>
#include <conio.h>
void main()
{
int num;
clrscr();
printf("Enter the number to check whether it is leap or not\n");
scanf("%d",&num);
if(num%4==0&&num%100!=0||num%400==0)
printf("yeap Year");
else
printf("not an leap year");
getch();
}
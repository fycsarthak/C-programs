#include<stdio.h>
#include<conio.h>
void main()
{
int x;
clrscr();
printf("grades the student on the basic of number");
scanf("%d",&x);
if(x>=0&&x<40)
printf("\nfail");
else if(x>=40&&x<60)
printf("\n grade is C");
else if(x>=60&&x<80)
printf("\n grade is B");
else if(x>=80&&x<100)
printf("\n grade is A");
else

printf("invalid marking");
}
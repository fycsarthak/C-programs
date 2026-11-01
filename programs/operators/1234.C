#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
printf("enter the number");
scanf("%d",&i);
if(i<10)
printf("the no. is of one digit");
else if(i<100)
printf("the no. is of two digit");
else if(i<1000)
printf("the no.is of three digit");
else if(i<10000)
printf("the no. is of four digit");
else if(i<32000)
printf("the no. is of five digit");
}



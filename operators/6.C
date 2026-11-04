#include<stdio.h>
#include<conio.h>
void main()
{
long num;//to handle large numbers
int x;
clrscr();
printf("enter any number");
scanf("%ld",&num);
x=num % 10;
printf("the last digit of the number is : %d\n",x);
}

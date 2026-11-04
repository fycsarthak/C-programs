#include<stdio.h>
#include<conio.h>
void main()
{
int a=11;
int b;
clrscr();
b=a--;
printf("value of a:%d\n",a);
//post decrement first assign the value and then decrement means subtracting 1
printf("value of b:%d\n",b);
}
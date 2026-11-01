#include<stdio.h>
#include<conio.h>
void main()
{
int a=5;
int b;
clrscr();
b=++a;//pre-increment :first increases 'a',then assign it to 'b'
printf("value of a: %d\n",a);
printf("value of b: %d\n",b);
}
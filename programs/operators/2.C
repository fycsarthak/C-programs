#include<stdio.h>
#include<conio.h>
void main()
{
int a=10;
int b;
clrscr();
b=a++;
printf("value of a %d\n",a);//post-increment first assign 'a' to'b',then increases 'a' by 1
printf("value of b %d\n",b);
}
#include<stdio.h>
#include<conio.h>
void main()
{
char x;
clrscr();
printf("enter a lower case character");
scanf("%c",&x);
if(x>=97&&x<=122)
printf("changed character is %c",x-32);
else
printf("nothing");
}
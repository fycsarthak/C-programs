#include <stdio.h>
#include <conio.h>
void main(){
char x,y;
clrscr();
printf("compares two character\n");
printf("\nEnter the first character");
scanf("%c",&x);
fflush(stdin);
printf("\nEnter the second character");
scanf("%c",&y);
if(x==y)
printf("both are same");
else
printf("difference is %d", x-y );
}
#include<stdio.h>
#include<conio.h>
void main(){
char x,y;
clrscr();
printf("Enter two character to print their ascii value:");
printf("\n Enter the first character");
scanf("%c",&x);
fflush(stdin);
printf("\n Enter the Second character");
scanf("%c",&y);
fflush(stdin);
printf("the ascii values are %d %d",x,y);
}
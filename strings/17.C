//Enter a string and the bound number from the user and print the character on that bound.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
char str[50];
int i,b=0;
clrscr();
printf("Enter the string you like: ");
gets(str);
printf("Enter the bound number: ");
scanf("%d",&b);
printf("The character on the bound is : %c",str[b]);
getch();
}
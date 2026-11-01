// Enter a string from the user and find out the final length of the string

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
char str[50];
int l;
clrscr();
printf("Enter the string you like: ");
gets(str);
l=strlen(str);
printf("The final length of your string is %d",l);
getch();
}
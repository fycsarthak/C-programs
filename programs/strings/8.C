// Enter a string from the user and concatenate the string.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
char str1[50],str2[50];
int l;
clrscr();
printf("Enter the string1: ");
gets(str1);
printf("Enter the string2: ");
gets(str2);
strcat(str1,str2);
printf("Your final string is %s",str1);
getch();
}
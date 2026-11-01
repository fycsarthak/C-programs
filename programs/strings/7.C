// Enter a string from the user and find out the final length of the string

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
char str1[50],str2[50];
int l;
clrscr();
printf("Enter the string 1: ");
gets(str1);
printf("Enter the string 2: ");
gets(str2);
l=strcmp(str1,str2);
if(l==0)printf("Both strings are same");
else printf("Both strings are different");
getch();
}
// Enter a string from the user and copy that string into another string

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
char str1[50],str2[50];
int l;
clrscr();
printf("Enter the string1 you like: ");
gets(str1);
strcpy(str2,str1);
printf("copied string2:  %s",str2);
getch();
}
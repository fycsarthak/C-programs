//Enter a string from the user and copy the reverse order in another string.
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
char str1[50],str2[50];
int i,l;
clrscr();
printf("Enter the string 1: ");
gets(str1);
l=strlen(str1);
for(i=0;str1[i];i++){
str2[i]=str1[l-1-i];
}
str2[i]=0;
printf("Here is the string2(reverese of string1): %s",str2);
getch();
}
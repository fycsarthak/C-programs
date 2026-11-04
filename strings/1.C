//Enter a string from the user and covert it into uppercase.
#include<stdio.h>
#include<string.h>
#include<conio.h>

void main(){
char str[50];
int i;
clrscr();
printf("Enter any sentence you like: ");
gets(str);
for(i=0;str[i];i++){
if(str[i]>='a'&& str[i]<='z'){
str[i]=str[i]-32;
}
}
printf("Here is the uppercase version of it: %s",str);
getch();
}
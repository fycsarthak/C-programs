///10. Enter the string from user ,enter a number from user ,if the user enter 0 then you will print first character of string ,if the user enter 1 then you will print second character of string ,if user enter 2 then you will print third character of string ,if user enter 3 then you point fourth character of string and if out of string then you will print out of bound ?

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
char str[50];
int l,d;
clrscr();
printf("Enter the string you like: ");
gets(str);
l=strlen(str);
printf("which character you want you print(index): ");
scanf("%d",&d);
if (d<0) printf("Please enter a number greater than or equal to 0 only");
else if(d<l)printf("%c",str[d]);
else printf("Out of bound");
getch();
}
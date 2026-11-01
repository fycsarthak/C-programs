//Enter a string from the user and enter a character,check if the string has that caracter ot not.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
char str[50],c;
int i;
clrscr();
printf("Enter the string you like: ");
gets(str);
printf("Enter the character: ");
scanf("%c",&c);
for(i=0;str[i];i++){
if(str[i]==c){
printf("Your string do have this character."); goto jump; }
}
printf("Your string does not have this character.");
jump:
getch();
}
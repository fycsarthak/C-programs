//Enter the string from the user and print each character in new line
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
char str[50];
int i;
clrscr();
printf("Enter the string: ");
gets(str);
printf("Here are each character in new line:\n");
for(i=0;str[i];i++){
printf("%c\n",str[i]);
}
getch();
}
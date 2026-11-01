//Enter a string from the user and count all vowels

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
char str[50];
int i,v=0;
clrscr();
printf("Enter the string you like: ");
gets(str);
for(i=0;str[i];i++){
if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')||(str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U'))
v+=1;
}
printf("Total number of vowels in string: %d",v);
getch();
}
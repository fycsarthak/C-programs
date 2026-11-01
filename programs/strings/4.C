//Enter a string from the user and covert it into Title Case.
#include<stdio.h>
#include<string.h>
#include<conio.h>

void main(){
char str[50];
int i;
clrscr();
printf("Enter any sentence you like: ");
gets(str);
if(str[0]>='a' && str[0]<='z')str[0]=str[0]-32;
for(i=0;str[i];i++){
if( (str[i-1]==' ' && str[i]>='a'&& str[i]<='z')  || (str[i-1]=='.' && str[i]>='a'&& str[i]<='z')){
str[i]=str[i]-32;
}
}
printf("Here is the uppercase version of it: %s",str);
getch();
}
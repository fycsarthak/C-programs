//Ente a string from the user and convert into toggle case.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
char str[50];
int i,l;
clrscr();
printf("Enter any sentence you like: ");
gets(str);
l=strlen(str);
for(i=0;i<l;i+=2){
if((str[i]<='Z'&& str[i]>='A')|| (str[i]>='a' && str[i]<='z')){
if (str[i]<='Z' && str[i]>='A')str[i]=str[i]+32;
else if (str[i]<='z' && str[i]>='a')str[i]=str[i]-32;
}
if(i%3==0)i=i+2; // for randomness
}
puts(str);
getch();
}
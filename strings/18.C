//string pallindrome example using reverse.
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
char str1[50],str2[50];
int i,l;
clrscr();
printf("Pallindrome are words that spells the same forward and backward for example \nNITIN,NAMAN and MOM\n");
printf("Enter any word to check if it is a pallindrome: ");
gets(str1);
l=strlen(str1);
for(i=0;str1[i];i++){
str2[i]=str1[l-1-i];
}
str2[i]=0;
l=strcmp(str1,str2);
if(l==0)printf("That is a pallindrome");
else printf("That is not a pallindrome");
getch();
}
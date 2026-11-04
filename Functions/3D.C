// Write a program to return an array rom a function

#include <stdio.h>
#include<conio.h>

char fun(int i){
char array[10];
int x;
for(x=0;x<=9;x++){
array[x]=x+1;
}
return array[i];
}

void main(){
int i;
char array[10];
clrscr();
for(i=0;i<=9;i++){
array[i]=fun(i); }
for(i=0;i<=9;i++){
printf("Number %d: %d\n",i+1,array[i]);
}
getch();
}

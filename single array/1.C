//1. Enter an array from user and display all the value ?

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
char array[5];
int i;
clrscr();
printf("Enter the array(size limit: 5): \n");
for(i=0;i<5;i++){
fflush(stdin);
printf("%d.): ",i+1);
scanf("%c",&array[i]);
}
printf("Printing the array: ");
for(i=0;i<5;i++){
printf("%c ",array[i]);
}
getch();
}
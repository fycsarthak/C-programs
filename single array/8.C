//8 Enter a string from the user and print the odd numbers of array.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
int array[5];
int i;
clrscr();
printf("Enter the array(size limit: 5): \n");
for(i=0;i<5;i++){
fflush(stdin);
printf("%d.)Value: ",i+1);
scanf("%d",&array[i]);
}
printf("Printing the even part of array: ");
for(i=0;i<5;i++){
if(array[i]%2!=0)
printf("%c ",array[i]);
}
getch();
}
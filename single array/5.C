//5. Enter an array from user and print the number which is even ?

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
scanf("%c",&array[i]);
}
printf("Printing the even part of array: ");
for(i=0;i<5;i++){
if(array[i]%2==0)
printf("%c ",array[i]);
}
getch();
}
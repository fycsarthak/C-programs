//6. Enter an array from user and print the number which is positive ?

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
int array[5];
int i;
clrscr();
printf("Enter the array avlues(size limit: 5): \n");
for(i=0;i<5;i++){
fflush(stdin);
printf("%d.)Value: ",i+1);
scanf("%d",&array[i]);
}
printf("Printing the positive part of array: ");
for(i=0;i<5;i++){
if(array[i]>0)
printf("%d ",array[i]);
}
getch();
}
//7. Enter an array from user and sqaure all the values of array ?

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
for(i=0;i<5;i++){
array[i]=array[i]*array[i];
}
printf("Printing the modified array(every number is sqared): ");
for(i=0;i<5;i++){
printf("%d ",array[i]);
}
getch();
}
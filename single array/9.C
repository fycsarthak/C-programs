//8 Enter a string from the user and add all the values.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
int array[5],i,sum=0;
clrscr();
printf("Enter the array(size limit: 5): \n");
for(i=0;i<5;i++){
fflush(stdin);
printf("%d.)Value: ",i+1);
scanf("%d",&array[i]);
}
for(i=0;i<5;i++){
sum=array[i]+sum;
}
printf("Sum of all the values: %d",sum);
getch();
}

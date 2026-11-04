//12 Enter maximum value of the array

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
int array[5],i,check=0;
clrscr();
printf("Enter the array(size limit: 5): \n");
for(i=0;i<5;i++){
fflush(stdin);
printf("%d.)Value: ",i+1);
scanf("%d",&array[i]);
}
for(i=0;i<5;i++){
if(check<array[i])check=array[i];
}
printf("Maximum value of the array %d",check);
getch();
}

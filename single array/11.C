//11

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
int array[5],i,j,temp;
clrscr();
printf("Enter the array(size limit: 5): \n");
for(i=0;i<5;i++){
fflush(stdin);
printf("%d.)Value: ",i+1);
scanf("%d",&array[i]);
}
for(i=0;i<5;i++){
for(j=i+1;j<5;j++){
if(array[i]>array[j]){
temp=array[j];
array[j]=array[i];
array[i]=temp;}
}
}
printf("Printing the array in ascending order: \n");
for(i=0;i<5;i++){
printf("%d ",array[i]);
}
getch();
}

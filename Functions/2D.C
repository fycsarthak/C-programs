//Write a program to enter 10 numbers frim the user
//and add the number and display the answer

#include<stdio.h>
#include<conio.h>
int num(){
int x;
scanf("%d",&x);
return x;
}

void main(){
int i,nums[10];
clrscr();
for(i=0;i<=9;i++){
printf("Enter the number %d: ",i+1);
nums[i]=num();
}
for(i=0;i<=8;i++){
nums[i+1]=nums[i+1]+nums[i];
}
printf("\nThe total for your 10 numbers are: %d",nums[9]);
getch();
}
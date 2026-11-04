//4. Enter an array from user and copy the array into second array in reverse order?

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
char array1[5],array2[5];
int i;
clrscr();
printf("Enter the array1(size limit: 5): \n");
for(i=0;i<5;i++){
fflush(stdin);
printf("%d.): ",i+1);
scanf("%c",&array1[i]);
}
for(i=0;i<5;i++){
array2[i]=array1[5-1-i];
}
printf("Printing the reverse copied array2: ");
for(i=0;i<5;i++){
printf("%c ",array2[i]);
}
getch();
}
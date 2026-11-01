//10. Enter 5 values of array from user, enter a value from user and search this value in array, if value is found then print “found” or not then print “not found”?


#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
int array[5],i,c;
clrscr();
printf("Enter the array(size limit: 5): \n");
for(i=0;i<5;i++){
fflush(stdin);
printf("%d.)Value: ",i+1);
scanf("%d",&array[i]);
}
printf("Enter the value to search: ");
scanf("%d",&c);
for(i=0;i<5;i++){
if(array[i]==c){
printf("Found");
goto jump;
}
}
printf("not found");
jump:
getch();
}

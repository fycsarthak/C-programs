//Make functions to find out Cube a of a user entered number.

#include<stdio.h>
#include<conio.h>

int Cube(int);

void main(){
int n,x;
clrscr();
printf("Enter the Number: ");
scanf("%d",&n);
x=Cube(n);
printf("Here is the result of the number: %d",x);
getch();
}

int Cube(int n){
int x=1,i;
for(i=0;i<3;i++){
x=x*n;
}
return x;
}
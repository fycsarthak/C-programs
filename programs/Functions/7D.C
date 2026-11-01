//Make functions for find out power of number, and enter the number
//and power from user.

#include<stdio.h>
#include<conio.h>

int power(int,int);

void main(){
int n,p,x;
clrscr();
printf("Enter the Base Number: ");
scanf("%d",&n);
printf("Enter the Power of the Number: ");
scanf("%d",&p);
x=power(n,p);
printf("Here is the result of the number: %d",x);
getch();
}

int power(int n,int p){
int x=1,i;
for(i=0;i<p;i++){
x=x*n;
}
return x;
}
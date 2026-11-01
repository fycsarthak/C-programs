#include <stdio.h>
#include <conio.h>
void main(){
int x;
clrscr();
printf("checks the number is odd or even");
scanf("%d",&x);
if (x%2==0&&x>=0)
printf("number is even");
else if(x%2!=0&&x>=0)
printf("number is odd");
else
printf("number is negative");
}
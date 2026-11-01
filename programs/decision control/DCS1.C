#include <stdio.h>
#include <conio.h>
void main(){
int x;
clrscr();
printf("enter the number to check");
scanf("%d",&x);
if(x>0)
printf("\n Number is positive");
else if(x<0)
printf("\n Number is negative");
else
printf("\n Number is zero");
}

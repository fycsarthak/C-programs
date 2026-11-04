#include <stdio.h>
#include <conio.h>
void main(){
    int a,b,i;
    clrscr();
    printf("Enter the first range\n");
    scanf("%d",&a);
   printf("Enter the second range\n");
    scanf("%d",&b);
    for(i=a;i<=b;i++) 
   printf("the range is %d", i);
    
}
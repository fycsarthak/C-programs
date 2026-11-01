#include <stdio.h>
#include <conio.h>
void main(){
    int n;
    clrscr();
    printf("Enter the number \n");
    scanf("%d",&n);
    if(n<0) 
    n = -n;
    while(n>=10)  
    n /= 10;

    printf("first number is %d", n);
 
}
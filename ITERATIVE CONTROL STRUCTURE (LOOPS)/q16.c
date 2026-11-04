#include <stdio.h>
#include <conio.h>
void main(){
    int n,i,sum=0;
    clrscr();
    
    printf("enter no\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++) 
    sum += i;
    printf("sum is %d", sum);
    
}
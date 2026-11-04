#include <stdio.h>
#include <conio.h>
void main(){
    int n,i,prime=1;
    clrscr();
    printf("Enter the number\n");
    scanf("%d",&n);

    if(n<=1) prime=0;
    for(i=2;i*i<=n && prime;i++)

    if(n%i==0) prime=0;
    if(prime) printf("prime\n"); 

    else printf("not prime\n");
    
}
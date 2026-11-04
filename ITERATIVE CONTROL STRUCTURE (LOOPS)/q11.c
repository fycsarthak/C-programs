#include <stdio.h>
#include <conio.h>
void main(){
    int n,rev=0,sign=1;
    clrscr();
    printf("Enter the number\n");
    scanf("%d",&n);
    if(n<0){ sign=-1; n = -n; }
    while(n>0){ rev = rev*10 + n%10; n /= 10; }
    printf("%d", rev*sign);
    
}
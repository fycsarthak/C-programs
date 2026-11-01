#include <stdio.h>
#include <conio.h>
void main(){
    int n,t,rev=0;
    printf("enter no to reverse");
    scanf("%d",&n);
    t = n; if(t<0) t = -t;
    while(t>0){ rev = rev*10 + t%10; t /= 10; }
    if(n>=0 && rev==n) printf("palindrome");
     else printf("not palindrome");
    
}
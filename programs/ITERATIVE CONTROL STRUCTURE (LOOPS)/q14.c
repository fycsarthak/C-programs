#include <stdio.h>
#include <conio.h>
void main(){
    int base,exp,i,res=1;

    clrscr();
	
    printf("Enter the base value\n");
    scanf("%d",&base);

    
    printf("Enter the exp value\n");
    scanf("%d",&exp);
    for(i=0;i<exp;i++){
    res *= base;}
    printf("%d", res);
    
}
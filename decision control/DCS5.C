#include <stdio.h>
#include <conio.h>
void main(){
float x,d;
int y;
clrscr();
printf("checks the decimals place");
scanf("%f",&x);
d=x-(int)x;
printf("%f",d);
if(x==(int)x)
printf("not decimal");
else
printf("decimal");
}


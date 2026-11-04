#include <stdio.h>
#include <conio.h>
void main(){
long int x;
clrscr();
printf("check the number of digits");
scanf("%d",&x);
if(x>-32768&&x<32767){
if(x<10)
printf("\n number is 1digit");
else if(x<100)
printf("\n number is 2digit");
else if(x<1000)
printf("\n number is 3digit");
else if(x<10000)
printf("\n number is 4digit");
else if(x<32768)
printf("\n number is 5digit");
}
printf("out of range");
}
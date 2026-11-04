#include <stdio.h>
#include <conio.h>
void main(){
float l,b,area,per;
clrscr();
printf("Enter the lenght of rectangle");
scanf("%f",&l);
printf("\nEnter the breadht of rectangle");
scanf("%f",&b);
area= l*b;
per=2*(l+b);
printf("the perimeter is %f\n the area is%f",per,area);
getch();
}
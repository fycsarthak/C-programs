#include <stdio.h>
#include <conio.h>
void main(){
int i;
int a[2][2];
clrscr();
printf("Enter 4 number to display in matrix");
printf("\nEnter two number in first row");
for(i=0;i<2;i++)
scanf("%d",&a[0][i]);
printf("\nEnter two number in Second row");
for(i=0;i<2;i++)
scanf("%d",&a[1][i]);
for(i=0;i<2;i++)
printf("%d ",a[0][i]);
printf("\n");
for(i=0;i<2;i++)
printf("%d ",a[1][i]);
getch();
}

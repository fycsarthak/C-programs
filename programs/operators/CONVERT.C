#include<stdio.h>
#include<conio.h>
void main()
{
int x;
clrscr();
printf("enter the number");
scanf("%d",&x);
if(x>0||x<0) {
x=-x;
printf("%d",x);
}
else{
printf("the number is zero");
getch();
}
}

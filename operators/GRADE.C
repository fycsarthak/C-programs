#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("enter the number");
scanf("%d",&num);
if(num>0&&num<40)
printf("fail");
else if(num>40&&num<60)
printf("c grade");
else if(num>60&&num<80)
printf("b grade");
else if(num>80&&num<100)
printf("a grade");
else
printf("rest numbers are invalid");
}

#include<stdio.h>
#include<conio.h>
void main()
{ int num;
int j;
int binary[32];
int i=0;
clrscr();
printf("enter a number");
scanf("%d",&num);
if(num==0)
{ printf("binary :0");
}
while (num>0)
{ binary[i]=num%2;
num=num/2;
i++;
}
printf("binary");
for(j=i-1;j>=0;j--)
{ printf("%d",binary[j]);
}
}
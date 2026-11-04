#include<stdio.h>
#include<conio.h>
void main()
{
FILE *f;
char filename;
char data;
clrscr();
printf("enter the file name");
scanf("%c",&filename);
f=fopen("filename","w");
if(f!=NULL)
{
printf("now we can write a file");
}
printf("\nenter the data");
scanf("%s",&data);
printf("%s",data);
}


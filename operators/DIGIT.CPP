#include<stdio.h>
#include<conio.h>
void main()
{
FILE *f;
char ch;
clrscr();
f=fopen("bca 1","w");
if(f!=NULL)
{
printf("now we can write a file");
}
printf("\nenter anything");
printf("\npress # to quit");
while(ch!='#')
{
//printf("/nenter what you want to write");
scanf("%c",&ch);
if(ch=='#')
{
printf("\nyou pressed # program ends");
break;
}
fputc(ch,f);
fclose(f);
printf("your text has saved");
}
}



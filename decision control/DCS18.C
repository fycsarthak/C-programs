#include <stdio.h>
#include <conio.h>
void main()
{
char x;
clrscr();
printf("Checks the type of character\n");
printf("\nEnter the character");
scanf("%c",&x);
if(x>='A'&&x<='Z')
printf("UPPER CASE");
else if(x>='a'&&x<='z')
printf("LOWER CASE");
else if(x>='0' &&x<='9')
printf("NUMBERS");
else
printf("SPECIAL CHARACTERS");
getch();
}
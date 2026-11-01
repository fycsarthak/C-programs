#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    clrscr();  

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0)
    {
        num = -num;   
    }
    else if(num > 0)
    {
        num = -num;       }
   else
	printf("numbez is zero");

    printf("Converted number is: %d", num);

    getch(); 
}

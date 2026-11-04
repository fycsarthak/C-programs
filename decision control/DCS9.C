#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    clrscr();   

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0)
    {
        printf("The number %d is positive", num);
    }
    else if(num < 0)
    {
        printf("The number %d is negative", num);
    }
    else
    {
        printf("The number is zero");
    }

    getch();  
}

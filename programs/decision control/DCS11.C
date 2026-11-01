#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    clrscr();  
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 4 == 0)
    {
        printf("is divisible by 4");
    }
    else
    {
        printf(" NOT divisible by 4");
    }

    getch(); 
}

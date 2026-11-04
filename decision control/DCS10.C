#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2;
    clrscr();

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if(num1 > num2)
    {
        printf("%d is greater", num1);
    }
    else if(num2 > num1)
    {
        printf("%d is greater", num2);
    }
    else
    {
        printf("Both numbers are equal");
    }

    getch();  
}

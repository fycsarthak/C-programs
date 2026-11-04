#include <stdio.h>
#include <conio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

void main()
{
    int n;

    clrscr();

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial is not possible.");
    else
        printf("Factorial = %d", factorial(n));

    getch();
}

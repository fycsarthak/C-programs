#include <stdio.h>
#include <conio.h>

int sum(int n)
{
    if (n == 0)
        return 0;

    return n + sum(n - 1);
}

void main()
{
    clrscr();

    printf("Sum = %d", sum(5));

    getch();
}

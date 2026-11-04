#include <stdio.h>
#include <conio.h>

void printnum(int n)
{
    if (n == 0)
        return;

    printf("%d ", n);
    printnum(n - 1);
}

void main()
{
    clrscr();
    printnum(5);
    getch();
}

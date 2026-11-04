#include <stdio.h>
#include <conio.h>

void printnum(int n)
{
    if (n > 5)
        return;

    printf("%d ", n);
    printnum(n + 1);
}

void main()
{
    clrscr();
    printnum(1);
    getch();
}

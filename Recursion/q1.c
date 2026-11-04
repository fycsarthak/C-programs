#include <stdio.h>
#include <conio.h>

void printA(int n)
{
    if (n == 0)
        return;

    printf("A\n");
    printA(n - 1);
}

void main()
{
    clrscr();
    printA(5);
    getch();
}

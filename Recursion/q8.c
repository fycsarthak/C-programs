#include <stdio.h>
#include <conio.h>

void display(int n)
{
    if (n == 0)
        return;

    display(n - 1);
    printf("%d ", n);
}

void main()
{
    clrscr();

    display(5);

    getch();
}

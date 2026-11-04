#include <stdio.h>
#include <conio.h>

int n = 1;

void display()
{
    if (n > 5)
        return;

    printf("%d ", n);
    n++;
    display();
}

void main()
{
    clrscr();

    display();

    getch();
}

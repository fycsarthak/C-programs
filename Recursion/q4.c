#include <stdio.h>
#include <conio.h>

void repeat()
{
    printf("Function calling itself\n");
    repeat();
}

void main()
{
    clrscr();
    repeat();
    getch();
}

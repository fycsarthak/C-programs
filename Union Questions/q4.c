#include <stdio.h>
#include <conio.h>

union Value
{
    int number;
    float decimal;
    char letter;
};

void main()
{
    union Value v;

    clrscr();

    v.number = 25;
    printf("Number = %d\n", v.number);

    v.decimal = 7.5;
    printf("Decimal = %.1f\n", v.decimal);

    v.letter = 'A';
    printf("Letter = %c", v.letter);

    getch();
}

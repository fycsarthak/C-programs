#include <stdio.h>
#include <conio.h>

struct Data
{
    int a;
    float b;
};

union DataUnion
{
    int a;
    float b;
};

void main()
{
    struct Data s;
    union DataUnion u;

    clrscr();

    s.a = 10;
    s.b = 5.5;

    printf("Structure values:\n");
    printf("a = %d\n", s.a);
    printf("b = %.1f\n", s.b);

    u.a = 10;
    u.b = 5.5;

    printf("\nUnion value:\n");
    printf("b = %.1f", u.b);

    getch();
}

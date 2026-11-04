#include <stdio.h>
#include <conio.h>

struct Sample
{
    int a;
    float b;
    char c;
};

union SampleUnion
{
    int a;
    float b;
    char c;
};

void main()
{
    clrscr();

    printf("Size of structure = %u bytes\n",
           (unsigned)sizeof(struct Sample));

    printf("Size of union = %u bytes",
           (unsigned)sizeof(union SampleUnion));

    getch();
}

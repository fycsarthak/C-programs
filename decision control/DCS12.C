#include <stdio.h>
#include <conio.h>

void main()
{
    char a, b, c, d;
    clrscr();  

    printf("Enter four characters:\n");
    scanf("%c %c %c %c", &a, &b, &c, &d);

    if(a == b && b == c && c == d)
    {
        printf("All four characters are equal.");
    }
    else
    {
        printf("All four characters are NOT equal.");
    }

    getch();  
}

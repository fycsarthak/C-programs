#include <stdio.h>
#include <conio.h>

void main()
{
    char ch;
    clrscr();  

    printf("Enter a character: ");
    scanf("%c", &ch);

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("The character '%c' is an alphabet.", ch);
    }
    else
    {
        printf("The character '%c' is NOT an alphabet.", ch);
    }

    getch();  
}

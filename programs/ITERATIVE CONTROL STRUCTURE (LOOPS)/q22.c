#include <stdio.h>
#include <conio.h>

void main() {
    char ch;

    clrscr();  
    while (1) {
        printf("Enter a character ");
        scanf(" %c", &ch); 

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            printf("'%c' is an alphabet.\n\n", ch);
        else
            printf("'%c' is not an alphabet.\n\n", ch);
    }

    getch(); }

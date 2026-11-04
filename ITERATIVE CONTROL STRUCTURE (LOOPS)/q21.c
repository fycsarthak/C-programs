#include <stdio.h>
#include <conio.h>

void main() {
    int a = 0, b = 1, c;

    clrscr(); 
    printf("Fibonacci Series from 1 to 100:\n");

    printf("%d %d ", a, b);  
    c = a + b;

    while (c <= 100) {
        printf("%d ", c);
        a = b;
        b = c;
        c = a + b;
    }

    getch(); 
}

#include <stdio.h>
#include <conio.h>
#include <dos.h>  
void main() {
    int i;

    clrscr();  
    printf("Counting from 1 to 100 with 1 second delay:\n\n");

    for (i = 1; i <= 100; i++) {
        printf("%d\n", i);
        delay(1000);  
    }

    
    getch(); }

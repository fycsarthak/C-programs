#include <stdio.h>
#include <conio.h>

void main() {
    int num, i;
    int fact = 1; 
    clrscr();  

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of negative number does not exist.");
    } 
    else {
        for (i = 1; i <= num; i++) {
            fact = fact * i;
        }
        printf("Factorial of %d = %d", num, fact);
    }

    getch();  
}

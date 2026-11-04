#include <stdio.h>
#include <conio.h>

void main() {
    int num, i, j, isPrime, flag = 0;

    clrscr(); 

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Number must be greater than 1.");
        getch(); // Wait for key press
        return;
    }

  
    for (i = 2; i <= num / 2; i++) {
        isPrime = 1; 

     
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }

   
        if (isPrime == 1 && num % i == 0) {
            printf("%d is divisible by prime number %d\n", num, i);
            flag = 1;
        }
    }

    if (flag == 0)
        printf("%d is not divisible by any prime number.", num);

    getch();
}

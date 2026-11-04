#include <stdio.h>
#include <conio.h>

void main() {
    int num, temp, rem, count = 0, i;
    int sum = 0, power, n;

    clrscr();  
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

       while (temp != 0) {
        count++;
        temp = temp / 10;
    }

    temp = num;

        while (temp != 0) {
        rem = temp % 10;

               power = 1;
        for (i = 1; i <= count; i++) {
            power = power * rem;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    getch();  
}

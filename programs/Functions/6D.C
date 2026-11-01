//Swap Numbers By Call By Functions

#include <stdio.h>
#include <conio.h>


void swap(int x, int y);

void main()
{
    int a, b;

    clrscr();  

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping: a = %d, b = %d", a, b);

    swap(a, b);  

    printf("\nAfter swapping in main: a = %d, b = %d", a, b);

    getch();  
}

void swap(int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;

    printf("\nAfter swapping in function: x = %d, y = %d", x, y);
}

//Swap Numbers Using Call By Address

#include <stdio.h>
#include <conio.h>


void swap(int *x, int *y);

void main()
{
    int a, b;

    clrscr();   

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping: a = %d, b = %d", a, b);

    swap(&a, &b);  

    printf("\nAfter swapping:  a = %d, b = %d", a, b);

    getch();   
}

void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}


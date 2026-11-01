#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    clrscr(); 
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0)
    {
        printf("Result is: %d", num * num);   
    }
    else if(num > 0)
    {
        printf("the number is increased by 20 %d", num+20);
    }

    

    getch();  

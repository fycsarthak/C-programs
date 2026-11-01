#include <stdio.h>
#include <conio.h>

void main()
{
    int num, tens, ones;
    clrscr();   // clears the screen (Turbo C specific)

    printf("Enter a two-digit number (10-99): ");
    scanf("%d", &num);

    if(num >=10 && num <100)
    {
        tens = num / 10;   
        ones = num % 10;   


        switch(tens)
        {
            case 0: printf("Zero "); break;
            case 1: printf("One "); break;
            case 2: printf("Two "); break;
            case 3: printf("Three "); break;
            case 4: printf("Four "); break;
            case 5: printf("Five "); break;
            case 6: printf("Six "); break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight "); break;
            case 9: printf("Nine "); break;
        }


        switch(ones)
        {
            case 0: printf(" Zero"); break;
            case 1: printf(" One"); break;
            case 2: printf(" Two"); break;
            case 3: printf(" Three"); break;
            case 4: printf(" Four"); break;
            case 5: printf(" Five"); break;
            case 6: printf(" Six"); break;
            case 7: printf(" Seven"); break;
            case 8: printf(" Eight"); break;
            case 9: printf(" Nine"); break;
        }
    }
else
printf("invlaid input");


    getch();   
}
#include <stdio.h>
#include <conio.h>

void main() {
    char ch;
    int count = 0;

    clrscr();  

    printf("Enter Password (max 20 characters). Press ENTER to exit:\n");

    while (1) {
        ch = getch();        
            break;

        if (count < 20) {
            printf("*");              
             count++;      
        } else {
            printf("\nMaximum 20 characters allowed!\n");
            break;
        }
    }

    if (count == 0)
        printf("\nNo password entered. Exiting...");
    else
        printf("\n Total characters: %d", count);

    getch();  
}

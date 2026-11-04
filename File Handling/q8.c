#include <stdio.h>
#include <conio.h>

void main()
{
    FILE *fp;
    char name[30], data[100];
    int choice;

    clrscr();

    printf("Enter file name: ");
    scanf("%s", name);

    fp = fopen(name, "w");

    do
    {
        printf("Enter data: ");
        fflush(stdin);
        gets(data);

        fprintf(fp, "%s\n", data);

        printf("Enter 1 to continue or 0 to stop: ");
        scanf("%d", &choice);

    } while (choice == 1);

    fclose(fp);

    printf("Data saved in file.");
    getch();
}

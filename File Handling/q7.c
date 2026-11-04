#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
    FILE *fp;
    char name[30], data[100];
    int i;

    clrscr();

    printf("Enter file name: ");
    scanf("%s", name);

    fp = fopen(name, "w");

    printf("Enter data: ");
    fflush(stdin);
    gets(data);

    for (i = 0; data[i] != '\0'; i++)
    {
        data[i] = toupper(data[i]);
    }

    fprintf(fp, "%s", data);
    fclose(fp);

    printf("Data saved in capital letters.");
    getch();
}

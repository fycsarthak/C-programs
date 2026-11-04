#include <stdio.h>
#include <conio.h>

void main()
{
    FILE *fp;
    char name[30], data[100];

    clrscr();

    printf("Enter file name: ");
    scanf("%s", name);

    fp = fopen(name, "w");

    printf("Enter data: ");
    fflush(stdin);
    gets(data);

    fprintf(fp, "%s", data);
    fclose(fp);

    printf("Data saved in file.");
    getch();
}

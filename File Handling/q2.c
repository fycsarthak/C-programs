#include <stdio.h>
#include <conio.h>

void main()
{
    FILE *fp;

    clrscr();

    fp = fopen("OLD.TXT", "w");
    fprintf(fp, "This file will be renamed.");
    fclose(fp);

    if (rename("OLD.TXT", "NEW.TXT") == 0)
        printf("File renamed successfully.");
    else
        printf("Unable to rename file.");

    getch();
}

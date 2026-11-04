#include <stdio.h>
#include <conio.h>

void main()
{
    FILE *fp;
    int ch, count = 0;

    clrscr();

    fp = fopen("TEXT.TXT", "w");
    fprintf(fp, "Hello C");
    fclose(fp);

    fp = fopen("TEXT.TXT", "r");

    while ((ch = fgetc(fp)) != EOF)
    {
        count++;
    }

    fclose(fp);

    printf("Number of characters = %d", count);
    getch();
}

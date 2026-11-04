#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
    FILE *fp;
    int ch, count = 0, inword = 0;

    clrscr();

    fp = fopen("WORDS.TXT", "w");
    fprintf(fp, "C is easy to learn");
    fclose(fp);

    fp = fopen("WORDS.TXT", "r");

    while ((ch = fgetc(fp)) != EOF)
    {
        if (isspace(ch))
            inword = 0;
        else if (inword == 0)
        {
            inword = 1;
            count++;
        }
    }

    fclose(fp);

    printf("Number of words = %d", count);
    getch();
}

#include <stdio.h>
#include <conio.h>

void main()
{
    FILE *fp1, *fp2;
    int ch;

    clrscr();

    fp1 = fopen("FIRST.TXT", "w");
    fprintf(fp1, "Hello, this is my first file.");
    fclose(fp1);

    fp1 = fopen("FIRST.TXT", "r");
    fp2 = fopen("COPY.TXT", "w");

    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully.");
    getch();
}

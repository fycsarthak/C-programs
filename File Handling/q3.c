#include <stdio.h>
#include <conio.h>

void main()
{
    FILE *fp1, *fp2, *fp3;
    int ch;

    clrscr();

    fp1 = fopen("ONE.TXT", "w");
    fprintf(fp1, "First file. ");
    fclose(fp1);

    fp2 = fopen("TWO.TXT", "w");
    fprintf(fp2, "Second file.");
    fclose(fp2);

    fp1 = fopen("ONE.TXT", "r");
    fp2 = fopen("TWO.TXT", "r");
    fp3 = fopen("THREE.TXT", "w");

    while ((ch = fgetc(fp1)) != EOF)
        fputc(ch, fp3);

    while ((ch = fgetc(fp2)) != EOF)
        fputc(ch, fp3);

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    printf("Files concatenated successfully.");
    getch();
}

#include <stdio.h>
#include <conio.h>

void main()
{
    int x,y,z,k;
    clrscr();
    printf("compares three numbers");
    printf("\n Enter the number 1");
    scanf("%d",&x);
    printf("\n Enter the number 2");
    scanf("%d",&y);
    printf("\n Enter the nmuber 3");
    scanf("%d",&z);
    k=x>y?x:y;
    k=k>z?k:z;
    printf("the greater is %d",k);
    getch();
}

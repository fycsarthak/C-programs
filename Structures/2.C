// 2. Create structure of employee which there is emp.ID, name, designation of 50 employees from user and print only name of the employee ?

#include <stdio.h>
#include <conio.h>

struct data
{
    int id;
    char name[25], des[30];
};
void main()
{
    int i, j;
    struct data emp[50];
    clrscr();
    printf("Enter the data for the employees below: \n");
    for (i = 0; i < 50; i++)
    {
        printf("Employee %d\n", i + 1);
        printf("Name: ");
        gets(emp[i].name);
        printf("Enter the Employee ID: ");
        scanf("%d", &emp[i].id);
        fflush(stdin);
        printf("Enter the designation: ");
        gets(emp[i].des);
    }
    printf("Employee Names: \n\n");
    printf("Employee number | Name\n");
    for (i = 0; i < 50; i++)
    {
        printf("%-16d| %s\n", i + 1, emp[i].name);
    }
    getch();
}
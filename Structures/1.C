// 1. Create structure of employee which there is emp.ID, name, designation of 50 employees from user, print details in tabular form ?

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
    struct data emp[2];
    clrscr();
    printf("Enter the data for the employees below: \n");
    for (i = 0; i < 2; i++)
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
    printf("--------------------------------------------------------------------------------");
    printf("| %-15s | %-25s | %-30s |", "ID", "Name", "Designation");
    for (i = 0; i < 2; i++)
    {
        printf("--------------------------------------------------------------------------------");
        printf("| %-15d | %-25s | %-30s |", emp[i].id, emp[i].name, emp[i].des);
    }
    getch();
}
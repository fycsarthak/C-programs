// 3. Create structure of employee which there is emp.ID, name, designation of 50 employees from user and print name character with emp.ID in tabular form ?

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
    printf("--------------------------------------------------------------------------------");
    printf("| %-28s | %-45s |", "ID", "Name");
    for (i = 0; i < 50; i++)
    {
        printf("--------------------------------------------------------------------------------");
        printf("| %-28d | %-45s |", emp[i].id, emp[i].name);
    }
    getch();
}
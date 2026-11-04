// 4. Enter student details like roll name, fee, DOB and print all the detail by ascending order of roll number ?

#include <stdio.h>
#include <conio.h>

struct data
{
    int roll, fee;
    char dob[10];
};
void main()
{
    int i, j;
    struct data s[3], t;
    clrscr();
    printf("Enter the data for the students below: \n");
    for (i = 0; i < 3; i++)
    {
        printf("student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        fflush(stdin);
        printf("Semester fee(INR): ");
        scanf("%d", &s[i].fee);
        fflush(stdin);
        printf("Enter the Date of Birth(dd/mm/yyyy): ");
        gets(s[i].dob);
    }
    // arranging in the ascending order
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (s[i].roll > s[j].roll)
            {
                t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
        }
    }

    printf("--------------------------------------------------------------------------------");
    printf("| %-15s | %-25s | %-30s |", "Roll", "Semester Fee", "Date of Birth");
    for (i = 0; i < 3; i++)
    {
        printf("--------------------------------------------------------------------------------");
        printf("| %-15d | %-25d | %-30s |", s[i].roll, s[i].fee, s[i].dob);
    }
    getch();
}
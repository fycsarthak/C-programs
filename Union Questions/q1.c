#include <stdio.h>
#include <conio.h>

union Student
{
    int roll;
    float marks;
    char grade;
};

void main()
{
    union Student s;

    clrscr();

    s.roll = 12;
    printf("Roll number = %d\n", s.roll);

    s.marks = 85.5;
    printf("Marks = %.1f\n", s.marks);

    s.grade = 'A';
    printf("Grade = %c", s.grade);

    getch();
}

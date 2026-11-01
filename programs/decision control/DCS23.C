#include <stdio.h>
#include <conio.h>

void main()
{
    int d1, m1, y1;   
    int d2, m2, y2;   
    int d, m, y;     
    int days;        

    clrscr();

    printf("Enter your Date of Birth (dd mm yyyy): ");
    scanf("%d %d %d", &d1, &m1, &y1);

    printf("Enter Current Date (dd mm yyyy): ");
    scanf("%d %d %d", &d2, &m2, &y2);

   
    if(m2 == 1 || m2 == 2 || m2 == 4 || m2 == 6 || m2 == 8 || m2 == 9 || m2 == 11)
        days = 31;
    else if(m2 == 5 || m2 == 7 || m2 == 10 || m2 == 12)
        days = 30;
    else
	days = 28;


    if(d2 < d1)
    {
	d2 = d2 + days;
	m2 = m2 - 1;
    }


    if(m2 < m1)
    {
	m2 = m2 + 12;
	y2 = y2 - 1;
    }

    d = d2 - d1;
    m = m2 - m1;
    y = y2 - y1;

    printf("\nYour Age Difference is: %d Years %d Months %d Days", y, m, d);

    getch();
}

//Enter the data from the user,the data consisit of roll no.,name,class,class,marks of 5 subject?

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
char name[25],roll[7],clas[7],mark[5][2];
clrscr();
printf("Enter all the details below\n");
printf("Enter your name: ");
gets(name);
printf("Enter the roll number: ");
gets(roll);
printf("Enter the marks of these 5 subject:\n");
printf("English: ");
gets(mark[0]);
printf("Physics: ");
gets(mark[1]);
printf("Chemistry: ");
gets(mark[2]);
printf("Biology: ");
gets(mark[3]);
printf("physical Education: ");
gets(mark[4]);
printf("Press any key to submit");
getch();
}
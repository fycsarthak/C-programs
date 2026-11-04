void main()
{
int d,m,y;
clrscr();
printf("Check the valid year");
printf("\nenter the date");
scanf("%d",&d);
printf("\nenter the month");
scanf("%d",&m);
printf("\nenter the year");
scanf("%d",&y);
if(d>0&&d<32&&m>0&&m<13&&y<2026)
printf("data is valid %0.2d/%0.2d/%0.4d",d,m,y);
else
printf("invalid date");
}

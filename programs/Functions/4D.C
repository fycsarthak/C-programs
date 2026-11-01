//make the following programs using local and gloabal variables?
//factorial,reverse,pallindrome,prime numbers,armstrong,fibonacci

#include<stdio.h>
#include<conio.h>
#include<string.h>
//declaring global functions
int i,f,j,l,x,y,d1,d2,d3,d4;
char str[25],str1[25],str2[25];

//declaring all the global funcions
void gfact();
void greverse();
void gpallindrome();
void gfibbo();
void gprime();
void garm();

//declaring all the local funcions
void lfact();
void lreverse();
void lpallindrome();
void lfibbo();
void lprime();
void larm();

//making main to control all
void main(){
int a,b;
char r;
ragain:
clrscr();
printf("1. Global Variable\n2. Local variable");
printf("\nSelect which variable would you like us to use:");
aagain:
scanf("%d",&a);
if(a!=1 && a!=2){printf("option Invalid\n");
printf("select the option again: ");
goto aagain;}
printf("1.Factorial\n");
printf("2.Reverse\n");
printf("3.Pallindrome\n");
printf("4.Prime Numbers\n");
printf("5.Fibbonacci series\n");
printf("6. Armstrong number\n");
printf("\nSelect which program do you want to execute:\n");
bagain:
scanf("%d",&b);
if(b<1 || b>6){printf("option Invalid\n");
printf("select the option again: ");
goto bagain;}
printf("Here is your programm: \n");
if(a==1){
if(b==1)gfact();
else if(b==2)greverse();
else if(b==3)gpallindrome();
else if(b==4)gprime();
else if(b==5)gfibbo();
else garm();
}
else{
if(b==1)lfact();
else if(b==2)lreverse();
else if(b==3)lpallindrome();
else if(b==4)lprime();
else if(b==5)lfibbo();
else larm();
}
getch();
}

//programs using global variables
//factorial
void gfact(){
clrscr();
printf("Enter the number: ");
scanf("%d",&x);
f=x;
for(i=x-1;i>0;i--){
f=f*i;
}
printf("Factorial of this number: %d",f);
getch();
}

//reverse
void greverse(){
clrscr();
printf("Enter the word: ");
gets(str);
l=strlen(str);
for(i=0;i<l;i++){
printf("%c",str[l-i-1]);
}
getch();
}

//pallindrome
void gpallindrome(){
clrscr();
printf("Enter the word: ");
fflush(stdin);
gets(str1);
l=strlen(str1);
for(i=0;i<l;i++){
str2[i]=str1[l-1-i];
}
str2[i]=0;
l=strcmp(str1,str2);
if(l==0) printf("\nThis is a Pallindrome");
else printf("\nThis is not a pallindrome");
getch();
}

//prime numbers
void gprime(){
clrscr();
printf("Enter the number you like: ");
scanf("%d",&x);
for(i=2;i<x;i++){
if(x%i==0){
printf("%d is not a prime number",x);
goto end;
}
}
printf("%d is a prime number",x);
end:
getch();
}

void gfibbo(){
clrscr();
x=0;
y=1;
printf("How many number you want in this series: ");
scanf("%d",&j);
printf("%d %d ",x,y);
for(i=0;i<=j-3;i++){
y=x+y;
printf("%d ",y);
x=y-x;
}
getch();
}

void garm()
{
int x,d1,d2,d3,d4;
clrscr();
printf("Enter a number you like: ");
scanf("%d",&x);
if(x<0)x=x*-1;
if(x==0)printf("%d is an armstrong number.",x);
else if(x<100 || x>9999)printf("The next armstrong number after 0 strats from the 3 digits or more\nPLease enter a 3 or 4 digit number only");
else{
	if(x<1000){//checking if 3 digit number
	d1=x/100;      //1st digit
	d2=(x%100)/10; //2nd digit
	d3=x%10;       //3rd digit
		if(((d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3))==x)
		printf("%d is an armstrong number",x);
		else
		printf("%d is not an armstrong number",x);
		}
	else{//for 4 digit number
	d1=x/1000;         //1st digit
	d2=(x%1000)/100;   //2nd digit
	d3=(x%100)/10;     //3rd digit
	d4=x%10;           //4th digit
		if(((d1*d1*d1*d1)+(d2*d2*d2*d2)+(d3*d3*d3*d3)+(d4*d4*d4*d4))==x)
		printf("%d is an armstrong number",x);
		else
		printf("%d is not an armstrong number",x);
		}
	}
getch();
}

//programs using local variables
//factorial
void lfact(){
int x,f,i;
clrscr();
printf("Enter the number: ");
scanf("%d",&x);
f=x;
for(i=x-1;i>0;i--){
f=f*i;
}
printf("Factorial of this number: %d",f);
getch();
}

//reverse
void lreverse(){
char str[25];
int i,l;
clrscr();
printf("Enter the word: ");
gets(str);
l=strlen(str);
for(i=0;i<l;i++){
printf("%c",str[l-i-1]);
}
getch();
}

//pallindrome
void lpallindrome(){
char str1[25],str2[25];
int i,l;
clrscr();
printf("Enter the word: ");
fflush(stdin);
gets(str1);
l=strlen(str1);
for(i=0;i<l;i++){
str2[i]=str1[l-1-i];
}
str2[i]=0;
l=strcmp(str1,str2);
if(l==0) printf("\nThis is a Pallindrome");
else printf("\nThis is not a pallindrome");
getch();
}

//prime numbers
void lprime(){
int x,i;
clrscr();
printf("Enter the number you like: ");
scanf("%d",&x);
for(i=2;i<x;i++){
if(x%i==0){
printf("%d is not a prime number",x);
goto end;
}
}
printf("%d is a prime number",x);
end:
getch();
}

void lfibbo(){
int i,x=0,y=1,j;
clrscr();
printf("How many number you want in this series: ");
scanf("%d",&j);
printf("%d %d ",x,y);
for(i=0;i<=j-3;i++){
y=x+y;
printf("%d ",y);
x=y-x;
}
getch();
}

void larm()
{
int x,d1,d2,d3,d4;
clrscr();
printf("Enter a number you like: ");
scanf("%d",&x);
if(x<0)x=x*-1;
if(x==0)printf("%d is an armstrong number.",x);
else if(x<100 || x>9999)printf("The next armstrong number after 0 strats from the 3 digits or more\nPLease enter a 3 or 4 digit number only");
else{
	if(x<1000){//checking if 3 digit number
	d1=x/100;      //1st digit
	d2=(x%100)/10; //2nd digit
	d3=x%10;       //3rd digit
		if(((d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3))==x)
		printf("%d is an armstrong number",x);
		else
		printf("%d is not an armstrong number",x);
		}
	else{//for 4 digit number
	d1=x/1000;         //1st digit
	d2=(x%1000)/100;   //2nd digit
	d3=(x%100)/10;     //3rd digit
	d4=x%10;           //4th digit
		if(((d1*d1*d1*d1)+(d2*d2*d2*d2)+(d3*d3*d3*d3)+(d4*d4*d4*d4))==x)
		printf("%d is an armstrong number",x);
		else
		printf("%d is not an armstrong number",x);
		}
	}
getch();
}
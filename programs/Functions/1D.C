// 1. Write a program to enter 2 number from the users add them and display the answer, again enter 2 number from the user subtract them and display the answer, again enter 2 number from the user add them and display the answer, again enter 2 number from the user multiply them and display the answer, again enter 2 number from the user subtract them and display the answer, again enter 2 number from the user multiply them and display the answer, again enter 2 number from the user divide them and display the answer, again enter 2 number from the user divide them and display the answer, again enter 2 number from the user add them and display the answer ?

#include<stdio.h>
#include<conio.h>

		int input(){
		int x;
		printf("Enter the number");
		scanf("%d",&x);
		return x;}

			void add(){
			int x,y,z;
			x=input();
			y=input();
			z=x+y;
			output(z);}

				void output(r){
				printf("%d",r);}

			void sub(){
			int x,y,z;
			x=input();
			y=input();
			z=x-y;
			output(z);}

			void mul(){
			int x,y,z;
			x=input();
			y=input();
			z=x*y;
			output(z);}

			void div(){
			float x,y,z;
			x=input();
			y=input();
			z= x/y;
			printf("%f",z);}

				void pos(){
				int x, res;
				x = input();
				if (x>0&&x!=0)
				printf("the answer is %d",-x);
				else
				printf("\the answer is %d",x*x);}

				void greater(){
				int x,y;
				x=input();
				y=input();
				if(x>y)
				printf("%d",x);
				else
				printf("%d",y);}

				void last(){
				int x;
				x = input();
				printf("The last digit is %d",x%10);
				}

				void great(){
				int x,y,z,k;
				x=input();
				y=input();
				printf("\nEnter the 3rd number");
				scanf("%d",&z);
				if (x>y&&x>z)
				output(x);
				else if(y>x&&y>z)
				output(y);
				else
				output(z);}


void main(){
clrscr();
printf("\nAddition\n");
add();
printf("\nsubtraction\n");
sub();
printf("\nmultiplication\n");
mul();
printf("\nAddition\n");
add();
printf("\ndivision\n");
div();
printf("\nsubtraction\n");
sub();
printf("\n -ve printf +ve to sq \n");
pos();
printf("\n division \n");
div();
printf("\nGreater number\n");
greater();
printf("\nlast digit\n");
last();
printf("\ngreat\n");
great();
}
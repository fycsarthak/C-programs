#include<stdio.h>
#include<conio.h>
void main(){
int a[2][2];
int b[2][2];
int c[2][2];
int i,j;
clrscr();
printf("Substract two matrix\n");
printf("Enter data of first matrix\n");
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
	scanf("%d",&a[i][j]);}
	}
printf("Enter data of second matrix");
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
	scanf("%d",&b[i][j]);}
	}
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
	c[i][j]=a[i][j]-b[i][j];}
	}
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
	printf("%d\t",c[i][j]);}
	printf("\n");
	}
	getch();

	}
#include<stdio.h>
#include<conio.h>
void main(){
int a[2][2], transpose[2][2];
int x,y;
clrscr();
printf("Enter element of 2*2 matrix\n");
for(x=0;x<2;x++){
	for(y=0;y<2;y++){
	scanf("%d",&a[x][y]);}
	}
for(x=0;x<2;x++){
	for(y=0;y<2;y++){
	transpose[y][x]=a[x][y]; }

}
printf("transpose of matrix are\n");
for(x=0;x<2;x++){
	for(y=0;y<2;y++){
	printf("%d\t",transpose[x][y]);}
	printf("\n");}
}

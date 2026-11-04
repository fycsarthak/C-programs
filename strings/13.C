//13. Enter two string from user and print difference each character ?

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
char str1[50],str2[50];
int l1,l2,i,l;
clrscr();
printf("Enter the first string: ");
gets(str1);
l1=strlen(str1);
printf("Enter the Second string: ");
gets(str2);
l2=strlen(str2);
if(l1>l2)l=l2;
else if(l1<l2) l=l1;
else l=l1;
printf("Here are the diffrence in each character:\n");
for(i=0;i<l;i++){
printf("%d)%d\n",i+1,str1[i]-str2[i]);
}
if(l1>l2){
for(i=l;i<l1;i++){
printf("%d)%d\n",i+1,str1[i]);
}
}
else if(l1<l2){
for(i=l;i<l2;i++){
printf("%d)%d\n",i+1,str2[i]);
}
}
getch();
}
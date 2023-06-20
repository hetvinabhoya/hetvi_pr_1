//Write C program to find gross salary by adding % of HRA,DA and TA of user choice.

#include<stdio.h>
#include<conio.h>

void main(){
float BS;
float HRA=10;
float DA=5;
float TA=8;
float GS;
clrscr();
printf("enter the value of BS: ");
scanf("%f",&BS);
HRA=BS*(10/100.00);
DA=BS*(5/100.00);
TA=BS*(8/100.00);
GS=BS+HRA+DA+TA;
printf("total of %f",GS);
getch();
}
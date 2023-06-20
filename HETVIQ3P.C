//Write C program to find the third angle of triangle if two other angles are given.

#include<stdio.h>
#include<conio.h>

void main(){
int first_angle=65;
int second_angle=45;
int third_angle;
clrscr();
third_angle=180-(first_angle+second_angle);
printf("%d",third_angle);
getch();
}
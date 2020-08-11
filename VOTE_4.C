#include<stdio.h>
#include<conio.h>
void main(){
int age;
clrscr();
printf("enter your age:");
scanf("%d",&age);
if(age<18) printf("you are not eligible to vote");
else printf("you are eligible for vote");
getch();
}
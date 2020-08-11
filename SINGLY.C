#include<stdio.h>
#include<conio.h>
struct node{
	int data;
	struct node *next;
}*first,*newNode,*temp;
/*
void insertAtBeg(int data){}
void insertAtEnd(int data){}
void insertAfterElement(int data){}
void insertBeforeElement(int data){}
void deleteFirst(){}
void deleteLast(){}
void deleteBeforeElement(){}
void deleteAfterElement(){}
void display(){}
  */
void main(){
	int choice;
	clrscr();
	do{
	printf(" 1.Insert At Beginning\n 2.Insert At End\n 3.Insert After Element\n 4.Insert Before Element\n 5.Delete First\n 6.Delete Last\n 7.Delete Before Element\n 8.Delete After Element\n 9.Display\n 0.Exit \n Enter your choice:");
	scanf("%d",&choice);
	switch(choice){
		default:
		printf("Nothing");
	}
	}while(choice!=0);
	getch();
}
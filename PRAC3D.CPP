#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class String{
       char *str;
       public:
       String(){
	cout<<"In constructor...";
	str=(char *)malloc(sizeof(char));
	cin>>str;
       }
       ~String(){
	cout<<"Object Deleted!";
	delete(str);
       }
       void display(){
	cout<<str;
       }
};
void main(){
	clrscr();
	String s;
	s.display();
	getch();
}
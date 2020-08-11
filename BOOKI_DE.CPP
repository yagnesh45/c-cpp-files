
#include <iostream.h>
#include <conio.h>
class BookDetails{
	public:
	char *title,*author;
	int edition,price,no_of_copies_available;
	BookDetails(){
		cout<<"Title:"; cin>>title;
		cout<<"Author:"; cin>>author;
		cout<<"edition:"; cin>>edition;
		cout<<"Price:"; cin>>price;
		cout<<"Number of Copies:"; cin>>no_of_copies_available;
//		title=t; author=a; edition=e; price=p; no_of_copies_available=no;
	}

	void display(){
		cout<<"Title:"<<title;
		cout<<"\nAuthor:"<<author<<"\nEdition:"<<edition<<"\nPrice:"<<price<<"\nNumber of Copis Available:"<<no_of_copies_available;
	}
      void find(){
	cout<<"In find Function!";
	if(price<250)
		display();
      }
};

void main()
{
   int i;
   BookDetails obj[2];
   clrscr();
   for(i=0;i<2;i++)
    obj[i].find();
   //obj.display();
   getch();
}

#include<conio.h>
#include<iostream.h>
class BankAccount{
	char *depositor, *accType;
	double accNo, balanceAcc;
	public:
	BankAccount(char *dep, char *at, double ano, double bacc){
		depositor=dep; accType=at; accNo=ano; balanceAcc=bacc;
	}
	void deposit(int amount){
		balanceAcc+=amount;
		cout<<amount<<" Deposited in your account...";
	}

	void withdraw(int amount){
		if(balanceAcc>amount){
		balanceAcc-=amount;
		cout<<"Balance after withdrawal:"<<balanceAcc;}
		else cout<<"Amount not valid!!";
	}
	void display(){
		cout<<"Name:"<<depositor<<"\nBalance:"<<balanceAcc;
	}
};

void main(){
	BankAccount b("Yagnesh","Saving",546734,3000);
	int choice,amount;
	clrscr();

	do{
		cout<<"\n1.Deposit IN Account\n2.Withdraw from account\n3.Display details\n0.Exit\nEnter your choice:";
		cin>>choice;
		switch(choice){
			case 1: cout<<"Enter amount:"; cin>>amount;
			b.deposit(amount);
			break;
			case 2: cout<<"Enter Amount:"; cin>>amount;
			b.withdraw(amount);
			break;
			case 3: b.display();
			break;
			default: cout<<"Invalid Choice!";
		}
	}while(choice!=0);
	getch();
}
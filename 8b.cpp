#include<iostream>
#include<conio.h>
using namespace std;
class Person{
    public:
    char *name;
    /*Person(){
        cout<<"Enter Name:";
        cin>>name;
    }*/

    char* getName(){return "Yagnesh";}
};
class Businessman: public Person{
    int income,no_of_people;
public:
    Businessman(){
        cout<<"Enter income and no_of_people involved of Businessman:";
        cin>>income>>no_of_people;
    }

    void findBusinessman(Businessman b[]){
        for(int j=0;j<5;j++){
            if(b[j].no_of_people>10){
                b[j].displayDetails();
            }
        }
    }

    void displayDetails(){
        cout<<"Name of Businessman:"<<getName();
        cout<<"\nIncome:"<<income;
        cout<<"\nNumber of people involved:"<<no_of_people;
    }
};
/*
class Employee: public Person{
    int income;
public:
    Employee(){
        cout<<"Enter income of employee:";
        cin>>income;
    }
};*/
int main(){
    Businessman objs[5];
    objs[0].findBusinessman(objs);
    return 0;
}

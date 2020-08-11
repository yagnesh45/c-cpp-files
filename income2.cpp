#include<bits/stdc++.h>
using namespace std;
class Salaried_person{
    float income,tax,surchrg;
    int age;
    public: Salaried_person(){
        cout<<"Enter the Annual Income of person:";
        cin>>income;
        cout<<"Enter Age of the person:";
        cin>>age;
    }

    Salaried_person(float income,int age){
        this->age=age;
        this->income=income;
    }
    void calculateTax(){
        if(age<=60){
        if(income<=250000.00)
            tax=0;
        else if (income<=500000.00)
            tax=(income-250000.00)*5/100;
        else if (income<=1000000.00)
            tax=(income-500000.00)*20/100;
        else
            tax=(income-1000000.00)*30/100;
        }
        else if(age<=80){
            if(income<=300000.00)
            tax=0;
        else if (income<=500000.00)
            tax=(income-300000.00)*5/100;
        else if (income<=1000000.00)
            tax=(income-500000.00)*20/100;
        else
            tax=(income-1000000.00)*30/100;
        }else{
            if(income<=500000.00)
            tax=0;
        else if (income<=1000000.00)
            tax=(income-500000.00)*20/100;
        else
            tax=(income-1000000.00)*30/100;
        }
        if(tax>10000)
            surchrg=tax*2/100;
        else  surchrg=0;
    }

    void displayTaxDetails(){
        cout<<"Income = "<<income<<"\n";
        cout<<"TAX = "<<tax<<"\n";
        if(tax>10000.00)
        cout<<"Surcharge = "<<surchrg<<"\n";
    }
};
int main()
{
    Salaried_person obj1;
    obj1.calculateTax();
    obj1.displayTaxDetails();
    return 0;
}

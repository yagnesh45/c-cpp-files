#include<bits/stdc++.h>
using namespace std;
int main()
{
float income,tax,surchrg;
cout<<"Enter Income of person : ";
cin>>income;
if(income<=250000.00)
tax=0;
else if (income<=500000.00)
tax=(income-50000.00)*5/100;
else if (income<=1000000.00)
tax=(income-100000.00)*20/100+12500;
else
tax=(income-250000.00)*30/100+112500;

if (tax>10000.00)
surchrg=tax*2/100;
else
surchrg=0;

cout<<"Income = "<<income<<"\n";
cout<<"TAX = "<<tax<<"\n";
cout<<"Surcharge = "<<surchrg<<"\n";
return 0;
}

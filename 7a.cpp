//vehicle rebuild
#include<bits/stdc++.h>
using namespace std;

class number;
class car;
class truck;

class vehicle
{
    int number;
public:
    vehicle(int num)
    {
        number=num;
    }
    vehicle()
    {
        number=0;
    }
    int getn()
    {
        return number;
    }
};

class car:public vehicle
{
    int seats;
    float cmspeed;
public:
    car(int num,int s,float cm):vehicle(num)
    {
        seats=s;
        cmspeed=cm;
    }
    car():vehicle()
    {
        seats=0;
        cmspeed=0;
    }

    friend void compare(car c1,truck t1);
    friend void display(car c1,truck t1);
};

class truck:public vehicle
{
    float capacity,tmspeed;
public:
    truck(int num,float c,float tm):vehicle(num)
    {
        capacity=c;
        tmspeed=tm;
    }
    truck():vehicle()
    {
        capacity=0;
        tmspeed=0;
    }

    friend void compare(car c1,truck t1);
    friend void display(car c1,truck t1);
};

void compare(car c1,truck t1)
{
    cout<<"_______________________________________"<<endl;
    if(c1.cmspeed>t1.tmspeed)
        cout<<"Car Has More Speed"<<endl;
    else
        cout<<"Truck Has More Speed"<<endl;
    cout<<"_______________________________________"<<endl;
}

void display(car c1,truck t1)
{
    cout<<"Vehicle Number"<<endl;
    if(c1.cmspeed>150)
        cout<<c1.getn()<<endl;
    if(t1.tmspeed>150)
        cout<<t1.getn()<<endl;
    cout<<"_______________________________________"<<endl;
}

int main()
{
    int cnum,tnum,cseat;
    float cm,tm,tcap;

    cout<<"Enter Car Number:"<<endl;
    cin>>cnum;
    cout<<"No Of Seats In Car:"<<endl;
    cin>>cseat;
    cout<<"Enter Max Speed Of The Car:"<<endl;
    cin>>cm;

    car c1(cnum,cseat,cm);

    cout<<"************************************"<<endl;

    cout<<"Enter Truck Number:"<<endl;
    cin>>tnum;
    cout<<"Truck Capacity:"<<endl;
    cin>>tcap;
    cout<<"Enter Max Speed Of The Truck:"<<endl;
    cin>>tm;

    cout<<"************************************"<<endl;

    truck t1(tnum,tcap,tm);

    compare(c1,t1);

    display(c1,t1);
}
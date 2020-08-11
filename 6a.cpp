//Operator Overloading + - * two dimensional coordinates
#include<bits/stdc++.h>
using namespace std;

class calc
{
    float x,y;
public:
    calc(float i,float j)
    {
        x=i;
        y=j;
    }
    calc()
    {
        x=0;
        y=0;
    }
    calc operator+(calc c1)
    {
        calc cc;
        cc.x=x+c1.x;
        cc.y=y+c1.y;

        return cc;
    }
    calc operator-(calc c1)
    {
        calc cc;
        cc.x=x-c1.x;
        cc.y=y-c1.y;

        return cc;
    }
    calc operator*(calc c1)
    {
        calc cc;
        cc.x=x*c1.x;
        cc.y=y*c1.y;

        return cc;
    }
    void display()
    {
        cout<<x<<"&"<<y<<endl;
    }
};

int main()
{
    float i,j;

    cout<<"Enter First Float i:"<<endl;
    cin>>i;
    cout<<"Enter First Float j:"<<endl;
    cin>>j;


    calc c1(i,j);

    cout<<"Enter Second Float i:"<<endl;
    cin>>i;
    cout<<"Enter Second Float j:"<<endl;
    cin>>j;

    calc c2(i,j);

    calc c3,c4,c5;

    c3=c1+c2;
    c4=c1-c2;
    c5=c1*c2;

    cout<<"Summation Is:"<<endl;
    c3.display();
    cout<<"Subtraction Is:"<<endl;
    c4.display();
    cout<<"Multiplication Is:"<<endl;
    c5.display();

}

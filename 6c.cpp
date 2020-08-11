//box dimensions using operator overloading
#include<bits/stdc++.h>
using namespace std;

class box
{
    float len,wid,hei;
public:
    box(float l,float w,float h)
    {
        len=l;
        wid=w;
        hei=h;
    }
    box()
    {
        len=wid=hei=0;
    }

    void display()
    {
        cout<<"length:"<<len<<endl;
        cout<<"width:"<<wid<<endl;
        cout<<"height"<<hei<<endl;
    }

    friend box operator+(box b0,box b1);
    friend box operator-(box b0,box b1);
    friend box operator++(box b0);
    friend box operator--(box b0);

};

box operator+(box b0,box b1)
{
    box bn;
    bn.len=b0.len+b1.len;
    bn.wid=b0.wid+b1.wid;
    bn.hei=b0.hei+b1.hei;
    return bn;
}

box operator-(box b0,box b1)
{
    box bn;
    bn.len=b0.len-b1.len;
    bn.wid=b0.wid-b1.wid;
    bn.hei=b0.hei-b1.hei;
    return bn;
}

box operator ++(box b0)
{
    box bn;
    bn.len=b0.len+1;
    bn.wid=b0.wid+1;
    bn.hei=b0.hei+1;
    return bn;
}

box operator --(box b0)
{
    box bn;
    bn.len=b0.len-1;
    bn.wid=b0.wid-1;
    bn.hei=b0.hei-1;
    return bn;
}

int main()
{
    float x,y,z;

    cout<<"Enter Length:"<<endl;
    cin>>x;
    cout<<"Enter Width:"<<endl;
    cin>>y;
    cout<<"Enter Height:"<<endl;
    cin>>z;

    box b1(x,y,z);

    cout<<"Enter Length:"<<endl;
    cin>>x;
    cout<<"Enter Width:"<<endl;
    cin>>y;
    cout<<"Enter Height:"<<endl;
    cin>>z;

    box b2(x,y,z);

    box b3,b4,b5,b6;

    b3=b1+b2;
    b4=b1-b2;
    b5=++b1;
    b6=--b2;

    b3.display();
    b4.display();
    b5.display();
    b6.display();
}


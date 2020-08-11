#include<bits/stdc++.h>
using namespace std;
class string1
{
    char *name;
public:
    string1()
    {
        name=new char[30];
        cout<<"enter string:";
        gets(name);
    }
    string1(const string1 &a)
    {
        int len;
        len=strlen(a.name);
        name=new char[len];
        strcpy(name,a.name);
    }
    void cnct(string1 a,string1 b)
    {
        strcat(a.name,b.name);
        cout<<a.name;
    }
    ~string1()
    {
        delete name;
    }
};
int main()
{
    string1 o1;
    string1 o2;
    o1.cnct(o1,o2);
}
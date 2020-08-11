#include<bits/stdc++.h>
using namespace std;
class fact
{
    int *n;
public:
    fact(int x)
    {
        n=new int;
        *n=x;
    }
    fact(const fact &x)
    {
        n=new int;
        n=x.n;
    }
    void f()
    {
        int x=1,i=1;
        while(*n!=1)
        {
            x=x**n;
            *n=*n-1;
        }
        cout<<x;
    }
    ~fact()
    {
        delete n;
    }
};
int main()
{
    fact a(5);
    a.f();
    return 0;
}

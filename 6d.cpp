//overload subscript operator
#include<bits/stdc++.h>
using namespace std;

class max_num
{
    int a[10];
public:
    max_num()
    {
        int i;
        cout<<"Enter 10 Values"<<endl;
        for(i=0;i<10;i++)
        {
            cin>>a[i];
        }
    }
    int &operator[](int x)
    {
        return a[x];
    }
    /*
    void maxx()
    {
        int i,j;
        int maxn;
        maxn=a[0];
        for(i=1;i<10;i++)
        {
            if(maxn<a[i])
                {
                    maxn=a[i];
                    j=i;
                }
        }
    }*/
};

int main()
{
    max_num m1;
    int maxn,maxi,i,j;

    maxn=m1[0];
        for(i=1;i<10;i++)
        {
            if(maxn<m1[i])
                {
                    maxn=m1[i];
                    j=i;
                }
        }

        cout<<maxn<<endl;
}

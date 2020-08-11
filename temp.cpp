//JSD
#include<iostream>
#define ll long long
using namespace std;
int main()
{
	ll t;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>t;
	while(t--)
	{

	ll a,b;
	cin>>a>>b;
	ll even=b/2-(a-1)/2;
	ll odd=b-a+1-even;
	if(odd%2==0)
	cout<<"Even\n";
	else
	cout<<"Odd\n";

	}
	return 0;
}

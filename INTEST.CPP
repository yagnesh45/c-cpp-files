#include<iostream>
using namespace std;
int main(){
    int n,k,cnt=0,t;
    cin>>n>>k;
    while(n--){
        cin>>t;
        if(t%k==0) cnt++;
    }
    cout<<cnt;
}

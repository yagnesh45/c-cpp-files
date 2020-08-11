#include<iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1){
        return n;
    }
    return n*fact(n-1);
}
int main(){
    int t,n,fac[101];
    for(int i=1;i<=100;i++){
        fac[i]=fact(i);
    }
    cin>>t;
    while(t<=100 && t--){
        cin>>n;
        if(n>=1 && n<=100)
        cout<<fac[n]<<endl;
    }
}

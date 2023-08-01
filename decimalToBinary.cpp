#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0,i=0,ans2=0,x;
    // LOGIC FOR POSITIVE NUMBERS (DECIMAL TO BINARY)
    while(n!=0){
        int bit=n&1;
        ans = (bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<ans;

    //BINARY TO DECIMAL

    i=0;
    while(ans!=0){
        x=ans%10;
        ans2=(x*pow(2,i))+ans2;
        ans=ans/10;
        i++;
    }
    cout<<ans2<<endl;
}
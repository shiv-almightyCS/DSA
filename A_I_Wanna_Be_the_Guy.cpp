#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int total=(n*(n+1))/2;
    // cout<<total;
    int p,sum1=0,a,q,b,sum2=0;
    cin>>p;
    for(int i=0;i<p;i++){
        cin>>a;
        sum1+=a;
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>b;
        sum2+=b;
    }
    cout<<sum1<<" "<<sum2<<endl;
    if((sum1>(total/2)) && (sum2>(total/2)))
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
        
}